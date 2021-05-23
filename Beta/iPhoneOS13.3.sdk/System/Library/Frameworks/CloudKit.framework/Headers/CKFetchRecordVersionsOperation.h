/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSString;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation

{
    _Bool _isDeleted;
    _Bool _shouldFetchAssetContent;
    CDUnknownBlockType _fetchRecordVersionsProgressBlock;
    CDUnknownBlockType _fetchRecordVersionsCompletionBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordErrors;
}

@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (nonatomic) _Bool isDeleted;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) NSString *minimumVersionETag;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordVersionsProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordVersionsCompletionBlock;

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
