/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary

{
    NSDateComponents *_collationDateComponents;
    long long _timeScope;
    double _collatedSummaryCount;
}

@property (nonatomic) long long timeScope;
@property (nonatomic) double collatedSummaryCount;
@property (retain, nonatomic) NSDateComponents *collationDateComponents;

- (id)dateComponentsForCalendar:(id)arg1;
- (id)_addQuantity:(id)arg1 toQuantity:(id)arg2;
- (id)_maxQuantity:(id)arg1 otherQuantity:(id)arg2;
- (id)_divideQuantity:(id)arg1 divisor:(double)arg2;
- (id)initWithTimeScope:(long long)arg1;
- (void)combineWithActivitySummary:(id)arg1;
- (void)finishCollatingSummaryWithGraphView:(id)arg1;

@end
