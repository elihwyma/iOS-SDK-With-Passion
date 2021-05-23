/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDChartExperimentHorizontalSingleLineSource : HKGraphSeriesDataSource

{
    NSArray *_chartPoints;
}

@property (nonatomic, readonly) NSArray *chartPoints;

- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)initWithAppointments:(id)arg1;
- (id)_appointmentsToChartPoints:(id)arg1;
- (id)initWithHorizontalSingleLineChartPoints:(id)arg1;

@end
