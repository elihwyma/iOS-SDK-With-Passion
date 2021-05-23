/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class NSString, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIBarButtonItem, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController

{
    long long _category;
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    NSString *_initialCode;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}

@property (nonatomic, readonly) long long category;
@property (copy, nonatomic) NSString *initialCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (id)initWithRedeemCategory:(long long)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_toggleActivityIndicatorBarButtonItem:(_Bool)arg1;

@end
