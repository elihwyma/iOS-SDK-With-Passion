/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIView.h>

@interface UIView (PGAdditions)

@property (nonatomic, setter=PG_setAllowsEdgeAntialiasing:) _Bool PG_allowsEdgeAntialiasing;
@property (nonatomic, setter=PG_setAllowsGroupBlending:) _Bool PG_allowsGroupBlending;
@property (nonatomic, setter=PG_setAnchorPoint:) struct CGPoint PG_anchorPoint;
@property (retain, nonatomic, setter=PG_setCompositingFilter:) id PG_compositingFilter;
@property (nonatomic, setter=PG_setCornerRadius:) double PG_cornerRadius;

+ (void)PG_animateUsingDefaultTimingWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)PG_animateUsingDefaultDampedSpringWithInitialSpringVelocity:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)PG_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)PG_performWithoutAnimation:(CDUnknownBlockType)arg1;

- (void)PG_setHasRoundedCorners:(_Bool)arg1 animated:(_Bool)arg2;

@end
