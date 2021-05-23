/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UINavigationController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIDonationConfiguration, UIViewController;

@interface SKUIDonationViewController : UINavigationController

{
    NSString *_charityID;
    SKUIClientContext *_clientContext;
    SKUIDonationConfiguration *_donationConfiguration;
    NSOperationQueue *_operationQueue;
    UIViewController *_placeholderViewController;
}

@property (nonatomic, readonly) NSString *charityIdentifier;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)initWithURL:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (id)initWithCharityIdentifier:(id)arg1;
- (id)_initSKUIDonationViewController;
- (void)_loadDonationConfiguration;

@end
