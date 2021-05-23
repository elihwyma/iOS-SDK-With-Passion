/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOTileCacheReserved : NSObject

{
    struct mutex _reservedLock;
    struct list<CacheItem, std::__1::allocator<CacheItem>> _reservedList;
    struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>>> _reservedMap;
    unsigned long long _reservedMaxCapacity;
    unsigned long long _reservedMaxCost;
    unsigned long long _reservedCurrentCost;
    unsigned long long _reservedCurrentCount;
}

- (void)dealloc;
- (id).cxx_construct;

@end
