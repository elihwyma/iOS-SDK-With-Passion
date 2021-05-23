/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation

{
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    CDUnknownBlockType _shareParticipantKeyCompletionBlock;
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSArray *_shareIDs;
    NSMutableDictionary *_errorsByShareID;
}

@property (retain, nonatomic) NSArray *shareIDs;
@property (retain, nonatomic) NSMutableDictionary *errorsByShareID;
@property (retain, nonatomic) NSDictionary *baseTokensByShareID;
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType shareParticipantKeyCompletionBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithShareIDs:(id)arg1;

@end
