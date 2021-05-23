/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PSCellularManagementCache, PSDataUsageStatisticsCache, PSListController, PSUICallTimeGroup, PSUICarrierSpaceManager, PSUICellularUsageContentSpecifiers, PSUIResetStatisticsGroup, PSUITotalCellularUsageSubgroup;

@protocol PSAppCellularUsageSpecifierDelegate, PSBillingPeriodSelectorSpecifierDelegate;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageLayoutGroup : NSObject

{
    PSCellularManagementCache *_managementCache;
    PSDataUsageStatisticsCache *_statisticsCache;
    PSUICarrierSpaceManager *_carrierSpaceManager;
    PSListController *_hostController;
    id <PSBillingPeriodSelectorSpecifierDelegate> _billingCycleDelegate;
    id <PSAppCellularUsageSpecifierDelegate> _policySpecifierDelegate;
    NSString *_groupSpecifierTitle;
    NSArray *_savedHeaderSpecifiers;
    PSUICellularUsageContentSpecifiers *_savedContentSpecifiers;
    PSUITotalCellularUsageSubgroup *_totalUsageSubgroup;
    PSUICallTimeGroup *_callTimeGroup;
    PSUIResetStatisticsGroup *_resetStatisticsGroup;
}

@property (retain, nonatomic) PSCellularManagementCache *managementCache;
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) PSUICarrierSpaceManager *carrierSpaceManager;
@property (retain, nonatomic) PSListController *hostController;
@property (weak, nonatomic) id <PSBillingPeriodSelectorSpecifierDelegate> billingCycleDelegate;
@property (weak, nonatomic) id <PSAppCellularUsageSpecifierDelegate> policySpecifierDelegate;
@property (retain, nonatomic) NSString *groupSpecifierTitle;
@property (retain) NSArray *savedHeaderSpecifiers;
@property (retain) PSUICellularUsageContentSpecifiers *savedContentSpecifiers;
@property (retain, nonatomic) PSUITotalCellularUsageSubgroup *totalUsageSubgroup;
@property (retain, nonatomic) PSUICallTimeGroup *callTimeGroup;
@property (retain, nonatomic) PSUIResetStatisticsGroup *resetStatisticsGroup;

- (id)initWithGroupSpecifierTitle:(id)arg1 hostController:(id)arg2 managementCache:(id)arg3 statisticsCache:(id)arg4 carrierSpaceManager:(id)arg5 billingCycleDelegate:(id)arg6 policySpecifierDelegate:(id)arg7;
- (id)headerSpecifiers;
- (id)contentSpecifiers;
- (void)refreshOrderingOfContentSpecifiers;

@end
