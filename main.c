#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
int main(int argc, char **argv)
{
char name[255];
printf(&quot;Enter your name: &quot;);
fgets(name, 255, stdin);
printf(&quot;length = %d\n&quot;, strlen(name)); /* debug line */
name[strlen(name)-1] = &#39;\0&#39;; /* remove the newline at the end */
printf(&quot;Hello %s!\n&quot;, name);
return 0;
}
