/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCache, NSDate, NSDateInterval, NSDictionary, NSString, STUsageReportGraphDataSet;

@interface STUsageReport : NSObject

{
    NSDateInterval *_maxPickupsDateInterval;
    NSString *_displayName;
    unsigned long long _type;
    NSDateInterval *_reportDateInterval;
    NSDate *_lastUpdatedDate;
    NSArray *_dateIntervals;
    double _totalScreenTime;
    double _screenTimeDeltaFromHistoricalAverage;
    unsigned long long _totalPickups;
    NSDictionary *_pickupsByBundleIdentifier;
    NSArray *_pickups;
    double _pickupRate;
    double _activePickupDateIntervals;
    double _pickupFrequency;
    unsigned long long _maxPickups;
    unsigned long long _maxPickupDateIntervalIndex;
    NSDate *_firstPickup;
    double _pickupDeltaFromHistoricalAverage;
    unsigned long long _totalNotifications;
    NSDictionary *_notificationsByBundleIdentifier;
    NSArray *_notifications;
    double _notificationRate;
    double _notificationDeltaFromHistoricalAverage;
    NSDictionary *_appUsageByBundleIdentifier;
    NSDictionary *_webUsageByDomain;
    NSArray *_appAndWebUsages;
    NSDictionary *_categoryUsageByCategorydentifier;
    NSArray *_categoryUsages;
    double _maxScreenTime;
    NSDictionary *_screenTimeByStartOfDateInterval;
    NSDictionary *_pickupsByStartOfDateInterval;
    NSDictionary *_pickupsByStartOfDateIntervalByBundleIdentifier;
    NSDictionary *_notificationsByStartOfDateInterval;
    NSDictionary *_notificationsByStartOfDateIntervalByBundleIdentifier;
    double _totalAppUsage;
    NSDictionary *_appUsageByStartOfDateInterval;
    NSDictionary *_appUsageByStartOfDateIntervalByBundleIdentifier;
    NSArray *_appUsages;
    double _totalWebUsage;
    NSDictionary *_webUsageByStartOfDateInterval;
    NSDictionary *_webUsageByStartOfDateIntervalByDomain;
    NSArray *_webUsages;
    double _totalCategoryUsage;
    NSDictionary *_categoryUsageByStartOfDateInterval;
    NSDictionary *_categoryUsageByStartOfDateIntervalByCategoryIdentifier;
    NSCache *_dataSetByUsageIdentifier;
}

@property (nonatomic, readonly) double maxScreenTime;
@property (copy, nonatomic, readonly) NSDictionary *screenTimeByStartOfDateInterval;
@property (copy, nonatomic, readonly) NSDictionary *pickupsByStartOfDateInterval;
@property (copy, nonatomic, readonly) NSDictionary *pickupsByStartOfDateIntervalByBundleIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *notificationsByStartOfDateInterval;
@property (copy, nonatomic, readonly) NSDictionary *notificationsByStartOfDateIntervalByBundleIdentifier;
@property (nonatomic, readonly) double totalAppUsage;
@property (copy, nonatomic, readonly) NSDictionary *appUsageByStartOfDateInterval;
@property (copy, nonatomic, readonly) NSDictionary *appUsageByStartOfDateIntervalByBundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *appUsages;
@property (nonatomic, readonly) double totalWebUsage;
@property (copy, nonatomic, readonly) NSDictionary *webUsageByStartOfDateInterval;
@property (copy, nonatomic, readonly) NSDictionary *webUsageByStartOfDateIntervalByDomain;
@property (copy, nonatomic, readonly) NSArray *webUsages;
@property (nonatomic, readonly) double totalCategoryUsage;
@property (copy, nonatomic, readonly) NSDictionary *categoryUsageByStartOfDateInterval;
@property (copy, nonatomic, readonly) NSDictionary *categoryUsageByStartOfDateIntervalByCategoryIdentifier;
@property (retain, nonatomic) NSCache *dataSetByUsageIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSDateInterval *reportDateInterval;
@property (copy, nonatomic, readonly) NSDate *lastUpdatedDate;
@property (copy, nonatomic, readonly) NSArray *dateIntervals;
@property (nonatomic, readonly) double totalScreenTime;
@property (nonatomic, readonly) STUsageReportGraphDataSet *screenTimeDataSet;
@property (nonatomic, readonly) double screenTimeDeltaFromHistoricalAverage;
@property (nonatomic, readonly) unsigned long long totalPickups;
@property (copy, nonatomic, readonly) NSDictionary *pickupsByBundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *pickups;
@property (nonatomic, readonly) double pickupRate;
@property (nonatomic, readonly) double activePickupDateIntervals;
@property (nonatomic, readonly) double pickupFrequency;
@property (nonatomic, readonly) unsigned long long maxPickups;
@property (nonatomic, readonly) unsigned long long maxPickupDateIntervalIndex;
@property (nonatomic, readonly) STUsageReportGraphDataSet *pickupsDataSet;
@property (copy, nonatomic, readonly) NSDateInterval *maxPickupsDateInterval;
@property (nonatomic, readonly) NSDate *firstPickup;
@property (readonly) double pickupDeltaFromHistoricalAverage;
@property (nonatomic, readonly) unsigned long long totalNotifications;
@property (copy, nonatomic, readonly) NSDictionary *notificationsByBundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *notifications;
@property (nonatomic, readonly) double notificationRate;
@property (nonatomic, readonly) STUsageReportGraphDataSet *notificationsDataSet;
@property (readonly) double notificationDeltaFromHistoricalAverage;
@property (copy, nonatomic, readonly) NSDictionary *appUsageByBundleIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *webUsageByDomain;
@property (copy, nonatomic, readonly) NSArray *appAndWebUsages;
@property (copy, nonatomic, readonly) NSDictionary *categoryUsageByCategorydentifier;
@property (copy, nonatomic, readonly) NSArray *categoryUsages;
@property (nonatomic, readonly) STUsageReportGraphDataSet *categoryUsageDataSet;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)topUsageItemsWithMaxCount:(unsigned long long)arg1 type:(unsigned long long)arg2 includeAggregateItem:(_Bool)arg3 nonAggregateItems:(id *)arg4 darkColors:(_Bool)arg5;
- (id)dataSetWithUsageItem:(id)arg1;
- (id)initWithReportType:(unsigned long long)arg1 startDate:(id)arg2 lastUpdatedDate:(id)arg3 firstPickup:(id)arg4 usageItems:(id)arg5;
- (id)_dataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2 includeIndicatorImageName:(_Bool)arg3 useDarkColors:(_Bool)arg4;
- (id)_countedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2 includeIndicatorImageName:(_Bool)arg3;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 useDarkColors:(_Bool)arg2;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2;
- (id)appAndWebUsageDataSetWithDarkColors:(_Bool)arg1;

@end
