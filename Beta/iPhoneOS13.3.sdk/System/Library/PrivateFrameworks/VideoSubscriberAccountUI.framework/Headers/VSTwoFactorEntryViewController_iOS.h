/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIBarButtonItem, UIScrollView, VSFontCenter, VSIdentityProviderLogoView, VSTwoFactorDigitView, VSTwoFactorEntryViewModel, VSViewModel;

@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryViewController_iOS : UIViewController

{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSTwoFactorEntryViewModel *_viewModel;
    UIBarButtonItem *_verifyButton;
    UIScrollView *_scrollView;
    VSTwoFactorDigitView *_digitView;
    NSArray *_buttons;
    VSIdentityProviderLogoView *_logoView;
    VSFontCenter *_fontCenter;
}

@property (retain, nonatomic) UIBarButtonItem *verifyButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) VSTwoFactorDigitView *digitView;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView;
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
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)buttonPressed:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)twoFactorDigitView:(id)arg1 textDidChange:(id)arg2;
- (void)stopObservingViewModel:(id)arg1;
- (void)verifyButtonPressed:(id)arg1;
- (void)startObservingViewModel:(id)arg1;

@end
