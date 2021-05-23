/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UINavigationController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemPreflightOperation, SKUIRedeemStepViewController, UIBarButtonItem;

@protocol SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemViewControllerLegacy : UINavigationController

{
    _Bool _attempsAutomaticRedeem;
    BOOL _cameraRedeemEnabled;
    long long _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    NSOperationQueue *_operationQueue;
    SKUIRedeemPreflightOperation *_preflightOperation;
    SKUIRedeemConfiguration *_redeemConfiguration;
    SKUIRedeemStepViewController *_inputViewController;
    long long _initialBarStyle;
    _Bool _cameraRedeemVisible;
    _Bool _shouldPerformInitialOperationOnAppear;
    id <SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
    UIBarButtonItem *_cancelButtonItem;
}

@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (nonatomic, readonly) long long category;
@property (nonatomic) _Bool attempsAutomaticRedeem;
@property (weak, nonatomic) id <SKUIRedeemViewCameraOverrideDelegate> cameraDelegate;
@property (copy, nonatomic) NSString *initialCode;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) _Bool cameraRedeemVisible;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) _Bool shouldPerformInitialOperationOnAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)redeemRequiresNationalId:(id)arg1;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (id)initWithRedeemCategory:(long long)arg1;
- (void)redeemIdViewControllerDidCancel:(id)arg1;
- (void)redeemIdViewController:(id)arg1 submittedWithFields:(id)arg2;
- (void)_performInitialRedeemOperation;
- (void)_showInputViewController;
- (void)_showNationalIdVerificationPage;
- (void)_showNationalIdLoadingPage;
- (void)_executeIdValidationOperationWithFields:(id)arg1;
- (id)_newInputViewController;
- (void)_executeRequiresIdValidationOperation;
- (void)_executePreflightOperationForcesAuthentication:(_Bool)arg1;
- (void)_finishPreflightWithResult:(id)arg1;
- (void)_loadInputViewController;
- (void)_attemptAutomaticRedeemWithMetadata:(id)arg1;
- (void)redeemStepViewControllerShouldValidateNationalID:(id)arg1;
- (void)redeemAgainAnimated:(_Bool)arg1;

@end
