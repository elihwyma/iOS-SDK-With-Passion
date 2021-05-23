/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, PSListController, PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUITurnOnThisLineSpecifier : PSSpecifier

{
    PSUICellularPlanUniversalReference *_planReference;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSListController *_hostController;
}

@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (weak, nonatomic) PSListController *hostController;

- (id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 hostController:(id)arg4;
- (void)setPlanEnabled:(id)arg1 specifier:(id)arg2;
- (id)isPlanEnabled:(id)arg1;

@end
