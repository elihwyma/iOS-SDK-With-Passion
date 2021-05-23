/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBubbleFlowRootViewController.h>

@class _GKBubbleFlowPseudoModalViewController;

@interface _GKBubbleFlowOnDemandFormSheetViewController : GKBubbleFlowRootViewController

{
    _Bool _falseDismissSkippedOrCompleted;
    _GKBubbleFlowPseudoModalViewController *_pseudoModalViewController;
}

@property (retain, nonatomic) _GKBubbleFlowPseudoModalViewController *pseudoModalViewController;
@property (nonatomic) _Bool falseDismissSkippedOrCompleted;

- (void)dealloc;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)popAllModalViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearInterstitialViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isCoveringContentUnderneath;
- (void)_ensureWeHaveAPresentedModalSetupRootViewControllerToPresent:(id)arg1 andThen:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (void)_cleanUpOurPresentedModalSetupRootViewControllerIfNecessaryAnimated:(_Bool)arg1;
- (_Bool)_obscuringContentUnderneath;

@end
