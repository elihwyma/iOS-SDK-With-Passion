/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileCache;

@protocol OS_dispatch_source;

@interface GEOTilePool : NSObject

{
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    struct _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _pool;
    struct _GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _decodedPool;
    GEOTileCache *_cache;
}

@property (nonatomic, readonly) unsigned long long currentCount;
@property (nonatomic, readonly) unsigned long long currentCost;
@property unsigned long long maxCapacity;
@property unsigned long long maxCost;

- (id)init;
- (void)removeAllObjects;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (id).cxx_construct;
- (void)_receivedMemoryNotification;
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1 cost:(unsigned long long *)arg2;
- (id)tileForKey:(const struct _GEOTileKey *)arg1;
- (void)removeTilesMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 cost:(unsigned long long)arg3;
- (void)_enteredBackground:(id)arg1;
- (void)removeTileForKey:(const struct _GEOTileKey *)arg1;
- (void)removeTilesWithKeys:(id)arg1;
- (id)initWithSideCacheEnabled:(_Bool)arg1;

@end
