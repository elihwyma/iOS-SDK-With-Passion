/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class PSDataUsageStatisticsCache;

@protocol PSAppCellularUsageSpecifierDelegate;

__attribute__((visibility("hidden")))
@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject

{
    id <PSAppCellularUsageSpecifierDelegate> _specifierDelegate;
    PSDataUsageStatisticsCache *_statisticsCache;
}

@property (weak, nonatomic) id <PSAppCellularUsageSpecifierDelegate> specifierDelegate;
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;

- (id)specifiers;
- (id)initWithPolicySpecifierDelegate:(id)arg1 statisticsCache:(id)arg2;

@end
