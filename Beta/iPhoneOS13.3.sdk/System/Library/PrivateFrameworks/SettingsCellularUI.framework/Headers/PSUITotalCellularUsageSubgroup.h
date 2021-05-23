/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class PSDataUsageStatisticsCache, PSSpecifier;

@protocol PSBillingPeriodSource;

__attribute__((visibility("hidden")))
@interface PSUITotalCellularUsageSubgroup : NSObject

{
    PSDataUsageStatisticsCache *_statisticsCache;
    id <PSBillingPeriodSource> _billingPeriodSource;
    PSSpecifier *_totalUsageSpecifier;
    PSSpecifier *_totalRoamingUsageSpecifier;
}

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (weak, nonatomic) id <PSBillingPeriodSource> billingPeriodSource;
@property (retain, nonatomic) PSSpecifier *totalUsageSpecifier;
@property (retain, nonatomic) PSSpecifier *totalRoamingUsageSpecifier;

- (id)specifiers;
- (id)initWithStatisticsCache:(id)arg1 andBillingPeriodSource:(id)arg2;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalBytesUsed;
- (id)totalRoamingBytesUsed;

@end
