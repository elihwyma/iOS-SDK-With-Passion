/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UINavigationController.h>

@class NSOperationQueue, SKUIClientContext, SKUIGift, SKUIGiftComposeViewController, SKUIGiftConfiguration, UIViewController;

@protocol SKUIGiftViewControllerDelegate;

@interface SKUIGiftViewController : UINavigationController

{
    SKUIClientContext *_clientContext;
    SKUIGift *_gift;
    id <SKUIGiftViewControllerDelegate> _giftDelegate;
    SKUIGiftConfiguration *_giftConfiguration;
    NSOperationQueue *_operationQueue;
    long long _initialBarStyle;
    UIViewController *_placeholderViewController;
    SKUIGiftComposeViewController *_rootViewController;
}

@property (copy, nonatomic, readonly) SKUIGift *gift;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIGiftViewControllerDelegate> giftDelegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (id)_localizedString:(id)arg1;
- (void)_loadGiftConfiguration;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishGiftingWithResult:(_Bool)arg1;
- (void)_configurationDidLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (id)initWithGift:(id)arg1;

@end
