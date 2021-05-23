/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSNumber;

@interface HKActivityStatisticsChartPointNode : NSObject

{
    HKValueRange *_dateRange;
    long long _type;
    NSNumber *_value;
}

@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSNumber *value;

- (id)initWithRange:(id)arg1 type:(long long)arg2 value:(id)arg3;

@end
