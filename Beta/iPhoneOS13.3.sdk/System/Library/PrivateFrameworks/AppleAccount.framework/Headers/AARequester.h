/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSOperation.h>

@class AARequest, AAResponse, AKAppleIDSession, NSHTTPURLResponse, NSMutableData, NSObject, NSString, NSURLConnection;

@protocol OS_dispatch_queue;

@interface AARequester : NSOperation

{
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;
    CDUnknownBlockType _handler;
    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    _Bool _isExecuting;
    _Bool _isFinished;
    _Bool _canceled;
    AKAppleIDSession *_appleIDSession;
    _Bool _shouldRetry;
    _Bool _isCanceled;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property (nonatomic, getter=isExecuting) _Bool isExecuting;
@property (getter=isFinished) _Bool finished;
@property (getter=isCanceled) _Bool canceled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)start;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_callHandler;
- (void)_kickOffRequest:(id)arg1;
- (void)__unsafe_callHandler;
- (id)initWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
