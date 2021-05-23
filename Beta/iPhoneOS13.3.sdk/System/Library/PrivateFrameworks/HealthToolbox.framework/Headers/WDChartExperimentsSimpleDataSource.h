/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsSimpleDataSource : HKGraphSeriesDataSource

{
    NSArray *_chartPoints;
}

@property (retain, nonatomic) NSArray *chartPoints;

- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)initWithDosages:(id)arg1 unit:(id)arg2;
- (id)_dosagesToChartPoints:(id)arg1 unit:(id)arg2;
- (id)_computeSineData:(double)arg1;
- (id)initWithSineData:(double)arg1;

@end
