/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPBrush.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MFPGradientBrush : MFPBrush

{
    struct CGAffineTransform mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading *mShading;
    struct CGFunction *mShadingFunction;
}

- (id)init;
- (void)dealloc;
- (id)color;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (id)startColor;
- (id)endColor;
- (void)fillPath:(id)arg1;
- (void)setWrapMode:(int)arg1;
- (void)setBlend:(id)arg1;
- (void)setColorBlend:(id)arg1;
- (void)createPhoneBrush;
- (id)colorAtPosition:(float)arg1;
- (void)createStopsFromColorBlend;
- (void)createStopsFromBlend;
- (void)createStopsFromStartAndEndColors;
- (void)createShadingFunction;
- (void)createShading;

@end
