/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString, NSURLSession, NSURLSessionDataTask;

@protocol OS_dispatch_semaphore;

@interface UnitTestBackgroundSessionTester : NSObject <Swift>

{
    NSURLSession *session;
    NSURLSessionDataTask *task;
    NSObject<OS_dispatch_semaphore> *sema;
    int timeout;
    struct BackgroundTaskServerTrustTestResult *result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 result:(struct BackgroundTaskServerTrustTestResult *)arg2;
- (void)startTaskWithURL:(const char *)arg1;

@end
