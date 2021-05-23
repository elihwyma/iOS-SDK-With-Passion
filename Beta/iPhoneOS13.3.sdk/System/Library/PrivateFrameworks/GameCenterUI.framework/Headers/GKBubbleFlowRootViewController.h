/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKViewController.h>

@class GKBubbleFlowAnimator;

@interface GKBubbleFlowRootViewController : GKViewController

{
    GKBubbleFlowAnimator *_animator;
    _Bool _showingInterstitial;
    _Bool _coveringContentUnderneath;
    _Bool _currentlyAnimatingADismiss;
}

@property (nonatomic, getter=isShowingInterstitial) _Bool showingInterstitial;
@property (nonatomic, getter=isCurrentlyAnimatingADismiss) _Bool currentlyAnimatingADismiss;
@property (retain, nonatomic) GKBubbleFlowAnimator *animator;
@property (nonatomic, readonly, getter=isCoveringContentUnderneath) _Bool coveringContentUnderneath;

+ (id)sharedBubbleFlowRootViewController;
+ (_Bool)_useTwoPartBubbleFlowModalPresentation;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_updateViewAlpha:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pseudoModalViewController;
- (void)popAllModalViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInterstitialViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearInterstitialViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
