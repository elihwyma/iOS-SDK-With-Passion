/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, NSString, PSListController, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUIFauxCardScannerSpecifier : PSSpecifier

{
    CTCellularPlanManager *_planManager;
    PSListController *_hostController;
    TSSIMSetupFlow *_flow;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(_Bool)arg2;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(_Bool)arg2 planManager:(id)arg3;
- (void)fauxCardScannerCellPressed:(id)arg1;
- (void)simSetupFlowCompleted;
- (long long)userConsentResponse;

@end
