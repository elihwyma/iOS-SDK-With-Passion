/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class CKServerChangeToken;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation

{
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneWithIDWasPurgedBlock;
    CDUnknownBlockType _changeTokenUpdatedBlock;
    CDUnknownBlockType _fetchDatabaseChangesCompletionBlock;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
}

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) _Bool fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) CDUnknownBlockType changeTokenUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchDatabaseChangesCompletionBlock;

- (id)init;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;

@end
