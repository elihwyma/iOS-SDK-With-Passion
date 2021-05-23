/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSRecursiveLock;

@interface PMObjectCache : NSObject

{
    NSRecursiveLock *_cacheLock;
    int _purgesInProgress;
    unsigned long long _currentSize;
    unsigned long long _setSize;
    unsigned long long _maxSize;
    unsigned long long _reservedMemory;
    unsigned long long _numberOfCalls;
    NSMapTable *_mapTable;
    float _responseRate;
    float _decayRate;
    float _penalty;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void)dealloc;
- (void)clearCache;
- (void)removeObjectForKey:(id)arg1;
- (unsigned long long)currentSize;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (void)setCacheSize:(unsigned long long)arg1;
- (int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4;
- (id)copyObjectForKey:(id)arg1 cost:(double *)arg2;
- (id)copyObjectForKeyDontUpdateAccessTime:(id)arg1 cost:(double *)arg2;
- (void)shutdownCache;
- (int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 retDidAddObject:(_Bool *)arg5;
- (id)copyObjectForKeyImpl:(id)arg1 cost:(double *)arg2 updateAccessTime:(_Bool)arg3;
- (unsigned long long)reservedMemorySize;
- (unsigned long long)getCacheMemoryUsed;
- (unsigned long long)getCacheSize;
- (void)reserveCacheMemory:(long long)arg1;

@end
