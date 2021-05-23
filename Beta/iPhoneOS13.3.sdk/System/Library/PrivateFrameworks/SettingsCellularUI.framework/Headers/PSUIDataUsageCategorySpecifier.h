/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class NSArray, PSDataUsageStatisticsCache;

@protocol PSBillingPeriodSource;

__attribute__((visibility("hidden")))
@interface PSUIDataUsageCategorySpecifier : PSSpecifier

{
    id <PSBillingPeriodSource> _billingPeriodSource;
    NSArray *_subcategorySpecifiers;
    PSDataUsageStatisticsCache *_statisticsCache;
    unsigned long long _type;
}

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id <PSBillingPeriodSource> billingPeriodSource;
@property (retain, nonatomic) NSArray *subcategorySpecifiers;

- (unsigned long long)dataUsage;
- (id)initWithType:(unsigned long long)arg1 subSpecifiers:(id)arg2;
- (id)dataUsageString;

@end
