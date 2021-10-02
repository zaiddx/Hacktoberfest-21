#include<stdio.h>
int difference(int arr1[], int arr2[], int output[], int len1, int len2)
 {
int i, j, l=0;
for(i=0; i<len1; i++)
{
for(j=0; j<len2; j++)
{
if(arr1[i]==arr2[j])
break;
}

if(j==len2)
 {
output[l] = arr1[i];
l++;
}
}
return l;
}

int sydif(int arr1[], int arr2[], int output[], int len1, int len2)
{
int i, j, l=0;

for(i=0; i<len1; i++)
{
for(j=0; j<len2; j++)
{
if(arr1[i]==arr2[j])
break;
}
if(j==len2)
{
output[l] = arr1[i];
l++;
}
}

for(i=0; i<len1; i++)
 {
for(j=0; j<len2; j++)
{
if(arr2[i]==arr1[j])
break;
}
if(j==len2)
{
output[l] = arr2[i];
l++;
}
}
return l;
}


void accept(int arr[], int size)
{
int i;
for(i=0; i<size; i++)
{
scanf("%d", &arr[i]);
}
}


int uni(int arr1[], int arr2[], int output[], int len1, int len2)
{
int i, j, l=0;

for(i=0; i<len1; i++)
{
output[l] = arr1[i];
l++;
}

for(i=0; i<len2; i++)
{
for(j=0; j<len1; j++)
{
if(arr2[i]==arr1[j])
break;
}
if(j==len1)
{
output[l] = arr2[i];
l++;
}
}

return l;
}



int inter(int arr1[], int arr2[], int output[], int len1, int len2)
{
int i, j, l=0;
for(i=0; i<len1; i++)
{
for(j=0; j<len2; j++)
{
if(arr1[i]==arr2[j])
{
output[l] = arr1[i];
l++;
break;
}
}
}
return l;
}

void display(int output[], int l)
{
int i;
for(i=0; i<l; i++) {
if(i==l-1)
printf("%d}\n", output[i]);
else
printf("%d,", output[i]);
}
}

int repeat(int arr1[], int s1)
{
int i, j;
for(i=0; i<s1; i++)
{
for(j=i+1; j<s1; j++)
{
if(arr1[i] == arr1[j])
 {
return 1;
break;
}
}
}

return 0;
}


int main()
{

int arr1[20], arr2[20], output[40];
int len1;
int len2;
int rval;
int again=1;
int menu;
while(again==1)
 {

while(1)
{

printf("Enter size of the Set A(max 20): ");
scanf("%d", &len1);
printf("Enter size of the Set B(max 20): ");
scanf("%d", &len2);
printf("Enter values of Set A: ");
accept(arr1, len1);
printf("Enter values of Set B: ");
accept(arr2, len2);


if( repeat(arr1, len1)&&repeat(arr2, len2) )
{
printf("\nElements repeated. Please re-enter elements in sets...\n");
continue;
}

break;
}

printf("\n1.Difference\n2.Symmetric Difference\n3.Union\n4.Intersection\nPlease enter your choice: ");
scanf("%d", &menu);

switch(menu)
{
case 1:
rval =  difference(arr1, arr2, output, len1, len2);
printf("\nDifference is (Set A - Set B): {");
display(output, rval);
break;

case 2:
rval = sydif(arr1, arr2, output, len1, len2);
printf("\nSymmetric Difference is: {");
display(output, rval);
break;

case 3:
rval = uni(arr1, arr2, output, len1, len2);
printf("\nUnion is: {");
display(output, rval);
break;

case 4:
rval = inter(arr1, arr2, output, len1, len2);
printf("\nIntersection is: {");
display(output, rval);
break;
}

printf("\nDo you want to continue with program?\n1.Yes\n2.No\nPlease enter your choice: ");
scanf("%d", &again);
}

printf("\n");

return 0;

}
