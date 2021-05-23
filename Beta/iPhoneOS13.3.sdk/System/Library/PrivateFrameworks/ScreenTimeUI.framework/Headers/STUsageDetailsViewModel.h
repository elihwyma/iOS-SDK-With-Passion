/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, STUsageReport;

__attribute__((visibility("hidden")))
@interface STUsageDetailsViewModel : NSObject

{
    _Bool _localDevice;
    _Bool _hasAggregateUsageData;
    unsigned long long _selectedWeek;
    STUsageReport *_selectedWeekUsageReport;
    NSArray *_weekUsageReports;
    unsigned long long _selectedDay;
    STUsageReport *_selectedDayUsageReport;
    NSArray *_dayUsageReportByWeekdays;
    NSString *_selectedItemDisplayName;
    NSDate *_lastUpdatedDate;
    NSArray *_rawUsageItems;
}

@property (retain) STUsageReport *selectedWeekUsageReport;
@property (copy) NSArray *weekUsageReports;
@property (retain) STUsageReport *selectedDayUsageReport;
@property (copy) NSArray *dayUsageReportByWeekdays;
@property (copy) NSDate *lastUpdatedDate;
@property _Bool hasAggregateUsageData;
@property (copy) NSArray *rawUsageItems;
@property (nonatomic) unsigned long long selectedWeek;
@property (nonatomic) unsigned long long selectedDay;
@property (readonly) STUsageReport *selectedUsageReport;
@property (getter=isLocalDevice) _Bool localDevice;
@property (copy) NSString *selectedItemDisplayName;
@property (nonatomic, readonly) _Bool hasUsageData;

+ (id)keyPathsForValuesAffectingSelectedUsageReport;
+ (id)keyPathsForValuesAffectingHasUsageData;
+ (void)_enumerateWeeklyReportStartDatesWithReferenceDate:(id)arg1 ascending:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)_enumerateDayReportStartDatesWithStartOfWeek:(id)arg1 ascending:(_Bool)arg2 block:(CDUnknownBlockType)arg3;

- (id)init;
- (void)setSelectedWeek:(unsigned long long)arg1 selectedDay:(unsigned long long)arg2;
- (void)selectToday;
- (void)setWeekReportUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3;

@end
