/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier

{
    CTCellularPlanPendingTransfer *_plan;
    CTCellularPlanManager *_cellularPlanManager;
}

@property (retain, nonatomic) CTCellularPlanPendingTransfer *plan;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;

- (id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2;
- (void)setSpecifierProperties;
- (void)activatePlanPendingTransfer:(id)arg1;

@end
