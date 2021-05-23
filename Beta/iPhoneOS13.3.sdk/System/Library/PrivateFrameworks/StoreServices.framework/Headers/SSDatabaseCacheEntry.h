/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLiteEntity.h>

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity

{
    SSPersistentCache *_persistentCache;
}

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;
- (void)setPersistentCache:(id)arg1;
- (id)dataBlob:(_Bool *)arg1;

@end
