/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary, SBApplicationBlurSnapshotGenerationContainerView, SBDeviceApplicationSceneHandle, SBSceneViewAppIconView;

@interface SBApplicationBlurContentView : UIView

{
    SBDeviceApplicationSceneHandle *_sceneHandle;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToCompletionBlocks;
    struct CGSize _targetViewOriginalSize;
    UIView *_targetViewToBlur;
    UIView *_unblurredRealSnapshotView;
    UIView *_unblurredCopySnapshotView;
    UIView *_liveBlurView;
    SBSceneViewAppIconView *_iconView;
    UIView *_blurredSnapshotView;
    SBApplicationBlurSnapshotGenerationContainerView *_snapshotGenerationContainerView;
    UIView *_blurView;
}

@property (nonatomic, readonly) SBSceneViewAppIconView *iconView;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 deviceApplicationSceneHandle:(id)arg2 targetViewToBlur:(id)arg3;
- (void)generateBlurredSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToBlurredSnapshotWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_iconViewForApplication;
- (void)_fireCompletionBlocksForState:(unsigned long long)arg1;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (void)_doBlurGenerationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_doAnimationToBlurredSnapshotWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
