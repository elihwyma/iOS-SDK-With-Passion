/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface HDDatabaseValueCache : NSObject

{
    NSMutableDictionary *_cache;
    NSString *_threadLocalKey;
    long long _cacheScope;
    struct os_unfair_lock_s _lock;
    struct {
        long long faultCount;
        long long lookupCount;
        long long resetCount;
    } _statistics;
    NSString *_name;
}

@property (readonly) CDStruct_2ec95fd7 statistics;
@property (copy, readonly) NSString *name;
@property (readonly) long long cacheScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)diagnosticDescription;
- (void)removeAllObjectsWithDatabase:(id)arg1;
- (void)removeObjectForKey:(id)arg1 database:(id)arg2;
- (id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id *)arg3 faultHandler:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 cacheScope:(long long)arg2;
- (id)_lock_objectForKey:(id)arg1 database:(id)arg2;
- (void)_lock_storeObject:(id)arg1 forKey:(id)arg2 database:(id)arg3;
- (id)_transactionStorageWithDatabase:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_lock_removeAllObjectsWithDatabase:(id)arg1;
- (void)_commitTransactionStorage:(id)arg1;

@end
