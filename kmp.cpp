// LPS
int n=pattern.size();
vector<int>LPS(n);
LPS[0]=0;
int i=1;
int length=0;
while(i<n){
  if(pattern[i]==pattern[length]){
    length++;
    lps[i]=length;
    i++;
  }
  else{
    if(length!=0){
    length=LPS[length-1];
    }
    else{
      LPS[i]=0;
      i++;
    }
  }
}

// String matching part
int i=0; //main string
int j=0; //pattern

int n=word.size();
int m=pattern.size();

while(i<n){
  if(word[i]==word[j]){
    i++;
    j++;
  }
  if(j==m){
    // string found
  }
  else if(word[i]!=word[j]){
    if(j!=0){
    j=lps[j-1];
    }
    else{
      i++;
    }
  }
}

