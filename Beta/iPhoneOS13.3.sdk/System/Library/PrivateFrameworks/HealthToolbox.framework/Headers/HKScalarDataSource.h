/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

__attribute__((visibility("hidden")))
@interface HKScalarDataSource : HKGraphSeriesDataSource

{
    HKGraphSeriesDataBlock *_dataBlock;
}

@property (nonatomic, readonly) HKGraphSeriesDataBlock *dataBlock;

- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)initWithValuePoints:(id)arg1 unitForY:(id)arg2;
- (id)initWithCGPoints:(struct CGPoint *)arg1 count:(long long)arg2 unitForY:(id)arg3;
- (CDStruct_912cb5d2)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_912cb5d2)arg1 toPath:(CDStruct_912cb5d2)arg2;

@end
