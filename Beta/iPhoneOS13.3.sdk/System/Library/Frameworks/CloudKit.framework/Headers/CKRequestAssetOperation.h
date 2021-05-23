/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSOperation.h>

@class CKUploadRequestMetadata;

__attribute__((visibility("hidden")))
@interface CKRequestAssetOperation : NSOperation

{
    long long _state;
    CKUploadRequestMetadata *_metadata;
    CDUnknownBlockType _assetRequestCompletionBlock;
    CDUnknownBlockType _requestCallback;
}

@property (retain, nonatomic) CKUploadRequestMetadata *metadata;
@property (copy, nonatomic) CDUnknownBlockType requestCallback;
@property long long state;
@property (copy, nonatomic) CDUnknownBlockType assetRequestCompletionBlock;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithAssetMetadata:(id)arg1 requestCallback:(CDUnknownBlockType)arg2;

@end
