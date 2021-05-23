/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDateComponents, NSString;

@interface HKInteractiveChartTimePeriodData : NSObject

{
    double _timePeriod;
    NSString *_timePeriodPrefix;
    NSDateComponents *_statisticsInterval;
    long long _recordCount;
}

@property (nonatomic) double timePeriod;
@property (retain, nonatomic) NSString *timePeriodPrefix;
@property (retain, nonatomic) NSDateComponents *statisticsInterval;
@property (nonatomic) long long recordCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
