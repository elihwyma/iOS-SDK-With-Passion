/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIDonationStepViewController.h>

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultViewController : SKUIDonationStepViewController

{
    SKUIGiftAmount *_donationAmount;
    SKUIDonationResultView *_resultView;
}

@property (copy, nonatomic) SKUIGiftAmount *donationAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)_doneButtonAction:(id)arg1;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;

@end
