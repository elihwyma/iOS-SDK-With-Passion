/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource

{
    HKGraphSeriesDataBlock *_dataBlock;
}

@property (nonatomic, readonly) HKGraphSeriesDataBlock *dataBlock;

- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(_Bool)arg2;
- (id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(_Bool)arg2;
- (id)initWithSensitivityData:(id)arg1 forLeftEar:(_Bool)arg2;
- (id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(_Bool)arg2;

@end
