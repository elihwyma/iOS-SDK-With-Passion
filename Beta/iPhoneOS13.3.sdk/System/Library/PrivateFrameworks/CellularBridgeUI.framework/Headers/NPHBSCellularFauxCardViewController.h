/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <UIKit/UIViewController.h>

@class CAShapeLayer, CTXPCServiceSubscriptionContext, NPHCellularBridgeBarcodeScannerView, NSDate, NSString, UIButton, UILabel, UIView;

@interface NPHBSCellularFauxCardViewController : UIViewController

{
    NSString *_fauxCardData;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _codelessActivationBlock;
    long long _userConsentResponse;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    UIView *_fauxScanView;
    UIView *_cutoutView;
    UIButton *_bypassFauxCardButton;
    UIButton *_enterFauxCardDataManuallyButton;
    UILabel *_fauxDataLabel;
    UILabel *_activationCodeLabel;
    NPHCellularBridgeBarcodeScannerView *_scannerView;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType codelessActivationBlock;
@property (nonatomic) long long userConsentResponse;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) UIView *fauxScanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (weak, nonatomic) UIButton *bypassFauxCardButton;
@property (weak, nonatomic) UIButton *enterFauxCardDataManuallyButton;
@property (weak, nonatomic) UILabel *fauxDataLabel;
@property (weak, nonatomic) UILabel *activationCodeLabel;
@property (retain, nonatomic) NPHCellularBridgeBarcodeScannerView *scannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)cancelAction:(id)arg1;
- (void)captureSession:(id)arg1 isRunning:(_Bool)arg2;
- (void)_setFauxCardData:(id)arg1;
- (id)_getFauxCardData;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)presentConfirmationCodeRequest;
- (void)cellularConfirmationCodeViewController:(id)arg1 confirmedWithCode:(id)arg2;
- (void)bypassFauxCard:(id)arg1;
- (void)enterFauxCardDataManually:(id)arg1;

@end
