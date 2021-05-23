/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class UIActivityIndicatorView, UIButton;

@interface WLRetryViewController : WLWelcomeGroupViewController

{
    UIButton *_continueView;
    UIActivityIndicatorView *_spinner;
    CDUnknownBlockType _continueHandler;
}

@property (copy, nonatomic) CDUnknownBlockType continueHandler;

- (void)loadView;
- (void)_continueTapped:(id)arg1;
- (void)connectivityEnablingWillStart;
- (void)connectivityEnablingDidEnd;

@end
