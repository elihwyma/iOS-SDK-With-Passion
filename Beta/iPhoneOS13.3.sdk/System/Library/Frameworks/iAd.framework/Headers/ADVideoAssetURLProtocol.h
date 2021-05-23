/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSURLProtocol.h>

#import <iAd/Swift-Protocol.h>

@class ADNSURLSessionDemultiplexer, NSArray, NSString, NSThread, NSURLSessionDataTask;

@interface ADVideoAssetURLProtocol : NSURLProtocol <Swift>

{
    NSThread *_clientThread;
    NSArray *_modes;
    double _startTime;
    NSURLSessionDataTask *_task;
    ADNSURLSessionDemultiplexer *_sessionDemux;
}

@property (retain) NSThread *clientThread;
@property (copy) NSArray *modes;
@property double startTime;
@property (retain) NSURLSessionDataTask *task;
@property (retain) ADNSURLSessionDemultiplexer *sessionDemux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)unregister;
+ (void)registerProtocol;

- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopLoading;
- (void)startLoading;

@end
