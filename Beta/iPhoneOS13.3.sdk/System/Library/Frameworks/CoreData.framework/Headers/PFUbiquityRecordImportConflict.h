/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSManagedObject, NSMutableDictionary, NSNumber, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordImportConflict : NSObject

{
    NSString *_conflictingObjectGlobalIDStr;
    NSManagedObject *_sourceObject;
    NSDictionary *_conflictingLogContent;
    PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    int _conflictingLogTransactionType;
    NSDate *_conflictLogDate;
    NSNumber *_conflictingLogTransactionNumber;
    NSArray *_transactionHistory;
    NSDictionary *_globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext *_importContext;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

@property (retain, nonatomic) NSString *conflictingObjectGlobalIDStr;
@property (retain, nonatomic) NSManagedObject *sourceObject;
@property (retain, nonatomic) NSDictionary *conflictingLogContent;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;
@property (nonatomic) int conflictingLogTransactionType;
@property (retain, nonatomic) NSDate *conflictLogDate;
@property (retain, nonatomic) NSNumber *conflictingLogTransactionNumber;
@property (retain, nonatomic) NSArray *transactionHistory;
@property (retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;
@property (retain, nonatomic) PFUbiquityImportContext *importContext;
@property (nonatomic, readonly) NSDictionary *relationshipToObjectIDsToCheck;

+ (void)initialize;
+ (int)resolvedTypeForConflictingLogType:(int)arg1 andLatestTransactionEntry:(id)arg2 skipObject:(_Bool *)arg3;
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg1 withExportingPeerID:(id)arg2 fromPeerSnapshotCollection:(id)arg3;
+ (id)createSnapshotFromManagedObject:(id)arg1 withSourceObject:(id)arg2;
+ (id)createTransactionLogForTransactionEntry:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)resolveConflict:(id *)arg1;
- (id)createSnapshotFromLogContent:(id)arg1 withTransactionLog:(id)arg2;
- (void)addObjectIDsForDiff:(id)arg1 forRelationship:(id)arg2;
- (void)addObjectID:(id)arg1 forRelationship:(id)arg2;
- (id)_newNormalizedSnapshot:(id)arg1 forObject:(id)arg2;
- (id)createSnapshotDictionaryFromLogEntry:(id)arg1 withError:(id *)arg2;
- (_Bool)resolveMergeConflictForLogContent:(id)arg1 previousSnapshot:(id)arg2 andAncestorSnapshot:(id)arg3 withOldVersion:(unsigned int)arg4 andNewVersion:(unsigned int)arg5 error:(id *)arg6;
- (id)createSnapshotFromBaselineForEntry:(id)arg1 error:(id *)arg2;
- (id)createSnapshotDictionaryForObjectWithEntry:(id)arg1 inTransactionLog:(id)arg2 withError:(id *)arg3;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4;

@end
