/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreSaveSnapshot : NSObject

{
    NSMutableArray *_entityNames;
    NSMutableArray *_peerIDs;
    NSMutableArray *_globalObjectIDs;
    NSMutableArray *_primaryKeys;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_insertedObjects;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_peerStates;
    NSNumber *_transactionNumber;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
    PFUbiquityKnowledgeVector *_storeKV;
    PFUbiquityGlobalObjectIDCache *_gidCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSArray *entityNames;
@property (nonatomic, readonly) NSArray *peerIDs;
@property (nonatomic, readonly) NSArray *globalObjectIDs;
@property (nonatomic, readonly) NSArray *primaryKeys;
@property (nonatomic, readonly) NSDictionary *insertedObjects;
@property (nonatomic, readonly) NSDictionary *updatedObjects;
@property (nonatomic, readonly) NSDictionary *deletedObjects;
@property (nonatomic, readonly) NSDictionary *peerStates;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *exportingPeerID;
@property (retain, nonatomic) NSString *localPeerID;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *storeKV;
@property (nonatomic, readonly) NSDictionary *globalObjectIDToPermanentManagedObjectID;
@property (nonatomic, readonly) NSDictionary *managedObjectIDToGlobalObjectID;
@property (nonatomic, readonly) NSDictionary *entityNameToIndex;
@property (nonatomic, readonly) NSDictionary *peerIDToIndex;
@property (nonatomic, readonly) NSDictionary *primaryKeyToIndex;
@property (nonatomic, readonly) NSDictionary *globalObjectIDToIndex;
@property (retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalObjectIDCache;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setDeletedObjects:(id)arg1;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (void)_setFilesDeletedInTransaction:(id)arg1;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (void)generatePeerStates;
- (void)resetFromOptimisticLockingException;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id *)arg4;
- (id)filesInsertedInTransaction;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)initWithExportingPeerID:(id)arg1;
- (id)initForExport:(id)arg1;
- (id)checkIndecies:(id)arg1;
- (id)noSyncCheckIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id *)arg3;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)transactionNumberFromPeerStates:(id)arg1;
- (id)filesDeletedInTransaction;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5;
- (void)setInsertedObjects:(id)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)prepareForGlobalIDReplacement;
- (void)replaceGlobalObjectID:(id)arg1 withGlobalObjectID:(id)arg2;
- (void)finishGlobalIDReplacement;

@end
