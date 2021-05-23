/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/TBDataSource.h>

@class NSManagedObjectContext, NSString, TBCoreDataStoreDescriptor, TBPersistenceManager;

@interface TBCoreDataSource : TBDataSource

{
    unsigned long long _cacheExpirationInDays;
    NSManagedObjectContext *_context;
    TBPersistenceManager *_persistenceManager;
    TBCoreDataStoreDescriptor *_descriptor;
}

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) TBPersistenceManager *persistenceManager;
@property (retain, nonatomic) TBCoreDataStoreDescriptor *descriptor;
@property (nonatomic) unsigned long long cacheExpirationInDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)type;
- (void)executeFetchRequest:(id)arg1;
- (void)_executePreferLocalFetchRequest:(id)arg1;
- (void)_executeFetchRequest:(id)arg1;
- (_Bool)_canSupportRequest:(id)arg1;
- (void)_createNewNetwork:(id)arg1 tile:(id)arg2 withMOC:(id)arg3;
- (void)removeAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createNewNetworkFromDictionary:(id)arg1 withMOC:(id)arg2;
- (void)cacheFetchResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeWithFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithStoreDescriptor:(id)arg1;
- (void)importObjectsWithArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
