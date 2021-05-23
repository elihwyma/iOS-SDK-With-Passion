/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation

{
    CDUnknownBlockType _assetPublishedBlock;
    CDUnknownBlockType _publishAssetCompletionBlock;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSArray *_recordIDs;
    NSMutableDictionary *_perItemErrorsByRecordID;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID;
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (copy, nonatomic) CDUnknownBlockType assetPublishedBlock;
@property (copy, nonatomic) CDUnknownBlockType publishAssetCompletionBlock;

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
