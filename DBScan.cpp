#include<iostream>
#include<vector>
using namespace std;


void DBScan(vector<int>D,int eps, int minPoints, vector<int>P){
    int c = 0;
    for (int i =0; i<P.size();i++){
        P[i]= 1;
        vector<int> sphere_points = regionQuery(P,eps);
        if(sphere_points.size()<minPoints){
            continue;
        }
        else{
            c= D[i];
            expandCluster(P,sphere_points,c,eps,minPoints);
        }

    }
}

void expandCluster(vector<int> P,vector<int>sphere_points, int C,int epsilon, int min_points){
  for(int i =0; i< sphere_points.size();i++){
      if(P[i]!=0){
          P[i] =1;
          sphere_points=regionQuery(P,epsilon);
          if(sphere_points.size()>= min_points){
              sphere_points[i]==p;
          }
          if 
      }

  } 
}

vector<int> regionQuery(vector<int>P,int epsilon){

}



int main(){

}