/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject

{
    NSMutableDictionary *_requestIDToDownload;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (void)_cancelRequestID:(unsigned long long)arg1;
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2;
- (void)_didFinish:(id)arg1 error:(struct __CFError *)arg2;
- (_Bool)_willSendRequest:(id)arg1 request:(struct _CFURLRequest *)arg2 redirectionResponse:(struct _CFURLResponse *)arg3;
- (void)_didReceiveResponse:(id)arg1 response:(struct _CFURLResponse *)arg2;
- (void)_didReceiveData:(id)arg1 data:(struct __CFData *)arg2;

@end
