/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSNumber;

@interface HKHistogramChartDataSourceBin : NSObject

{
    NSMutableArray *_backingValues;
}

@property (copy, nonatomic, readonly) NSArray *values;
@property (copy, nonatomic, readonly) NSArray *sortedValues;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSNumber *sumValue;
@property (nonatomic, readonly) NSNumber *averageValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *maximumValue;

- (id)init;
- (id)initWithValues:(id)arg1;
- (void)addValue:(id)arg1;

@end
