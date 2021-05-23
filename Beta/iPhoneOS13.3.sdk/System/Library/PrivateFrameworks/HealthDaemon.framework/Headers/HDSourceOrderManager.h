/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseValueCache, HDProfile;

@interface HDSourceOrderManager : NSObject

{
    HDProfile *_profile;
    HDDatabaseValueCache *_sourceOrdersForTypeCache;
}

+ (id)_defaultOrderingWithSources:(id)arg1;

- (id)initWithProfile:(id)arg1;
- (void)resetCacheInDatabase:(id)arg1;
- (_Bool)_insertCodableObjectTypeSourceOrder:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)_sourceCacheItemForObjectType:(id)arg1 error:(id *)arg2;
- (_Bool)_updateSourceOrder:(id)arg1 type:(id)arg2 transactionCache:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
- (_Bool)_updateOrderedSourceIDsForWrappedSource:(struct _HDWrappedSource *)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)_sourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)_sourceOrderForCodableSourceOrder:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)_mergedSourceOrderForExistingOrder:(id)arg1 incomingOrder:(id)arg2;
- (id)_fetchSourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)_defaultSourceCacheItemWithTransactionCache:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)_addOrderedSource:(id)arg1 objectType:(id)arg2 transactionCache:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
- (_Bool)_updateSourceOrder:(id)arg1 type:(id)arg2 error:(id *)arg3;
- (_Bool)resetCacheWithError:(id *)arg1;
- (_Bool)createSourceOrdersWithCodables:(id)arg1 error:(id *)arg2;
- (id)orderedSourcesForObjectType:(id)arg1 error:(id *)arg2;
- (id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id *)arg3;
- (id)_orderedSourceIDsForOrderedSources:(id)arg1 sourcesByID:(id)arg2 objectType:(id)arg3 transactionCache:(id)arg4 database:(id)arg5 error:(id *)arg6;
- (_Bool)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id *)arg3;

@end
