/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBStretchFilter : PBFilter

{
    _Bool firstTime;
    float lastInputX;
    float lastInputY;
    struct CGPoint inputPoint;
}

@property struct CGPoint inputPoint;

- (void)setDefaults;
- (id)ciFilterName;
- (_Bool)needsWrapMirror;
- (void)applyParametersToCIFilter:(_Bool)arg1 extent:(struct CGRect)arg2;

@end
