/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTilePool;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderInternal : NSObject

{
    struct list<LoadItem, std::__1::allocator<LoadItem>> _loadItems;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _timer;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _shrinkCacheRequesters;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _freeableSizeRequesters;
    _Atomic int _memoryHits;
    _Atomic int _diskHits;
    _Atomic int _networkHits;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo>> _recentErrors;
}

- (id).cxx_construct;

@end
