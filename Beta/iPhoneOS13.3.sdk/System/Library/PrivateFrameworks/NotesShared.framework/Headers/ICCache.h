/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSCache.h>

@class NSMutableSet, NSObject, NSSet;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICCache : NSCache

{
    NSObject<OS_dispatch_source> *_memoryWarningEventSource;
    NSMutableSet *_mutableKeys;
    NSObject<OS_dispatch_queue> *_mutableKeysAccessQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource;
@property (retain, nonatomic) NSMutableSet *mutableKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mutableKeysAccessQueue;
@property (nonatomic, readonly) NSSet *allKeys;

+ (void)purgeAllCaches;
+ (id)cacheCollection;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)registerForMemoryWarnings;
- (void)unregisterForMemoryWarnings;
- (void)receivedMemoryWarning;
- (void)removeObjectsWithKeyContainingString:(id)arg1;

@end
