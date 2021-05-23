/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordAccessOperation : CKDatabaseOperation

{
    CDUnknownBlockType _recordAccessGrantedBlock;
    CDUnknownBlockType _recordAccessRevokedBlock;
    CDUnknownBlockType _recordAccessCompletionBlock;
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
    NSMutableDictionary *_recordErrors;
    NSMutableArray *_grantedRecordIDs;
    NSMutableArray *_revokedRecordIDs;
}

@property (retain, nonatomic) NSArray *recordIDsToGrant;
@property (retain, nonatomic) NSArray *recordIDsToRevoke;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableArray *grantedRecordIDs;
@property (retain, nonatomic) NSMutableArray *revokedRecordIDs;
@property (copy, nonatomic) CDUnknownBlockType recordAccessGrantedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordAccessRevokedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordAccessCompletionBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2;

@end
