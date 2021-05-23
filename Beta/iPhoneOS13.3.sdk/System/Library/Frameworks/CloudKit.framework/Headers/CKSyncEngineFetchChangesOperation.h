/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSOperation.h>

@class CKDatabase, CKOperationGroup, CKServerChangeToken, NSError, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface CKSyncEngineFetchChangesOperation : NSOperation

{
    _Bool _isExecuting;
    _Bool _isFinished;
    CKDatabase *_database;
    CKServerChangeToken *_previousDatabaseServerChangeToken;
    CKOperationGroup *_group;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneWithIDWasPurgedBlock;
    CDUnknownBlockType _databaseChangeTokenUpdatedBlock;
    CDUnknownBlockType _fetchDatabaseChangesCompletionBlock;
    CDUnknownBlockType _recordZoneChangesConfigurationBlock;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _willEnqueueOperationBlock;
    CDUnknownBlockType _fetchChangesCompletionBlock;
    NSError *_error;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;
@property (nonatomic, readonly) CKDatabase *database;
@property (copy, nonatomic) CKServerChangeToken *previousDatabaseServerChangeToken;
@property (retain, nonatomic) CKOperationGroup *group;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) CDUnknownBlockType databaseChangeTokenUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchDatabaseChangesCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangesConfigurationBlock;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType willEnqueueOperationBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchChangesCompletionBlock;

- (id)init;
- (void)cancel;
- (void)start;
- (_Bool)isAsynchronous;
- (void)finishWithError:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)cancelledError;

@end
