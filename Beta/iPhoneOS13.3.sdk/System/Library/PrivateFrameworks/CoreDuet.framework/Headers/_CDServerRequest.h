/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

#import <CoreDuet/Swift-Protocol.h>

@class NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSOperationQueue, NSString, NSURLSession;

@interface _CDServerRequest : NSObject <Swift>

{
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_sessionQueue;
    NSURLSession *_session;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_httpResponse;
    NSMutableData *_responseData;
}

@property (copy) CDUnknownBlockType responseHandler;
@property (retain) NSOperationQueue *sessionQueue;
@property (retain) NSURLSession *session;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSHTTPURLResponse *httpResponse;
@property (retain) NSMutableData *responseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)addHTTPIfModifiedSinceToHeaders:(id)arg1 date:(id)arg2;
+ (id)getHTTPModifiedSinceFromHeaders:(id)arg1;

- (id)init;
- (id)startDataTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6;
- (id)_newDefaultSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)startDownloadTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
