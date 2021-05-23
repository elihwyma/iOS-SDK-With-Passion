/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoaderInternal, NSOperationQueue, NSString, NSURLSession;

@protocol AVAssetResourceLoaderDelegate, NSURLSessionDataDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject

{
    AVAssetResourceLoaderInternal *_resourceLoader;
}

@property (nonatomic) _Bool preloadsEligibleContentKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NSURLSessionDataDelegate> URLSessionDataDelegate;
@property (nonatomic, readonly) NSOperationQueue *URLSessionDataDelegateQueue;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (weak, nonatomic, readonly) id <AVAssetResourceLoaderDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)asset;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)stateQueue;
- (void)cancelLoading;
- (id)URLRequestHelper;
- (id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2 remoteCustomURLHandlerContext:(id)arg3;
- (void)_setContentKeySessionCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg1;
- (id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2;
- (void)_setDelegateOnStateQueue:(id)arg1;
- (id)_getDelegateOnStateQueue;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(CDUnknownBlockType)arg2;
- (void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(_Bool)arg3 key:(id)arg4 fallbackHandler:(CDUnknownBlockType)arg5;
- (void)_cancelRequestWithKey:(id)arg1 fallbackHandler:(CDUnknownBlockType)arg2;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 challenge:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)_issueLoadingRequestWithKey:(id)arg1 loadingRequest:(id)arg2 isRenewalRequest:(_Bool)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
- (struct OpaqueFigCustomURLHandler *)_authHandler;
- (struct OpaqueFigCustomURLHandler *)_customURLHandler;
- (struct OpaqueFigCustomURLLoader *)_customURLLoader;
- (void)_cancelRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2;
- (void)_poseAuthenticationChallengeWithRequestInfo:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 challenge:(id)arg3;
- (void)_noteFinishingOfRequest:(id)arg1;
- (void)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 willHandleRequest:(_Bool *)arg3;
- (struct OpaqueFigCustomURLHandler *)_contentKeySessionCustomURLHandler;
- (void)_sendAuthResponseForChallenge:(id)arg1 disposition:(long long)arg2 credential:(id)arg3 error:(id)arg4;
- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;
- (id)cachedContentInformationForURL:(id)arg1;
- (id)remoteCustomURLHandlerContextForPID:(int)arg1;

@end
