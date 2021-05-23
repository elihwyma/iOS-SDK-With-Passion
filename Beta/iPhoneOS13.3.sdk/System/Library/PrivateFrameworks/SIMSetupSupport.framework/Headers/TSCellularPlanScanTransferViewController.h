/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <UIKitCore/UIViewController.h>

@class CAShapeLayer, CTDisplayPlanList, NSArray, NSDate, NSString, TSCellularPlanQRCodeScannerView, UIActivityIndicatorView, UIButton, UILabel, UITableView, UIView;

@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanTransferViewController : UIViewController

{
    _Bool _receivedPendingInstallItems;
    _Bool _receivedTransferItems;
    _Bool _isInEligiblePlanPresent;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    NSArray *_transferItems;
    CTDisplayPlanList *_pendingInstallItems;
    TSCellularPlanQRCodeScannerView *_scannerView;
    UIActivityIndicatorView *_activityView;
    _Bool _confirmationCodeRequired;
    _Bool _manualCardInfoEntry;
    _Bool _transferring;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSString *_fauxCardData;
    UIView *_scanView;
    UIView *_cutoutView;
    UIActivityIndicatorView *_checkingAvailablePlansSpinner;
    UILabel *_checkingAvailablePlansLabel;
    UIButton *_enterDetailsManuallyButton;
    UILabel *_scanQRCodeLabel;
    UILabel *_positionQRCodeLabel;
    UITableView *_pendingPlansListTableView;
}

@property (weak) id <TSSIMSetupFlowDelegate> delegate;
@property (readonly) NSString *fauxCardData;
@property (readonly) _Bool confirmationCodeRequired;
@property (readonly) _Bool manualCardInfoEntry;
@property (weak, nonatomic) UIView *scanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (readonly) _Bool transferring;
@property (weak, nonatomic) UIActivityIndicatorView *checkingAvailablePlansSpinner;
@property (weak, nonatomic) UILabel *checkingAvailablePlansLabel;
@property (weak, nonatomic) UIButton *enterDetailsManuallyButton;
@property (weak, nonatomic) UILabel *scanQRCodeLabel;
@property (weak, nonatomic) UILabel *positionQRCodeLabel;
@property (weak, nonatomic) UITableView *pendingPlansListTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didChangeValueForKey:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (long long)navigationBarScrollToEdgeBehavior;
- (_Bool)canBeShownFromSuspendedState;
- (void)enterFauxCardDataManually:(id)arg1;
- (void)_maybeUpdateTableView;
- (void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)_presentActionSheetForPendingInstall:(id)arg1;
- (void)_presentActionSheetForPlanTransfer:(id)arg1;
- (void)_startPlanTransfer:(id)arg1;
- (id)_messageTextForActionSheet:(id)arg1 carrierName:(id)arg2 countryCode:(id)arg3;
- (void)_startPendingInstall:(id)arg1;
- (id)initWithTransferItems:(id)arg1;
- (void)updateTransferList:(id)arg1 isInEligiblePlanPresent:(_Bool)arg2;
- (void)updatePendingInstallItems:(id)arg1;

@end
