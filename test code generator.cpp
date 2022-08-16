#include <bits/stdc++.h>      
using namespace std; 
int randomize_n()  
{    
    return (rand() % 1000);  
} 
  int randomize_w()  
{    
    return (rand() % 500);  
} 
int randomize_hh()  
{    
    return (rand() % 24);  
} 
int randomize_mm()  
{    
    return (rand() % 60);  
} 
int randomize_ss()  
{    
    return (rand() % 60);  
} 

int main ()  
{ 
    int t;
    cin>>t;
     srand(time(NULL));  
    
  vector<int> n(t); 
   generate(n.begin(), n.end(), randomize_n); 
  vector<int> w(t); 
  generate(w.begin(), w.end(), randomize_w);
vector<int> hh(t); 
  generate(hh.begin(), hh.end(), randomize_hh);
vector<int> mm(t); 
  generate(mm.begin(), mm.end(), randomize_mm);
vector<int> ss(t); 
  generate(ss.begin(), ss.end(), randomize_ss);

  for (int i=0; i<n.size(); i++) {
     cout << n[i] << " "<<w[i] <<endl; 
     cout << hh[i] << " "<<mm[i] <<" "<<ss[i]<<endl; 
     
vector<int> nn(n[i]); 
  generate(nn.begin(), nn.end(), randomize_n);
for (int k=0; k<nn.size(); k++) 
     cout <<nn[k]<<" " ; 
     cout<<endl;

  }
    
  return 0; 
} 