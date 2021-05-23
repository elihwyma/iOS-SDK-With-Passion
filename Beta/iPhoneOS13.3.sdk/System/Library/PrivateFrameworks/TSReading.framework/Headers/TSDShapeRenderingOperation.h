/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDSwatchRenderingOperation.h>

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation

{
    int mShapeType;
    double mAngle;
}

- (struct UIEdgeInsets)swatchEdgeInsets;
- (_Bool)needsPressedStateBackground;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 documentRoot:(id)arg6;

@end
