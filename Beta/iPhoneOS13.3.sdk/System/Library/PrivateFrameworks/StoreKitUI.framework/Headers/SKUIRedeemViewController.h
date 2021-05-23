/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UINavigationController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIRedeemConfiguration, SUClientInterface, UIActivityIndicatorView, UIViewController;

@protocol SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemViewController : UINavigationController

{
    _Bool _attempsAutomaticRedeem;
    _Bool _cameraRedeemVisible;
    _Bool _finishedLoading;
    _Bool _shouldPerformInitialOperationOnAppear;
    long long _category;
    id <SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
    NSString *_initialCode;
    SKUIClientContext *_clientContext;
    SUClientInterface *_clientInterface;
    NSOperationQueue *_operationQueue;
    UIActivityIndicatorView *_activityIndicator;
    UIViewController *_embeddedViewController;
    SKUIRedeemConfiguration *_redeemConfiguration;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIViewController *embeddedViewController;
@property (nonatomic) _Bool finishedLoading;
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) _Bool shouldPerformInitialOperationOnAppear;
@property (nonatomic, readonly) long long category;
@property (nonatomic) _Bool attempsAutomaticRedeem;
@property (weak, nonatomic) id <SKUIRedeemViewCameraOverrideDelegate> cameraDelegate;
@property (copy, nonatomic) NSString *initialCode;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (nonatomic) _Bool cameraRedeemVisible;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (_Bool)redeemRequiresNationalId:(id)arg1;

- (void)_setup;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setChildViewController:(id)arg1;
- (void)_setupNavigationItem;
- (id)initWithRedeemCategory:(long long)arg1;
- (void)clientInterfaceDidFinishLoading:(id)arg1;
- (void)_cancelButtonAction;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (void)_presentModernRedeemWithURL:(id)arg1;
- (void)_presentLegacyRedeem;
- (void)_redeemURLWithCompletion:(CDUnknownBlockType)arg1;

@end
