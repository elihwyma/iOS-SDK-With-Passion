/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBNestingViewController.h>

@class SBFolderContainerView, SBFolderController;

@protocol SBFolderPresentingViewControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface SBFolderPresentingViewController : SBNestingViewController

{
    id <SBFolderPresentingViewControllerDelegate> _folderPresentationDelegate;
    unsigned long long _backgroundEffect;
    id <UIViewControllerAnimatedTransitioning> _currentFolderAnimator;
}

@property (retain, nonatomic) id <UIViewControllerAnimatedTransitioning> currentFolderAnimator;
@property (nonatomic, readonly) SBFolderContainerView *view;
@property (weak, nonatomic) id <SBFolderPresentingViewControllerDelegate> folderPresentationDelegate;
@property (nonatomic, readonly) SBFolderController *presentedFolderController;
@property (nonatomic) unsigned long long backgroundEffect;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)dismissPresentedFolderControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFolderController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;

@end
