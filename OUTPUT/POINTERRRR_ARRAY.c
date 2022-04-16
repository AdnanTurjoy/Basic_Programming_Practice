
#include<stdio.h>
int main()
{
    int a[4]= {5,4,7,9};
    int *pt;
    pt=&a;
    printf("Address of 1st element of ARRAY a = %d\n",pt);
    printf("Value of 1st element of ARRAY a =%d\n",*pt);        /// শুধু  pt হলে a এর প্রথম ইন্ডেক্সের এড্রেস প্রিন্ট করবে, *pt হলে ১ম ইন্ডেক্সের ভ্যালু দিবে
    printf("Value of pt[0],pt[1],pt[2],pt[3] = %d %d %d %d\n",pt[0],pt[1],pt[2],pt[3]);  /// এরের ভ্যালু প্রিন্ট করতে (*) দিতে হয় না । কিন্তু অবশ্যই এরে প্রিন্টের মত করতে হবে।
    // printf("*(++pt) = %d\n",*(++pt));               ///  এড্রেসের মান ১ বেরে পরের ঈন্ডেক্সের ভ্যালু পয়েন্ট করল।
    ++*pt;                                         /// শুধু ১ম ইন্ডেক্সের ভ্যালু বাড়বে কারন *pt মানে ১ম  এরের ভ্যালু (ডিফল্ট)
    printf("++*pt Increment of 1st element value of Array = %d %d %d %d\n",pt[0],pt[1],pt[2],pt[3]);
    ++pt;
    printf("%d\n",pt[0]);              ///  এইক্ষেত্রে pt এর এড্রেস ১ বাড়ল তাই পড়ের এরে ইলিমেন্ট কে পয়েন্ট করল। এখন *pt=4 and pt[0] = 4 হবে। এরের ১ টা ইলিমেন্ট কমে যাবে , a[0] = 5 হারিয়ে গেছে

    printf("%d %d\n",*(pt+1), pt[1]);     ///  *(pt+1), pt[1] দুইটাই একি ইন্ডেক্সে প্রিন্ট করবে


    /// ARRAY VALUE DISTRIBUTION
    ///  pt[0]   =   *pt
    ///  pt[1]   =   *(pt+1)
    ///  pt[2]   =   *(pt+2)
    ///  pt[3]   =   *(pt+3)



    return 0;
}
