/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSURLSession;

@protocol OS_dispatch_queue;

@interface RMAssetResolver : NSObject

{
    NSURLSession *_URLSession;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSURLSession *URLSession;

- (id)init;
- (id)userAgent;
- (id)initWithURLSessionConfiguration:(id)arg1;
- (id)initWithURLSession:(id)arg1;
- (id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2;
- (_Bool)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id *)arg5;
- (id)dataTaskWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
