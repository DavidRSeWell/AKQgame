#include <iostream>
#include <vector>
#include <graphviz/gv.cpp>

int main() {

    Agraph_t *g;
    Agnode_t *n, *m;
    Agedge_t *e;
    GVC_t *gvc;

    /* set up a graphviz context */
    gvc = gvContext();

    /* Create a simple digraph */
    g = agopen("g", Agdirected, 0);
    n = agnode(g, "n", 1);
    m = agnode(g, "m", 1);
    e = agedge(g, n, m, 0, 1);

    /* Set an attribute - in this case one that affects the visible rendering */
    agsafeset(n, "color", "red", "");

    /* Compute a layout using layout engine from command line args */
    gvLayoutJobs(gvc, g);

    /* Write the graph according to -T and -o options */
    gvRenderJobs(gvc, g);

    /* Free layout data */
    gvFreeLayout(gvc, g);

    /* Free graph structures */
    agclose(g);

    /* close output file, free context, and return number of errors */
    return (gvFreeContext(gvc));


}