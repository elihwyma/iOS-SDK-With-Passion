/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <Foundation/NSObject.h>

@interface RBDisplayList : NSObject

{
    struct DisplayList _list;
    struct cf_ptr<CGContext *> _context;
    struct ContextDelegate *_delegate;
    _Bool _linearColors;
    struct CGRect _contentRect;
}

@property (nonatomic, readonly) const struct DisplayList *rb_displayList;
@property (nonatomic) _Bool linearColors;
@property (nonatomic) struct CGRect contentRect;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) struct CGRect clipBoundingBox;
@property (nonatomic) struct CGAffineTransform CTM;

+ (id)displayListForCGContext:(struct CGContext *)arg1 alpha:(float *)arg2 blendMode:(int *)arg3;

- (id)init;
- (void)clear;
- (void)save;
- (id).cxx_construct;
- (void)rotateBy:(double)arg1;
- (void)restore;
- (void)beginLayerWithFlags:(unsigned int)arg1;
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(_Bool)arg2;
- (void)beginLayer;
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;
- (struct CGContext *)beginCGContextWithAlpha:(float)arg1;
- (void)endCGContext;
- (void)scaleByX:(double)arg1 Y:(double)arg2;
- (void)translateByX:(double)arg1 Y:(double)arg2;
- (void)concat:(struct CGAffineTransform)arg1;
- (void)clipShape:(id)arg1 mode:(int)arg2;
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;
- (void)drawDisplayList:(id)arg1;
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize)arg2 color:(CDStruct_0b1c536a)arg3 mode:(int)arg4;
- (void)addProjectionStyleWithArray:(float [9])arg1;
- (void)addBlurFilterWithRadius:(double)arg1;
- (void)addColorMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1;
- (void)addHueRotationFilterWithAngle:(double)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1;
- (void)addBrightnessFilterWithAmount:(float)arg1;
- (void)addContrastFilterWithAmount:(float)arg1;
- (void)addLuminanceToAlphaFilter;
- (void)addColorInvertFilter;
- (void)addColorMatrixFilterWithArray:(float [20])arg1;
- (void)addGrayscaleFilterWithAmount:(float)arg1;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(CDStruct_0b1c536a)arg2 bias:(float)arg3;

@end
