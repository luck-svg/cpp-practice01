 #include<iostream>
using namespace std;

// int main(){
//     int n,r;
//     cin >> n >> r;

//     long long f = 1, d = 1;
//     int i = 1;

//     while (i <= r) {
//         f = f * (n - i + 1);  // numerator
//         d = d * i;            // denominator
//         i++;
//     }

//     cout << f / d << endl;
// }



// int main() {
//     int n, r;
//     cin >> n >> r;

//     int num = 1, den1 = 1, den2 = 1;

//     // n!
//     for (int i = 1; i <= n; i++) {
//         num *= i;
//     }

//     // r!
//     for (int i = 1; i <= r; i++) {
//         den1 *= i;
//     }

//     // (n-r)!
//     for (int i = 1; i <= n - r; i++) {
//         den2 *= i;
//     }

//     int nCr = num / (den1 * den2);
//     cout << nCr << endl;

//     return 0;
// }


int Factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n =Factorial(n);
    int fact_r =Factorial(r);
    int fact_nmr =Factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n;int r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
     
}