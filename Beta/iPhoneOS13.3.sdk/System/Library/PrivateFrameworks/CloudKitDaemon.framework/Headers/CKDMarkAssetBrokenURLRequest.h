/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKUploadRequestMetadata;

__attribute__((visibility("hidden")))
@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest

{
    _Bool _writeRepairRecord;
    CDUnknownBlockType _assetBrokenBlock;
    CKUploadRequestMetadata *_metadata;
}

@property (copy, nonatomic) CKUploadRequestMetadata *metadata;
@property (nonatomic) _Bool writeRepairRecord;
@property (copy, nonatomic) CDUnknownBlockType assetBrokenBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithAssetOrPackageMetadata:(id)arg1 writeRepairRecord:(_Bool)arg2;

@end
