/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSessionConnection.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSArray, NSCachedURLResponse, NSString, NSURLRequest, NSURLSessionTask;

@interface __NSCFURLProxySessionConnection : __NSCFURLSessionConnection <Swift>

{
    NSURLSessionTask *_proxyTask;
    NSURLSessionTask *_cacheTask;
    _Bool _shouldCancelOnCacheTaskCompletion;
    _Bool _clientWantsCacheOnly;
    _Bool _completedLocalCacheLookup;
    _Bool _requestIsUncacheable;
    _Bool _handledNeedNewBodyStream;
    NSCachedURLResponse *_cachedResponseForConditionalRequest;
    NSURLRequest *_conditionalRequest;
    NSArray *_cachedResponseDataArray;
    NSString *_originalUploadFilePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)setPriorityHint:(float)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setIsDownload:(_Bool)arg1;
- (void)setExpectedProgressTarget:(unsigned long long)arg1;
- (id)clientErrorForError:(id)arg1;
- (void)_startLoad;
- (void)_performOriginLoad;
- (void)_deliverDidCompleteWithError:(id)arg1;

@end
