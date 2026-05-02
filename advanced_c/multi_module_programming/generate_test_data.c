#include <stdio.h>
#include <stdint.h>

int main()
{
    FILE *fp = fopen("test_data.bin", "wb");
    if (!fp) {
        perror("Failed to create file");
        return 1;
    }
    
    // Write header: version=1, count=5
    uint16_t version = 1;
    uint16_t count = 5;
    
    fwrite(&version, sizeof(uint16_t), 1, fp);
    fwrite(&count, sizeof(uint16_t), 1, fp);
    
    // Add some employee data (example: 4 bytes per employee for simplicity)
    for (int i = 0; i < 5; i++) {
        int employee_id = 100 + i;
        fwrite(&employee_id, sizeof(int), 1, fp);
    }
    
    fclose(fp);
    printf("Created test_data.bin with %d employees\n", count);
    return 0;
}
