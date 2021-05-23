/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@protocol CNScheduler;

@interface CNCache : NSObject

{
    NSArray *_boundingStrategies;
    id <CNScheduler> _resourceScheduler;
    NSMutableDictionary *_storage;
    NSMutableArray *_didEvictHandlers;
    NSArray *_evictedKeysAndValues;
}

@property (copy, nonatomic, readonly) NSArray *boundingStrategies;
@property (nonatomic, readonly) id <CNScheduler> resourceScheduler;
@property (nonatomic, readonly) NSMutableDictionary *storage;
@property (nonatomic, readonly) NSMutableArray *didEvictHandlers;
@property (copy, nonatomic) NSArray *evictedKeysAndValues;
@property (copy, readonly) NSArray *allKeys;
@property (copy, readonly) NSArray *allObjects;

+ (id)cache;
+ (id)atomicCache;
+ (id)atomicCacheScheduler;
+ (id)nonatomicCacheScheduler;
+ (id)boundingStrategyWithCapacity:(unsigned long long)arg1;
+ (id)boundingStrategyWithTTL:(double)arg1;
+ (id)boundingStrategyWithTTL:(double)arg1 timeProvider:(id)arg2;

- (id)init;
- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKey:(id)arg1 onCacheMiss:(CDUnknownBlockType)arg2;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)resultWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithResourceScheduler:(id)arg1;
- (id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2;
- (void)resourceLock_validateKey:(id)arg1;
- (void)resourceLock_willAccessKey:(id)arg1;
- (void)callDidEvictHandlersIfNecessary;
- (void)resourceLock_setObject:(id)arg1 forKey:(id)arg2;
- (void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2;
- (void)resourceLock_validateAllKeys;
- (void)resourceLock_evictObjectsForKeys:(id)arg1;
- (void)resourceLock_evictObjectForKey:(id)arg1;
- (void)addDidEvictHandler:(CDUnknownBlockType)arg1;

@end
