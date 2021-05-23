/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class NSDate, NSDateFormatter;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar

{
    NSDateFormatter *_dateFormatter;
    NSDate *_startDate;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDate *startDate;

- (id)initWithStartDate:(id)arg1;
- (id)stringForLocation:(id)arg1;

@end
