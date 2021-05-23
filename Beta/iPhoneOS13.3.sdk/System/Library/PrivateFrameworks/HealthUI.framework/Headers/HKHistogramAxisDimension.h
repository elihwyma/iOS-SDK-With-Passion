/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol HKHistogramAxisDimensionDataSource;

@interface HKHistogramAxisDimension : NSObject

{
    id <HKHistogramAxisDimensionDataSource> _dataSource;
}

@property (weak, nonatomic) id <HKHistogramAxisDimensionDataSource> dataSource;

- (id)stringForLocation:(id)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
- (double)ticksPerStepSize:(double)arg1;
- (void)setStepSizeForLabels:(double)arg1;

@end
