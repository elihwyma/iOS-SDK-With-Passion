/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyWebSharingOperation : CKDatabaseOperation

{
    CDUnknownBlockType _recordSharedBlock;
    CDUnknownBlockType _recordUnsharedBlock;
    CDUnknownBlockType _webShareRecordsCompletionBlock;
    NSArray *_recordIDsToShareReadWrite;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSMutableDictionary *_recordErrors;
    NSMutableArray *_sharedRecordIDs;
    NSMutableArray *_unsharedRecordIDs;
}

@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableArray *sharedRecordIDs;
@property (retain, nonatomic) NSMutableArray *unsharedRecordIDs;
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite;
@property (copy, nonatomic) CDUnknownBlockType recordSharedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordUnsharedBlock;
@property (copy, nonatomic) CDUnknownBlockType webShareRecordsCompletionBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2;

@end
