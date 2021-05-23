/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsLineSource : HKGraphSeriesDataSource

{
    NSArray *_chartPoints;
}

@property (nonatomic, readonly) NSArray *chartPoints;

- (id)initWithData:(id)arg1;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)_chartPointsFromDataSpec:(id)arg1;

@end
