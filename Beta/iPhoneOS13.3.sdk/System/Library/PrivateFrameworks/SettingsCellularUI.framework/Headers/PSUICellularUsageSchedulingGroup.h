/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTUIListWithHeaderLoadingGroup, PSListController, PSUICellularUsageLayoutGroup;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageSchedulingGroup : NSObject

{
    PSListController *_hostController;
    CTUIListWithHeaderLoadingGroup *_loadingGroup;
    PSUICellularUsageLayoutGroup *_dataUsageSyncGroup;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup;
@property (retain, nonatomic) PSUICellularUsageLayoutGroup *dataUsageSyncGroup;

- (id)specifiers;
- (void)prefetchResourcesFor:(id)arg1;
- (void)presentAlert:(id)arg1;
- (void)didFailToSetPolicy:(id)arg1 forSpecifier:(id)arg2;
- (void)calculateUsage;
- (void)setGroupSpecifierTitle:(id)arg1;
- (void)didResetStatistics;
- (id)initWithListController:(id)arg1 groupSpecifierTitle:(id)arg2;
- (void)selectedBillingPeriodChanged:(unsigned long long)arg1;

@end
