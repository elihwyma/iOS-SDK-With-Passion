/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSError, NSString, NSURLRequest, NSURLResponse, WebCoreNSURLSession;

__attribute__((visibility("hidden")))
@interface WebCoreNSURLSessionDataTask : NSObject

{
    WebCoreNSURLSession *_session;
    struct RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource>> _resource;
    struct RetainPtr<NSURLResponse> _response;
    unsigned long long _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _state;
    NSError *_error;
    NSString *_taskDescription;
    float _priority;
}

@property WebCoreNSURLSession *session;
@property unsigned long long taskIdentifier;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLRequest *currentRequest;
@property (copy, readonly) NSURLResponse *response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property long long state;
@property (copy) NSError *error;
@property (copy) NSString *taskDescription;
@property float priority;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id).cxx_construct;
- (id)_timingData;
- (void)_cancel;
- (void)_finish;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URL:(id)arg3;
- (void)resource:(struct PlatformMediaResource *)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
- (void)resource:(struct PlatformMediaResource *)arg1 receivedResponse:(const struct ResourceResponse *)arg2 completionHandler:(CompletionHandler_071c3afe *)arg3;
- (_Bool)resource:(struct PlatformMediaResource *)arg1 shouldCacheResponse:(const struct ResourceResponse *)arg2;
- (void)resource:(struct PlatformMediaResource *)arg1 receivedData:(const char *)arg2 length:(int)arg3;
- (void)resource:(struct PlatformMediaResource *)arg1 receivedRedirect:(const struct ResourceResponse *)arg2 request:(struct ResourceRequest *)arg3 completionHandler:(CompletionHandler_7162061b *)arg4;
- (void)resource:(struct PlatformMediaResource *)arg1 accessControlCheckFailedWithError:(const struct ResourceError *)arg2;
- (void)resource:(struct PlatformMediaResource *)arg1 loadFailedWithError:(const struct ResourceError *)arg2;
- (void)resourceFinished:(struct PlatformMediaResource *)arg1;
- (void)_resource:(struct PlatformMediaResource *)arg1 loadFinishedWithError:(id)arg2;
- (void)_restart;

@end
