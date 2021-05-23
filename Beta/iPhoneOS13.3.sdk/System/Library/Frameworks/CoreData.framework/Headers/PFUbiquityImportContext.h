/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, PFUbiquityBaselineHeuristics, PFUbiquityKnowledgeVector, PFUbiquityPeer, PFUbiquityStoreMetadata, PFUbiquityStoreSaveSnapshot, PFUbiquitySwitchboardCacheWrapper, PFUbiquityTransactionLog, _PFUbiquityStack;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportContext : NSObject

{
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeer *_actingPeer;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSString *_exportingPeerID;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_storeSaveSnapshot;
    NSDictionary *_globalIDToLocalIDURICache;
    NSMutableDictionary *_globalIDToFetchedObject;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property (retain, nonatomic) _PFUbiquityStack *stack;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;
@property (nonatomic, readonly) PFUbiquityPeer *actingPeer;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;
@property (retain, nonatomic) NSString *exportingPeerID;
@property (retain, nonatomic) PFUbiquityTransactionLog *transactionLog;
@property (retain, nonatomic) PFUbiquityStoreSaveSnapshot *storeSaveSnapshot;
@property (retain, nonatomic) NSDictionary *globalIDToLocalIDURICache;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (nonatomic, readonly) NSMutableDictionary *globalIDToFetchedObject;
@property (retain, nonatomic) PFUbiquityBaselineHeuristics *heuristics;

- (id)init;
- (void)dealloc;
- (_Bool)prefetchManagedObjectsInContext:(id)arg1 error:(id *)arg2;
- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;
- (void)setActingPeer:(id)arg1;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;

@end
