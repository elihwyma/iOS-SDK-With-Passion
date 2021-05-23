/*
 Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

#import <Foundation/NSObject.h>

@class C2RequestOptions, NSMutableURLRequest, NSString, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface C2WarmRequest : NSObject

{
    CDUnknownBlockType _callback;
    NSMutableURLRequest *_warmRequest;
    C2RequestOptions *_warmOptions;
    NSURLSessionTask *_warmTask;
}

@property (copy, nonatomic) CDUnknownBlockType callback;
@property (retain, nonatomic) NSMutableURLRequest *warmRequest;
@property (retain, nonatomic) C2RequestOptions *warmOptions;
@property (retain, nonatomic) NSURLSessionTask *warmTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)send;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (id)initWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
