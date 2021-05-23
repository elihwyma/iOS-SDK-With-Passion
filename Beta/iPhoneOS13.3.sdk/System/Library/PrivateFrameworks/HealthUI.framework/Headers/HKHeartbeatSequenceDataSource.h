/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKHeartbeatSequenceDataSource : HKGraphSeriesDataSource

{
    HKGraphSeriesDataBlock *_dataBlock;
}

@property (nonatomic, readonly) HKGraphSeriesDataBlock *dataBlock;

- (id)init;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (void)setHeartbeatSequencePoints:(id)arg1;
- (struct CGRect)unionWithExtent:(struct CGRect)arg1;

@end
