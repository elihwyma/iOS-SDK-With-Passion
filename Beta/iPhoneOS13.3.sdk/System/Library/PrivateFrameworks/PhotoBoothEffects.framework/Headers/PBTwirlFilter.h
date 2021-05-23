/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBTwirlFilter : PBFilter

{
    _Bool firstTime;
    float _inputAmount;
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    float lastInputRadius;
    float inputRotation;
    struct CGPoint inputPoint;
}

@property struct CGPoint inputPoint;
@property float inputAmount;
@property float inputRotation;

- (void)setDefaults;
- (id)ciFilterName;
- (_Bool)needsWrapMirror;
- (void)applyParametersToCIFilter:(_Bool)arg1 extent:(struct CGRect)arg2;

@end
