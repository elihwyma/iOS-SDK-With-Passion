/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLCache : NSObject

{
    NSMutableDictionary *_cacheEntries;
    long long _countLimit;
    long long _currentCount;
    long long _totalCostLimit;
    long long _currentCost;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    struct entryList _lru;
}

- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3;
- (id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2;

@end
