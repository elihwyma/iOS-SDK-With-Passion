/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class NSString, NSURL, SKUIPassbookLoader, SKUIRedeemITunesPassLearnMoreView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController

{
    _Bool _didTapAddPassbookButton;
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;
    SKUIPassbookLoader *_passbookLoader;
    NSURL *_passbookURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_doneButtonAction:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)_existingPass;
- (void)_passButtonAction:(id)arg1;
- (void)_loadPassbookPass;
- (void)_loadPassbookURL;
- (void)_showErrorDialog;
- (void)_didLoadPassbookURLString:(id)arg1;

@end
