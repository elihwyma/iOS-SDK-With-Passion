/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKArchiveRecordsOperation : CKDatabaseOperation

{
    CDUnknownBlockType _recordArchivedBlock;
    CDUnknownBlockType _archiveRecordsCompletionBlock;
    NSArray *_recordIDs;
    NSMutableDictionary *_perItemErrors;
}

@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) CDUnknownBlockType recordArchivedBlock;
@property (copy, nonatomic) CDUnknownBlockType archiveRecordsCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;

@end
