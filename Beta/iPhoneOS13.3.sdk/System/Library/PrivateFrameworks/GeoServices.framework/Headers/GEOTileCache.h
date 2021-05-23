/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileCacheReserved;

@protocol OS_dispatch_source;

@interface GEOTileCache : NSObject

{
    GEOTileCacheReserved *_reserved;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

@property (nonatomic, readonly) unsigned long long currentCount;
@property (nonatomic, readonly) unsigned long long currentCost;
@property unsigned long long maxCapacity;
@property unsigned long long maxCost;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeAllObjects;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (id)_description;
- (void)_receivedMemoryNotification;
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1 cost:(unsigned long long *)arg2;
- (id)tileForKey:(const struct _GEOTileKey *)arg1;
- (void)removeTilesMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 cost:(unsigned long long)arg3;
- (void)_enteredBackground:(id)arg1;
- (void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2;
- (void)_removeTileForKey:(const struct _GEOTileKey *)arg1;
- (void)removeTileForKey:(const struct _GEOTileKey *)arg1;
- (void)removeTilesWithKeys:(id)arg1;

@end
