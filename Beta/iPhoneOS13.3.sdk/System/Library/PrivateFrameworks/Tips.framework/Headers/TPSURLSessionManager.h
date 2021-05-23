/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

#import <Tips/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue, TPSURLSessionDelegate, TPSURLSessionManagerDelegate;

@interface TPSURLSessionManager : NSObject <Swift>

{
    struct TPSURLSessionDelegateResponds _defaultSessionDelegateResponds;
    NSObject<OS_dispatch_queue> *_sessionTaskQueue;
    _Bool _respondsToDidReceiveChallenge;
    _Bool _coalesceRequests;
    id <TPSURLSessionManagerDelegate> _delegate;
    id <TPSURLSessionDelegate> _defaultSessionDelegate;
    NSMutableDictionary *_coalesceTaskURLMap;
    NSMutableDictionary *_uncoalesceTaskMap;
    NSURLSession *_URLSession;
}

@property (nonatomic) _Bool respondsToDidReceiveChallenge;
@property (nonatomic) _Bool coalesceRequests;
@property (retain, nonatomic) NSMutableDictionary *coalesceTaskURLMap;
@property (retain, nonatomic) NSMutableDictionary *uncoalesceTaskMap;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (weak, nonatomic) id <TPSURLSessionManagerDelegate> delegate;
@property (weak, nonatomic) id <TPSURLSessionDelegate> defaultSessionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeTaskFromMap:(id)arg1;
- (id)sessionTaskForTask:(id)arg1;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resumeSessionItem:(id)arg1;
- (void)cancelSessionItem:(id)arg1;

@end
