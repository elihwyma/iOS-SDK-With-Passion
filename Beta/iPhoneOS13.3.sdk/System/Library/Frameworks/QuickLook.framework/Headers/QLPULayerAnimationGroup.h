/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPUTimedAnimationGroup.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface QLPULayerAnimationGroup : QLPUTimedAnimationGroup

{
    _Bool _areTrackedAnimationsPaused;
    CALayer *_referenceLayer;
}

@property (nonatomic, readonly) CALayer *referenceLayer;

- (id)init;
- (double)currentTime;
- (id)initWithReferenceLayer:(id)arg1;
- (void)updateAnimations;

@end
