#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct Data
{
    int force,gas,bone,insight,body;   //屬性值:力道，氣勁，根骨，洞察，身法。
    int Ew,Iw,Ed,Id,blood;             //能力值:外功，內功，外防，內防，氣血。
    int CP;                            //戰力
};
struct Mode
{
    Data data;
};
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
    else if(ht1==11)
        printf("心法刻印:【無滅】");
    else if(ht1==12)
        printf("心法刻印:【極樂】");
    else if(ht1==13)
        printf("心法刻印:【靈素】");
    else if(ht1==14)
        printf("心法刻印:【偃師】");
    else if(ht1==15)
        printf("心法刻印:【長天】");
    else if(ht1==16)
        printf("心法刻印:【速生】");
    else if(ht1==17)
        printf("心法刻印:【饕餮】");
    else if(ht1==18)
        printf("心法刻印:【尋歡】");
    else if(ht1==19)
        printf("心法刻印:【地藏】");
    else if(ht1==20)
        printf("心法刻印:【善緣】");
    else if(ht1==21)
        printf("心法刻印:【絕命】");
    else if(ht1==22)
        printf("心法刻印:【無生】");
    else if(ht1==23)
        printf("心法刻印:【九嬰】");
    else if(ht1==24)
        printf("心法刻印:【止殺】");
    else if(ht1==25)
        printf("心法刻印:【悲回風】");
    else if(ht1==26)
        printf("心法刻印:【殺菩提】");
    else if(ht1==27)
        printf("心法刻印:【羅喉訣】");
    else if(ht1==28)
        printf("心法刻印:【淬火流毒】");
    else if(ht1==29)
        printf("心法刻印:【風華玉碎】");
    else if(ht1==30)
        printf("心法刻印:【煉武力道】");
    else if(ht1==31)
        printf("心法刻印:【煉武氣勁】");
    else if(ht1==32)
        printf("心法刻印:【煉武根骨】");
    else if(ht1==33)
        printf("心法刻印:【煉武洞察】");
    else if(ht1==34)
        printf("心法刻印:【煉武身法】");
    else if(ht1==35)
        printf("心法刻印:【刑天滄海】");
    else if(ht1==36)
        printf("心法刻印:【獵風沉舟】");
    else if(ht1==37)
        printf("心法刻印:【嘯天鎮岳】");
    else if(ht1==38)
        printf("心法刻印:【拜月冰心】");


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
    else if(ht2==11)
        printf("【無滅】");
    else if(ht2==12)
        printf("【極樂】");
    else if(ht2==13)
        printf("【靈素】");
    else if(ht2==14)
        printf("【偃師】");
    else if(ht2==15)
        printf("【長天】");
    else if(ht2==16)
        printf("【速生】");
    else if(ht2==17)
        printf("【饕餮】");
    else if(ht2==18)
        printf("【尋歡】");
    else if(ht2==19)
        printf("【地藏】");
    else if(ht2==20)
        printf("【善緣】");
    else if(ht2==21)
        printf("【絕命】");
    else if(ht2==22)
        printf("【無生】");
    else if(ht2==23)
        printf("【九嬰】");
    else if(ht2==24)
        printf("【止殺】");
    else if(ht2==25)
        printf("【悲回風】");
    else if(ht2==26)
        printf("【殺菩提】");
    else if(ht2==27)
        printf("【羅喉訣】");
    else if(ht2==28)
        printf("【淬火流毒】");
    else if(ht2==29)
        printf("【風華玉碎】");
    else if(ht2==30)
        printf("【煉武力道】");
    else if(ht2==31)
        printf("【煉武氣勁】");
    else if(ht2==32)
        printf("【煉武根骨】");
    else if(ht2==33)
        printf("【煉武洞察】");
    else if(ht2==34)
        printf("【煉武身法】");
    else if(ht2==35)
        printf("【刑天滄海】");
    else if(ht2==36)
        printf("【獵風沉舟】");
    else if(ht2==37)
        printf("【嘯天鎮岳】");
    else if(ht2==38)
        printf("【拜月冰心】");

        printf("\n");
}
void listh3(int ht1,int ht2,Mode mode)
{
            printf("力道:%d",mode.data.force);
            printf("氣勁:%d",mode.data.gas);
            printf("根骨:%d",mode.data.bone);
            printf("洞察:%d",mode.data.insight);
            printf("身法:%d",mode.data.body);
}
void cl(int ht1,int ht2,Data data)
{
    if(ht1==1)
    {
        data.force=data.force+44;
        data.gas=data.gas+69;
        data.bone=data.bone+109;
        data.insight=data.insight+49;
        data.body=data.body+46;
    }
}
void listh1(int ht1)
{
    if(ht1==1)
    {
        printf("======================================\n");
        printf("歸鞘與【14.偃師】相生,身法提升17%%\n");
        printf("歸鞘與【38.拜月冰心】相生,洞察提升18%%\n");
        printf("======================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==2)
    {
        printf("=======================================\n");
        printf("厚德與【20.善緣】相生,氣勁提升17%%\n");
        printf("厚德與【38.拜月冰心】相生,洞察提升18%%\n");
        printf("=======================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==3)
    {
        printf("====================================\n");
        printf("白刃與【25.悲回風】相生,力道提升22%%\n");
        printf("====================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==4)
    {
        printf("====================================\n");
        printf("修羅與【25.悲回風】相生,力道提升16%%\n");
        printf("修羅與【23.九嬰】相生,根骨提升18%%\n");
        printf("====================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==5)
    {
        printf("==============================================\n");
        printf("同袍與【6.征旗】相生,力道提升12%%,氣勁提升12%%\n");
        printf("同袍與【13.靈素】相生,根骨提升16%%\n");
        printf("==============================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==6)
    {
        printf("==============================================\n");
        printf("征旗與【8.金戈】相生,洞察提升17%%\n");
        printf("征旗與【9.鐵馬】相生,力道提升12%%,氣勁提升10%%\n");
        printf("==============================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==7)
    {
        printf("==================================\n");
        printf("青鳥與【20.善緣】相生,氣勁提升20%%\n");
        printf("==================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==8)
    {
        printf("==============================================\n");
        printf("金戈與【9.鐵馬】相生,力道提升12%%,氣勁提升10%%\n");
        printf("金戈與【26.殺菩提】相生,身法提升16%%\n");
        printf("==============================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==9)
    {
        printf("==============================================\n");
        printf("鐵馬與【8.金戈】相生,洞察提升17%%\n");
        printf("鐵馬與【6.征旗】相生,力道提升12%%,氣勁提升10%%\n");
        printf("==============================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
    else if(ht1==10)
    {
        printf("==================================\n");
        printf("獅吼與【8.金戈】相生,洞察提升16%%\n");
        printf("獅吼與【3.白刃】相生,洞察提升18%%\n");
        printf("==================================\n");
        printf("是否選擇建議心法?(是直接選擇編號)\n");
    }
}
void listh2(int ht2)
{
    if(ht2==1)
    {
        printf("======================================\n");
        printf("歸鞘與【14.偃師】相生,身法提升17%%\n");
        printf("歸鞘與【38.拜月冰心】相生,洞察提升18%%\n");
        printf("======================================\n");
    }
    else if(ht2==2)
    {
        printf("======================================\n");
        printf("厚德與【20.善緣】相生,氣勁提升17%%\n");
        printf("厚德與【38.拜月冰心】相生,洞察提升18%%\n");
        printf("======================================\n");
    }
    else if(ht2==3)
    {
        printf("====================================\n");
        printf("白刃與【25.悲回風】相生,力道提升22%%\n");
        printf("====================================\n");
    }
    else if(ht2==4)
    {
        printf("====================================\n");
        printf("修羅與【25.悲回風】相生,力道提升16%%\n");
        printf("修羅與【23.九嬰】相生,根骨提升18%%\n");
        printf("====================================\n");
    }
    else if(ht2==5)
    {
        printf("==============================================\n");
        printf("同袍與【6.征旗】相生,力道提升12%%,氣勁提升12%%\n");
        printf("同袍與【13.靈素】相生,根骨提升16%%\n");
        printf("==============================================\n");
    }
    else if(ht2==6)
    {
        printf("==============================================\n");
        printf("征旗與【8.金戈】相生,洞察提升17%%\n");
        printf("征旗與【9.鐵馬】相生,力道提升12%%,氣勁提升10%%\n");
        printf("==============================================\n");
    }
    else if(ht2==7)
    {
        printf("==================================\n");
        printf("青鳥與【20.善緣】相生,氣勁提升20%%\n");
        printf("==================================\n");
    }
    else if(ht2==8)
    {
        printf("==============================================\n");
        printf("金戈與【9.鐵馬】相生,力道提升12%%,氣勁提升10%%\n");
        printf("金戈與【26.殺菩提】相生,身法提升16%%\n");
        printf("==============================================\n");
    }
    else if(ht2==9)
    {
        printf("==============================================\n");
        printf("鐵馬與【8.金戈】相生,洞察提升17%%\n");
        printf("鐵馬與【6.征旗】相生,力道提升12%%,氣勁提升10%%\n");
        printf("==============================================\n");
    }
    else if(ht2==10)
    {
        printf("==================================\n");
        printf("獅吼與【8.金戈】相生,洞察提升16%%\n");
        printf("獅吼與【3.白刃】相生,洞察提升18%%\n");
        printf("==================================\n");
    }
}
int main()
{
    Mode mode;
    int cr=0,ht1=0,ht2=0;
    char choose='Y';
    while(choose=='Y')
    {
        printf("=========================天涯八荒八大門派============================\n");
        printf("]︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷[\n");
        printf("|【**1.太白**】||【**2.神威**】||【**3.神刀**】||【**4.真武**】    |\n");
        printf("|【**5.五毒**】||【**6.丐幫**】||【**7.天香**】||【**8.唐門**】    |\n");
        printf("]︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸[\n");
        printf("======>選擇職業\n");
        printf("卍");
        scanf("%d",&cr);

        char select='N';
        while(select=='N')
        {
            printf("\n");
            printf("=========================精通各路心法經脈============================\n");
            printf("]︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷[\n");
            printf("|【1.歸鞘】【2.厚德】【3.白刃】【4.修羅】【5.同袍】【6.征旗】      |\n");
            printf("|【7.青鳥】【8.金戈】【9.鐵馬】【10.獅吼】【11.無滅】【12.極樂】   |\n");
            printf("|【13.靈素】【14.偃師】【15.長天】【16.速生】【17.饕餮】【18.尋歡】|\n");
            printf("|【19.地藏】【20.善緣】【21.絕命】【22.無生】【23.九嬰】【24.止殺】|\n");
            printf("|【25.悲回風】【26.殺菩提】【27.羅喉訣】                           |\n");
            printf("|【28.淬火流毒】【29.風華玉碎】【30.煉武力道】【31.煉武氣勁】      |\n");
            printf("|【32.煉武根骨】【33.煉武洞察】【34.煉武身法】【35.刑天滄海】      |\n");
            printf("|【36.獵風沉舟】【37.嘯天鎮岳】【38.拜月冰心】                     |\n");
            printf("]︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸[\n");
            printf("======>選擇心法\n");
            printf("卍");
            scanf("%d",&ht1);
            listh1(ht1);
            printf("卍");
            scanf("%d",&ht2);
            listh2(ht2);
            printf("已選擇:%d %d 心法，是否確定繼續計算，否，則跳回主選單?(Y/N)\n", ht1, ht2);
            printf("卍");
            getchar();
            select =toupper(getchar());
            printf("輸入戰力: ");
        }

            printf("\n==========腳色資料框==========\n");
            printf("]︷︷︷︷︷︷︷︷︷︷︷︷︷︷︷[\n");
            prarr(cr,ht1,ht2);
            printf("\n]︸︸︸︸︸︸︸︸︸︸︸︸︸︸︸[\n");


        printf("是否結束遊戲?，否，則跳回主選單(Y/N)\n");
        getchar();
        select =toupper(getchar());
        }
    return 0;
}

