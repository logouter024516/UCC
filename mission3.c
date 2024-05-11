#include <stdio.h>

int main(void){
    int fi,si;
    float data;
    int h=0,m=0,s=0;
    printf("환영합니다!\n");
    printf("당신이 원하는 기능 번호를 입력해주세요!\n");
    printf("1.길이변환 2.온도변환 3.데이터변환 4. 시간변환\n");
    scanf("%d",&fi);
    if(fi==1){
        printf("1번 길이변환을 선택했습니다 원하시는 기능과 데이터를 입력해주세요 형식:기능번호 데이터\n");
        printf("1.cm to inch 2.inch to cm 3. cm to m 4.m to cm 5.inch to m 6. m to inch\n");
        scanf("%d %f",&si,&data);
        switch (si){
            case 1:
                printf("%.2f inch",data/2.54);
                break;
            case 2:
                printf("%.2f cm",data*2.54);
                break;
            case 3:
                printf("%.0f m",data/100);
                break;
            case 4:
                printf("%.0f cm",data*100);
                break;
            case 5:
                printf("%.2f m",data/39.37);
                break;
            case 6:
                printf("%.2f inch",data*39.37);
                break;
            default:
                printf("ERROR!!!!!!!");
                break;
        }
    }else if(fi==2){
        printf("2번 온도변환을 선택하셨습니다\n");
        printf("원하시는 기능과 데이터를 입력해주세요 형식:기능번호 데이터\n");
        printf("1.°C to ℉ 2. ℉ to °C\n");
        scanf("%d %f",&si,&data);
        switch (si){
            case 1:
                printf("%.2f℉",1.8*data+32);
                break;
            case 2:
                printf("%.2f°C",(data-32)/1.8);
                break;
        }

    }else if(fi==3){
        printf("3번 데이터변환을 선택하셨습니다\n");
        printf("원하시는 기능과 데이터를 입력해주세요 형식:기능번호 데이터\n");
        printf("1.byte to kilobyte 2. kilobyte to byte\n");
        scanf("%d %f",&si,&data);
        switch(si){
            case 1:
                printf("%.2fkilobyte",data/1000);
                break;
            case 2:
                printf(".2f byte",data*1000);
        }
    }else if(fi==4){
        printf("4번 시간변환을 선택하셨습니다\n");
        printf("원하시는 기능을 입력해주세요\n");
        printf("1.second to time 2. time to second\n");
        scanf("%d",&si);
        switch(si){
            case 1:
                printf("초를 숫자로 입력해주세요(정수만입력가능): ");
                scanf("%f",&data);
                s=data;
                if(s>=3600){ 
                     h=s/3600; 
                        m=s%3600/60; 
                     s = s%3600%60; 
                        printf("%02d:%02d:%02d",h,m,s); 
                 }  else if(s>=60){ 
                       m=s/60; 
                        s = s%60; 
                     printf("00:%02d:%02d",m,s); 
                 }else 
                     printf("00:00:%02d",s); 
                break;
            case 2:
                printf("시간을 형식에 맞춰 입력해주세요(형식:HH:MM:SS): ");
                scanf("%d:%d:%d",&h,&m,&s);
                printf("%d",h*3600+m*60+s);

        }
    }



}