/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@protocol BLTObjectCacheDelegate, OS_dispatch_queue;

@interface BLTObjectCache : NSObject

{
    NSMutableSet *_keys;
    NSMutableDictionary *_cachedObjects;
    NSObject<OS_dispatch_queue> *_queue;
    double _maxItemAge;
    long long _maxItemCount;
    id <BLTObjectCacheDelegate> _delegate;
}

@property (nonatomic, readonly) NSSet *keys;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithDelegate:(id)arg1 withMaxItemCount:(long long)arg2;
- (id)initWithDelegate:(id)arg1 withMaxItemCount:(long long)arg2 andMaxItemAge:(double)arg3;
- (void)_updateCachedObjectIfNecessary:(id)arg1 withKey:(id)arg2;
- (void)_addKeyToSet:(id)arg1;
- (_Bool)_isObjectWithKeyCached:(id)arg1;
- (_Bool)_doesObjectWithKeyExist:(id)arg1;
- (id)_cachedObjectForKey:(id)arg1;
- (void)_addObjectToCache:(id)arg1 withKey:(id)arg2;
- (void)_pruneCache;
- (void)_deleteObjectFromCacheWithKey:(id)arg1;
- (id)initWithDelegate:(id)arg1 withMaxItemAge:(double)arg2;
- (void)storeObject:(id)arg1 withKey:(id)arg2;

@end
