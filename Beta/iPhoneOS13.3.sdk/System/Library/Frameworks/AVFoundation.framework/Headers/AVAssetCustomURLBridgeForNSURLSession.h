/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLSession : NSObject

{
    NSMutableDictionary *_taskToRequest;
    NSURLSession *_session;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (void)_registerRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3;
- (void)_unregisterRequestForDataTask:(id)arg1;
- (id)_lookupRequestForDataTask:(id)arg1;
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(_Bool *)arg3;
- (int)_cancelRequestID:(unsigned long long)arg1;

@end
