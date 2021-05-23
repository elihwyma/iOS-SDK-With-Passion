/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphDataSet : NSObject

{
    unsigned long long _timePeriod;
    unsigned long long _itemType;
    NSNumber *_total;
    NSNumber *_max;
    NSNumber *_average;
    double _averageAsPercentageOfMax;
    NSArray *_dataPoints;
}

@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSNumber *max;
@property (copy, nonatomic) NSNumber *average;
@property (nonatomic) double averageAsPercentageOfMax;
@property (copy, nonatomic) NSArray *dataPoints;

- (id)initEmptyDataSetWithTimePeriod:(unsigned long long)arg1 referenceDate:(id)arg2;
- (id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 total:(id)arg3 max:(id)arg4 average:(id)arg5 averageAsPercentageOfMax:(double)arg6 dataPoints:(id)arg7;

@end
