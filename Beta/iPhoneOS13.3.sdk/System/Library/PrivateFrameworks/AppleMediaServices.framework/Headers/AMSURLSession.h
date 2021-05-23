/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSURLDelegateProxy, AMSURLSecurityPolicy, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol AMSRequestEncoding, AMSResponseDecoding, AMSURLHandling, NSURLSessionDelegate><AMSURLProtocolDelegate;

@interface AMSURLSession : NSObject <Swift>

{
    _Bool _invalidated;
    id <AMSURLHandling> _protocolHandler;
    NSURLSessionConfiguration *_configuration;
    NSOperationQueue *_delegateQueue;
    id <AMSRequestEncoding> _requestEncoder;
    id <AMSResponseDecoding> _responseDecoder;
    NSURLSession *_session;
    AMSURLDelegateProxy *_delegateProxy;
    AMSURLSecurityPolicy *_securityPolicy;
}

@property (retain, nonatomic) AMSURLDelegateProxy *delegateProxy;
@property (nonatomic) _Bool invalidated;
@property (retain, nonatomic) AMSURLSecurityPolicy *securityPolicy;
@property (nonatomic, readonly) NSURLSessionConfiguration *configuration;
@property (weak, nonatomic) id <NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;
@property (nonatomic, readonly) NSOperationQueue *delegateQueue;
@property (retain, nonatomic) id <AMSURLHandling> protocolHandler;
@property (retain, nonatomic) id <AMSRequestEncoding> requestEncoder;
@property (retain, nonatomic) id <AMSResponseDecoding> responseDecoder;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultSession;
+ (id)sharedAuthKitSession;

- (id)init;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)invalidateAndCancel;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)finishTasksAndInvalidate;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)dataTaskPromiseWithRequest:(id)arg1;
- (id)_handleURLAction:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3;
- (id)_prepareRequest:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retryTask:(id)arg1 action:(id)arg2 error:(id *)arg3;

@end
