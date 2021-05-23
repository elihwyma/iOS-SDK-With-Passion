/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateInterval, NSNumber, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphDataPoint : NSObject

{
    unsigned long long _timePeriod;
    unsigned long long _itemType;
    NSDateInterval *_dateInterval;
    NSNumber *_total;
    double _totalAsPercentageOfMax;
    NSString *_indicatorImageName;
    UIColor *_indicatorImageColor;
    NSArray *_segments;
}

@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSNumber *total;
@property (nonatomic) double totalAsPercentageOfMax;
@property (copy, nonatomic) NSString *indicatorImageName;
@property (copy) UIColor *indicatorImageColor;
@property (copy, nonatomic) NSArray *segments;
@property (nonatomic, readonly) NSDate *date;

- (id)description;
- (id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 dateInterval:(id)arg3 total:(id)arg4 totalAsPercentageOfMax:(double)arg5 segments:(id)arg6;

@end
