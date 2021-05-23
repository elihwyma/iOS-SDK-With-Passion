/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator, NSRecursiveLock, NSString, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionHistoryCache : NSObject

{
    NSString *_localPeerID;
    PFUbiquityLocation *_rootLocation;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    NSPersistentStoreCoordinator *_privatePSC;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    NSMutableArray *_entriesToWrite;
    PFUbiquityKnowledgeVector *_cacheKV;
    PFUbiquityKnowledgeVector *_minCacheKV;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    _Bool _hasScheduledWriteBlock;
}

@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *cacheKV;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *minCacheKV;
@property (nonatomic, readonly) NSArray *cachedGlobalIDs;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)cacheTransactionHistory:(id *)arg1;
- (_Bool)purgeCacheAndWritePendingEntries:(_Bool)arg1 error:(id *)arg2;
- (_Bool)writePendingEntries:(id *)arg1;
- (id)cachedTransactionHistoryForGlobalID:(id)arg1;
- (_Bool)addTransactionEntryLight:(id)arg1 needsWrite:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addTransactionEntryLights:(id)arg1 error:(id *)arg2;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (_Bool)addTransactionEntry:(id)arg1 error:(id *)arg2;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 privateStore:(id)arg3 andUbiquityRootLocation:(id)arg4;

@end
