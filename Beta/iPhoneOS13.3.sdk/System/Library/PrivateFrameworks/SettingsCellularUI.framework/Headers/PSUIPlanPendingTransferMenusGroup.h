/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferMenusGroup : NSObject

{
    PSSpecifier *_parentSpecifier;
    CTCellularPlanPendingTransfer *_planPendingTransfer;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
}

@property (retain, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)addSpecifierForHeaderString:(id)arg1;
- (id)activatePlanSpecifier;
- (id)planPendingTransferLabel:(id)arg1;
- (id)planPendingTransferNumber:(id)arg1;
- (void)removePlanPendingTransfer:(id)arg1;
- (id)cancelConsentRequestSpecifier;
- (id)planActivationInfo;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;

@end
