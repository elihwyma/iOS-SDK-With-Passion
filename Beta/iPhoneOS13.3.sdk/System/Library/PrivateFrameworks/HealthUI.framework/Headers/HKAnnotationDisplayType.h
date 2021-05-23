/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDisplayType.h>

@class NSArray;

@interface HKAnnotationDisplayType : HKInteractiveChartDisplayType

{
    NSArray *_trendChartPoints;
}

@property (nonatomic, readonly) NSArray *trendChartPoints;

- (id)initWithDateInterval:(id)arg1 trendData:(id)arg2;

@end
