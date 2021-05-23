/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPGraphicObject.h>

__attribute__((visibility("hidden")))
@interface CPImage : CPGraphicObject

{
    struct CPPDFImage *imageData;
    _Bool renderedBoundsComputed;
}

- (struct CGRect)bounds;
- (_Bool)isVisible;
- (id)initWithBounds:(struct CGRect)arg1;
- (struct CPPDFImage *)imageData;
- (id)initWithPDFImage:(struct CPPDFImage *)arg1;
- (long long)zOrder;
- (struct CGRect)renderedBounds;
- (void)accept:(id)arg1;
- (void)recomputeRenderedBounds;

@end
