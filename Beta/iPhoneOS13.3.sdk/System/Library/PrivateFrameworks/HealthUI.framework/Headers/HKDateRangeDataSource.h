/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSMutableDictionary;

@protocol HKDateRangeDataSourceDelegate;

@interface HKDateRangeDataSource : HKGraphSeriesDataSource

{
    id <HKDateRangeDataSourceDelegate> _sourceDelegate;
    NSMutableDictionary *_pathToDataBlock;
}

@property (nonatomic, readonly) id <HKDateRangeDataSourceDelegate> sourceDelegate;
@property (retain, nonatomic) NSMutableDictionary *pathToDataBlock;

- (void)invalidateCache;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)_fetchAndCacheDataForPath:(CDStruct_6ca94699)arg1;
- (void)dateRangeDataUpdated;
- (id)initWithSourceDelegate:(id)arg1;

@end
