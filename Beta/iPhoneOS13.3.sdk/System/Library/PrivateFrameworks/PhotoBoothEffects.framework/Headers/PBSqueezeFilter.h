/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBSqueezeFilter : PBFilter

{
    float lastInputX;
    float lastInputY;
    float lastInputRadius;
    float lastInputScale;
    float _inputAmount;
    _Bool firstTime;
    struct CGPoint inputPoint;
}

@property struct CGPoint inputPoint;
@property float inputAmount;

- (void)setDefaults;
- (id)ciFilterName;
- (_Bool)needsWrapMirror;
- (void)applyParametersToCIFilter:(_Bool)arg1 extent:(struct CGRect)arg2;

@end
