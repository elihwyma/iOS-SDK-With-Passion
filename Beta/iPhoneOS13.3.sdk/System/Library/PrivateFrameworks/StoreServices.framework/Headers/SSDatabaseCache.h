/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSPersistentCache, SSSQLiteDatabase;

@protocol OS_dispatch_queue;

@interface SSDatabaseCache : NSObject

{
    unsigned long long _maximumInlineBlobSize;
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSPersistentCache *_persistentCache;
    SSSQLiteDatabase *_database;
    Class _cacheEntryClass;
}

@property (nonatomic) unsigned long long maximumInlineBlobSize;

- (void)dealloc;
- (id)description;
- (void)clear;
- (id)statistics;
- (_Bool)_setupDatabase;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4;
- (id)cacheEntryForLookupKey:(id)arg1;
- (void)clearCacheForLookupKey:(id)arg1;
- (int)clearRetiredData;
- (id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5;
- (id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2;

@end
