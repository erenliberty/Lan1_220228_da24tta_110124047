//MSSV:11012047
//TEN:LAM NGUYEN NHAT DUY
//LOP:DA24TTA

#include <stdio.h>

int main() {
    float timehoctap[7]; 
    char* ngayTrongTuan[] = {"Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay", "Chu Nhat"};
    float tongSoGio = 0, trungBinh;
    float mucTieu; 
    int i, demVuotMucTieu = 0, demKhongVuotMucTieu = 0;
    int ngayHocNhieuNhat = 0, ngayHocItNhat = 0; 

    printf("Nhap thoi gian hoc tap moi ngay trong tuan (0 <= thoi gian <= 15):\n");
    for (i = 0; i < 7; i++) 
	{
        do 
		{
            printf("%s: ", ngayTrongTuan[i]);
            scanf("%f", &timehoctap[i]);
            if (timehoctap[i] < 0 || timehoctap[i] > 15) 
			{
                printf("Gia tri khong hop le! Vui long nhap lai.\n");
            }
        } while (timehoctap[i] < 0 || timehoctap[i] > 15);

        tongSoGio += timehoctap[i]; //tong so gio hoc trong tuan
       
        // xac dinh ngay hoc nhieu nhat ngay hoc it nhat
        if (timehoctap[i] > timehoctap[ngayHocNhieuNhat]) 
		{
            ngayHocNhieuNhat = i;
        }
        if (timehoctap[i] < timehoctap[ngayHocItNhat]) 
		{
            ngayHocItNhat = i;
        }
    }

    // trung binh gio hoc moi ngay
    trungBinh = tongSoGio / 7;

    printf("\nNhap muc tieu so gio hoc tap (X): ");
    scanf("%f", &mucTieu);

    // dem so ngay vuot muc tieu
    for (i = 0; i < 7; i++) 
	{
        if (timehoctap[i] > mucTieu) 
		{
            demVuotMucTieu++;
        } else 
		{
            demKhongVuotMucTieu++;
        }
    }

    // Hien thi ket qua 
    printf("\nThoi gian hoc tap moi ngay trong tuan la:\n");
    for (i = 0; i < 7; i++) 
	{
        printf("%s: %.2f gio\n", ngayTrongTuan[i], timehoctap[i]);
    }

    printf("\nTong so gio hoc tap trong tuan: %.2f gio\n", tongSoGio);
    printf("Trung binh so gio hoc tap moi ngay: %.2f gio\n", trungBinh);
    printf("Ngay hoc nhieu nhat: %s (%.2f gio)\n", ngayTrongTuan[ngayHocNhieuNhat], timehoctap[ngayHocNhieuNhat]);
    printf("Ngay hoc it nhat: %s (%.2f gio)\n", ngayTrongTuan[ngayHocItNhat], timehoctap[ngayHocItNhat]);
    printf("So ngay vuot muc tieu: %d ngay\n", demVuotMucTieu);
    printf("So ngay khong vuot muc tieu: %d ngay\n", demKhongVuotMucTieu);

    return 0;
}


