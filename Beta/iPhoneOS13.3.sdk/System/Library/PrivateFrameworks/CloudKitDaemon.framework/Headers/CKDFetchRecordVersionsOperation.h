/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDDecryptRecordsOperation, NSArray, NSObject, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation

{
    CKDDecryptRecordsOperation *_decryptOperation;
    _Bool _isDeleted;
    _Bool _shouldFetchAssetContent;
    CDUnknownBlockType _recordVersionFetchedBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSObject<OS_dispatch_group> *_fetchVersionsGroup;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (nonatomic) _Bool isDeleted;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchVersionsGroup;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (copy, nonatomic) CDUnknownBlockType recordVersionFetchedBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (_Bool)hasDecryptOperation;
- (void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(_Bool)arg2 versions:(id)arg3 responseCode:(id)arg4;

@end
