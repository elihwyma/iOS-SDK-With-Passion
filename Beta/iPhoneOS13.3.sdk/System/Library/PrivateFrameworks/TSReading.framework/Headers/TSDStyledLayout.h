/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout

{
    _Bool mIsUpdatingOpacity;
    double mDynamicOpacity;
}

@property (nonatomic, readonly) double opacity;

- (_Bool)isInvisible;
- (_Bool)canFlip;
- (struct CGRect)frameForCulling;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (struct CGRect)i_baseFrame;
- (id)styledInfo;
- (struct CGRect)reflectionBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowedNaturalBoundsWithoutOffset;
- (struct CGRect)reflectionFrame;
- (struct CGRect)reflectionFrameInRoot;
- (struct CGRect)reflectionFrameForSubRect:(struct CGRect)arg1;
- (void)dynamicOpacityChangeDidBegin;
- (void)dynamicOpacityUpdateToValue:(double)arg1;
- (void)dynamicOpacityChangeDidEnd;

@end
