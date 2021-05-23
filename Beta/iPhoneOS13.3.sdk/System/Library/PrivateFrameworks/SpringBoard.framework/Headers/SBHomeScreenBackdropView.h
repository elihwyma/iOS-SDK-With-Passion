/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHomeScreenBackdropViewBase.h>

@class MTMaterialView, UIImage, UIImageView, UIViewFloatAnimatableProperty;

@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase

{
    MTMaterialView *_materialView;
    UIImage *_blurredContentSnapshotImage;
    UIImageView *_blurredContentSnapshotImageView;
    unsigned long long _materialViewAnimationCount;
    _Bool _waitingForBackdropViewToRender;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}

- (_Bool)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (id)initWithFrame:(struct CGRect)arg1 materialRecipe:(long long)arg2 scaleAdjustment:(CDUnknownBlockType)arg3;
- (void)_setupBackdropViewWithRecipe:(long long)arg1 scaleAdjustment:(CDUnknownBlockType)arg2;
- (void)_configureBackdropAnimatableProperty;
- (void)_updateBackdropViewIfNeeded;
- (void)_updateBackdropViewIfNeededInvalidatingSnapshot:(_Bool)arg1;
- (void)_resetHomeScreenBlurredContentSnapshotImage;
- (void)_invalidateBackdropSnapshot;
- (id)homeScreenBlurredContentSnapshotImage;

@end
