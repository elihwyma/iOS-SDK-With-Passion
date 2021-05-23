/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIDonationStepViewController.h>

@class NSString, SKUIDonationAmountView, SKUIGiftPurchaseRequest, SKUIGiftValidationResponse, SKUIGiftValidator;

__attribute__((visibility("hidden")))
@interface SKUIDonationAmountViewController : SKUIDonationStepViewController

{
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    _Bool _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)_cancelButtonAction:(id)arg1;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishPurchaseWithResult:(_Bool)arg1 errorMessage:(id)arg2;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)_donateButtonAction:(id)arg1;
- (void)_amountChangedNotification:(id)arg1;
- (void)_validateDonation:(id)arg1;
- (void)_performActionAfterValidation;
- (void)_setDonationButtonEnabled:(_Bool)arg1;
- (void)_reenableAfterFailure;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;

@end
