/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableSet, NSString, SSDatabaseCache;

@protocol OS_dispatch_queue;

@interface SSCacheObjectStore : NSObject

{
    SSDatabaseCache *_databaseCache;
    NSMutableSet *_factories;
    NSString *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)dealloc;
- (id)description;
- (id)initWithSessionIdentifier:(id)arg1;
- (void)clearSession;
- (id)_factoryForTypeIdentifier:(id)arg1;
- (_Bool)addObject:(id)arg1 withItemIdentifier:(id)arg2;
- (_Bool)removeObjectWithItemIdentifier:(id)arg1;
- (id)cacheObjectWithItemIdentifier:(id)arg1;
- (void)addCacheObjectFactory:(id)arg1;
- (void)removeCacheObjectFactory:(id)arg1;

@end
