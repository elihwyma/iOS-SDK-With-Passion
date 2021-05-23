/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTimedAnimationGroup.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PULayerAnimationGroup : PUTimedAnimationGroup

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
