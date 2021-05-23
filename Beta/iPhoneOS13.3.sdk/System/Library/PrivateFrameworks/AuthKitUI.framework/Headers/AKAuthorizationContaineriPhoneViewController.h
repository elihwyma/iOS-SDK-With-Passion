/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKAuthorizationContainerViewController.h>

@class NSString, UITapGestureRecognizer, UIVisualEffectView;

@interface AKAuthorizationContaineriPhoneViewController : AKAuthorizationContainerViewController

{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIVisualEffectView *_blurBackgroundView;
    struct CGSize _containerContentSize;
}

@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView;
@property (nonatomic) struct CGSize containerContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2;
- (struct CGRect)_dismissalFrameForContentSize:(struct CGSize)arg1;
- (void)setContainerContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;
- (void)_layoutContainerView:(_Bool)arg1;
- (struct CGRect)_layoutFrameForContentSize:(struct CGSize)arg1;
- (_Bool)_delegate_authorizationContainerViewControllerShouldDismiss;
- (void)_delegate_authorizationContainerViewControllerDidDismiss;

@end
