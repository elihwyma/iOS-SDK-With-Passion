/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol HKGraphSeriesDataSourceDelegate;

@interface HKGraphSeriesDataSource : NSObject

{
    id <HKGraphSeriesDataSourceDelegate> _delegate;
    long long _minimumZoom;
    long long _maximumZoom;
}

@property (weak, nonatomic) id <HKGraphSeriesDataSourceDelegate> delegate;
@property (nonatomic) long long minimumZoom;
@property (nonatomic) long long maximumZoom;

- (id)init;
- (void)invalidateCache;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (_Bool)hasAvailableBlocksBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (_Bool)hasPendingQueriesBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;

@end
