/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSConfirmationSpecifier.h>

@class CTCellularPlanManager, PSListController, PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier

{
    _Bool _popViewControllerOnPlanDeletion;
    PSUICellularPlanUniversalReference *_planReference;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSListController *_hostController;
}

@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (weak, nonatomic) PSListController *hostController;
@property (nonatomic) _Bool popViewControllerOnPlanDeletion;

- (id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 hostController:(id)arg4 popViewControllerOnPlanDeletion:(_Bool)arg5;
- (void)alignLeft;
- (void)removeCellularPlan:(id)arg1;
- (void)removeCellularPlanConfirmed:(id)arg1;

@end
