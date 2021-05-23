/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBMirrorFilter : PBFilter

{
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    _Bool firstTime;
    float inputOrientation;
    struct CGPoint inputPoint;
}

@property struct CGPoint inputPoint;
@property float inputOrientation;

- (void)setDefaults;
- (id)ciFilterName;
- (_Bool)needsWrapMirror;
- (void)applyParametersToCIFilter:(_Bool)arg1 extent:(struct CGRect)arg2;

@end
