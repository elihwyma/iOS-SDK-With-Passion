/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSOperation.h>

@class CKDatabase, CKOperationGroup, NSError, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface CKSyncEngineModifyRecordBatchesOperation : NSOperation

{
    _Bool _isExecuting;
    _Bool _isFinished;
    CKDatabase *_database;
    CKOperationGroup *_group;
    CDUnknownBlockType _populateNextBatchBlock;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordSaveCompletionBlock;
    CDUnknownBlockType _batchCompletionBlock;
    CDUnknownBlockType _modifyRecordBatchesCompletionBlock;
    CDUnknownBlockType _willEnqueueOperationBlock;
    NSError *_error;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;
@property (nonatomic, readonly) CKDatabase *database;
@property (retain, nonatomic) CKOperationGroup *group;
@property (copy, nonatomic) CDUnknownBlockType populateNextBatchBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordSaveCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType batchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType modifyRecordBatchesCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType willEnqueueOperationBlock;

- (id)init;
- (void)cancel;
- (void)start;
- (_Bool)isAsynchronous;
- (void)finishWithError:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)cancelledError;
- (void)addNextModifyOperationOrFinishIfNoRemainingWork;
- (id)operationToModifyBatch:(id)arg1;

@end
