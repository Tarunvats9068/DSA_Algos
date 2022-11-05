#include<bits/stdc++.h>
using namespace std;

            vi[y+1]=1;
             cout<<y<<" ";
         for(auto x:g[y])
        {   if(!vi[x+1])
        {
            qe.push(x);
        }      
        }
        }
        
       
    }
    void Addedge(int x,int y)
   {
        g[x].push_back(y);
        g[y].push_back(x);
    }

};

int main()
{
  Graph gr;
  gr.Addedge(2,3);
  gr.Addedge(1,3);
  gr.Addedge(3,4);
  gr.Addedge(4,5);
  gr.Addedge(1,6);
  gr.BFS(1);
  return 0;
}