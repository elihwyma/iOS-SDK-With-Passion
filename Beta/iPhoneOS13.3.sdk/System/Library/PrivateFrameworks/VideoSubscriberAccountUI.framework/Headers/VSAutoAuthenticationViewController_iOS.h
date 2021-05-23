/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel, UIScrollView, VSAutoAuthenticationViewModel, VSFontCenter, VSIdentityProviderLogoView, VSViewModel;

@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_iOS : UIViewController

{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSAutoAuthenticationViewModel *_viewModel;
    UIScrollView *_scrollView;
    VSIdentityProviderLogoView *_logoView;
    UILabel *_accountNameLabel;
    UILabel *_messageTitleLabel;
    UILabel *_messageLabel;
    UILabel *_noticeLabel;
    UILabel *_manualSignInTitleLabel;
    UIButton *_manualSignInButton;
    VSFontCenter *_fontCenter;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView;
@property (retain, nonatomic) UILabel *accountNameLabel;
@property (retain, nonatomic) UILabel *messageTitleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UILabel *manualSignInTitleLabel;
@property (retain, nonatomic) UIButton *manualSignInButton;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (nonatomic, readonly) VSViewModel *viewModel;
@property (nonatomic, readonly) struct CGSize preferredLogoSize;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_manualSignInButtonPressed:(id)arg1;

@end
