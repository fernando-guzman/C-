 #include <iostream>
 
 using namespace std;
 
 int main()
 {
    /*	
				Bool     		Float               Double
	 PESO:     1 byte          4 bytes              8 bytes
	 RANGO:       -       1.17e-38 a 3.40e38   2.22e-308 a 1.80e308
	 
     */
	 
	 cout<<"Bool: "<<sizeof(bool)<<" byte(s)"<<endl;
	 cout<<"Float: "<<sizeof(float)<<" byte(s)"<<endl;
	 cout<<"Double: "<<sizeof(double)<<" byte(s)"<<endl;
	 
	 return false; 	
 }
 

