#include<stdio.h>
#include <stdlib.h>
int main()
{
void prarr(int cr,int ht1,int ht2)
{
    if(cr==1)
        printf("腳色職業:【**太白**】");
    else if(cr==2)
        printf("腳色職業:【**神威**】");
    else if(cr==3)
        printf("腳色職業:【**神刀**】");
    else if(cr==4)
        printf("腳色職業:【**真武**】");
    else if(cr==5)
        printf("腳色職業:【**五毒**】");
    else if(cr==6)
        printf("腳色職業:【**丐幫**】");
    else if(cr==7)
        printf("腳色職業:【**天香**】");
    else if(cr==8)
        printf("腳色職業:【**唐門**】");
    printf("\n");
    if(ht1==1)
        printf("心法刻印:【歸鞘】");
    else if(ht1==2)
        printf("心法刻印:【厚德】");
    else if(ht1==3)
        printf("心法刻印:【白刃】");
    else if(ht1==4)
        printf("心法刻印:【修羅】");
    else if(ht1==5)
        printf("心法刻印:【同袍】");
    else if(ht1==6)
        printf("心法刻印:【征旗】");
    else if(ht1==7)
        printf("心法刻印:【青鳥】");
    else if(ht1==8)
        printf("心法刻印:【金戈】");
    else if(ht1==9)
        printf("心法刻印:【鐵馬】");
    else if(ht1==10)
        printf("心法刻印:【獅吼】");

    if(ht2==1)
        printf("【歸鞘】");
    else if(ht2==2)
        printf("【厚德】");
    else if(ht2==3)
        printf("【白刃】");
    else if(ht2==4)
        printf("【修羅】");
    else if(ht2==5)
        printf("【同袍】");
    else if(ht2==6)
        printf("【征旗】");
    else if(ht2==7)
        printf("【青鳥】");
    else if(ht2==8)
        printf("【金戈】");
    else if(ht2==9)
        printf("【鐵馬】");
    else if(ht2==10)
        printf("【獅吼】");
}
int main()
{
int cr=0,ht1=0,ht2=0;
    printf("====================天涯八荒八大門派====================\n");
    printf("]︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷[\n");
    printf("|【**太白**】||【**神威**】||【**神刀**】||【**真武**】|\n");
    printf("|【**五毒**】||【**丐幫**】||【**天香**】||【**唐門**】|\n");
    printf("]︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸[\n");
    printf("======>選擇職業\n");
    printf("卍");
    scanf("%d",&cr);

    printf("=================精通各路心法經脈=================\n");
    printf("]︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷[\n");
    printf("|【歸鞘】【厚德】【白刃】【修羅】【同袍】【征旗】|\n");
    printf("|【青鳥】【金戈】【鐵馬】【獅吼】【無滅】【極樂】|\n");
    printf("|【靈素】【偃師】【長天】【速生】【饕餮】【尋歡】|\n");
    printf("|【地藏】【善緣】【絕命】【無生】【九嬰】【止殺】|\n");
    printf("|【悲回風】【殺菩提】【羅喉訣】                  |\n");
    printf("|【淬火流毒】【風華玉碎】【煉武力道】【煉武氣勁】|\n");
    printf("|【煉武根骨】【煉武洞察】【煉武身法】【刑天滄海】|\n");
    printf("|【獵風沉舟】【嘯天鎮岳】【拜月冰心】            |\n");
    printf("]︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸[\n");
    printf("======>選擇心法\n");
    printf("卍");
    scanf("%d %d",&ht1,&ht2);
    prarr(cr,ht1,ht2);

return 0;
}
