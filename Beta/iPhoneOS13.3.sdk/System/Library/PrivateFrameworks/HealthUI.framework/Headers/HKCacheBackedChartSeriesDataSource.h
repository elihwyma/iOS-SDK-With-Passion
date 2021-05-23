/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource

{
    CDStruct_6ca94699 _lastStartPath;
    CDStruct_6ca94699 _lastEndPath;
    HKChartCache *_chartCache;
}

@property (retain, nonatomic) HKChartCache *chartCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidateCache;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (_Bool)hasAvailableBlocksBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (_Bool)hasPendingQueriesBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (void)_resetCachedPaths;
- (void)chartCacheDidUpdate:(id)arg1;

@end
