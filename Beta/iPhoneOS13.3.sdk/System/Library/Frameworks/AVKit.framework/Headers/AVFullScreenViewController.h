/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIViewController.h>

@class UIView;

@protocol AVFullScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVFullScreenViewController : UIViewController

{
    UIViewController<AVFullScreenViewControllerDelegate> *_delegate;
    AVFullScreenViewController *_associatedFullScreenViewController;
    AVFullScreenViewController *_sourceFullScreenViewController;
    UIView *_contentView;
}

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (_Bool)canBecomeFirstResponder;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (id)keyCommands;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)avkit_isEffectivelyFullScreen;
- (void)attachContentView;

@end
