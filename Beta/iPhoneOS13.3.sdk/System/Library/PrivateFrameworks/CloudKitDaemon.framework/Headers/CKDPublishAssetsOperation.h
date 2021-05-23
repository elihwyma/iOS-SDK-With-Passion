/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;

__attribute__((visibility("hidden")))
@interface CKDPublishAssetsOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _assetPublishedBlock;
    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSOperation *_fetchRecordsOperation;
    NSMutableDictionary *_fetchedRecordsByID;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain) NSOperation *fetchRecordsOperation;
@property (retain, nonatomic) NSMutableDictionary *fetchedRecordsByID;
@property (copy, nonatomic) CDUnknownBlockType assetPublishedBlock;

- (void)cancel;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchRecords;
- (void)_fetchPCSForRecords;
- (void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(struct _OpaquePCSShareProtection *)arg3 error:(id)arg4;

@end
