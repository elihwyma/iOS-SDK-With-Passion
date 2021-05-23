/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPGraphicObject.h>

__attribute__((visibility("hidden")))
@interface CPShape : CPGraphicObject

{
    long long mcid;
    unsigned int pdfObjectID;
    struct CGPath *path;
    _Bool isUprightRectangle;
    int windingRule;
    double lineWidth;
    double miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor *fillColor;
    struct CGColor *strokeColor;
    struct CGPDFObject *fillObject;
    struct CGPDFObject *strokeObject;
    struct CGAffineTransform paintTransform;
    _Bool boundsComputed;
    _Bool renderedBoundsComputed;
}

- (id)init;
- (id)string;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)attributes;
- (struct CGPath *)path;
- (void)setPath:(struct CGPath *)arg1;
- (struct CGRect)bounds;
- (_Bool)isVisible;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (struct CGColor *)fillColor;
- (void)setFillColor:(struct CGColor *)arg1;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (double)miterLimit;
- (void)setMiterLimit:(double)arg1;
- (struct CGColor *)strokeColor;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (int)lineJoin;
- (int)lineCap;
- (id)initWithPDFShape:(struct CPPDFShape *)arg1;
- (void)addShape:(id)arg1;
- (long long)zOrder;
- (struct CGRect)renderedBounds;
- (void)accept:(id)arg1;
- (void)dispose;
- (unsigned int)pathElementCount;
- (void)recomputeRenderedBounds;
- (void)recomputeBounds;
- (_Bool)hasStroke;
- (_Bool)isUprightRectangle;
- (_Bool)hasFill;
- (_Bool)hasSamePathAs:(id)arg1;
- (_Bool)isStrokeFor:(id)arg1;
- (struct CGPDFObject *)fillObject;
- (struct CGAffineTransform)paintTransform;
- (struct CGPDFObject *)strokeObject;
- (_Bool)canCombineWith:(id)arg1;
- (int)windingRule;
- (void)setWindingRule:(int)arg1;
- (void)setFillObject:(struct CGPDFObject *)arg1;
- (void)setStrokeObject:(struct CGPDFObject *)arg1;
- (void)setPaintTransform:(struct CGAffineTransform)arg1;
- (long long)mcid;
- (unsigned int)pdfObjectID;
- (void)setPdfObjectID:(unsigned int)arg1;
- (struct CGRect)innerBounds;
- (void)makeLineFromVertex:(struct CGPoint)arg1 toVertex:(struct CGPoint)arg2;

@end
