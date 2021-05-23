/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _recordArchivedBlock;
    NSArray *_recordIDs;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) CDUnknownBlockType recordArchivedBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;

@end
