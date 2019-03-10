#include "gfx2.h"

void drawMissingLetter(double ulCornerX, double ulCornerY, double height)

{
    double width = .75 * height;
    
    double x1 = ulCornerX + width * .125;
    double y1 = ulCornerY + height * 0;
    double x2 = ulCornerX + width * .875;
    double y2 = ulCornerY + height * 0;
    double x3 = ulCornerX + width * .875;
    double y3 = ulCornerY + height * .75;
    double x4 = ulCornerX + width * .125;
    double y4 = ulCornerY + height * .75;
    
    //Draws line segments to create outline of rectangle.
    gfx_line(x1,y1,x2,y2);
    gfx_line(x2,y2,x3,y3);
    gfx_line(x3,y3,x4,y4);
    gfx_line(x4,y4,x1,y1);
    
    //draw yellow 'x' inside square
    gfx_color(250,180,0);
    gfx_line(x1,y1,x3,y3);
    gfx_line(x2,y2,x4,y4);
}
// end draw missing letter box with X inside
