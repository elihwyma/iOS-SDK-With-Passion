/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIDonationConfiguration, SKUIDonationViewController, SKUIGiftCharity;

__attribute__((visibility("hidden")))
@interface SKUIDonationStepViewController : UIViewController

{
    SKUIGiftCharity *_charity;
    SKUIDonationConfiguration *_configuration;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) SKUIGiftCharity *charity;
@property (nonatomic, readonly) SKUIDonationConfiguration *donationConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) SKUIDonationViewController *donationViewController;

- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

@end
