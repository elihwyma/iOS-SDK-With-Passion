/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquityImportOperation.h>

@class NSError, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSObject, NSPersistentStoreCoordinator, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector, PFUbiquitySwitchboardEntry, PFUbiquityTransactionLog;

@protocol _PFUbiquityRecordImportOperationDelegate;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation

{
    NSManagedObjectContext *_moc;
    NSPersistentStoreCoordinator *_psc;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquitySwitchboardEntry *_entry;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    PFUbiquityKnowledgeVector *_logScore;
    NSMutableDictionary *_resolvedConflicts;
    _Bool _lockedExistingCoord;
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;
    PFUbiquityImportContext *_importContext;
    _Bool _success;
    _Bool _transactionDidRollback;
    _Bool _wroteKV;
    NSError *_operationError;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

@property (readonly) NSManagedObjectContext *moc;
@property (readonly) NSPersistentStoreCoordinator *psc;
@property (nonatomic, readonly) PFUbiquityTransactionLog *transactionLog;
@property (nonatomic, readonly) NSMutableSet *insertedObjectIDs;
@property (nonatomic, readonly) NSMutableSet *updatedObjectIDs;
@property (nonatomic, readonly) NSMutableSet *deletedObjectIDs;
@property (nonatomic, readonly) NSMutableDictionary *resolvedConflicts;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *logScore;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
@property _Bool lockedExistingCoord;
@property (readonly) PFUbiquityKnowledgeVector *initialStoreKnowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *updatedStoreKnowledgeVector;
@property (retain, nonatomic) PFUbiquityImportContext *importContext;
@property (nonatomic, readonly) _Bool transactionDidRollBack;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *operationError;
@property (nonatomic, readonly) _Bool wroteKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)copy;
- (void)cancel;
- (void)main;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3;
- (id)retainedDelegate;
- (_Bool)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id *)arg4;
- (_Bool)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id *)arg3;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (void)notifyDelegateOfError:(id)arg1;
- (_Bool)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id *)arg6;

@end
