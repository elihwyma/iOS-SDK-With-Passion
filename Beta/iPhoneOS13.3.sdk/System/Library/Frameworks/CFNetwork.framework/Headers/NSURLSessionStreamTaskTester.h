/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSError, NSInputStream, NSOutputStream, NSString, NSURLSession, NSURLSessionStreamTask;

@protocol OS_dispatch_queue;

@interface NSURLSessionStreamTaskTester : NSObject

{
    struct StreamTaskTestConfig _testConfig;
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_session;
    NSURLSessionStreamTask *_streamTask;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    CDUnknownBlockType _completion;
    NSError *_inputStreamError;
    NSError *_outputStreamError;
    long long _bytesRead;
    long long _bytesWritten;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id).cxx_construct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (id)initWithTestConfig:(struct StreamTaskTestConfig)arg1;
- (void)resumeWithTestBlock:(CDUnknownBlockType)arg1;
- (void)cleanupInputStream;
- (void)cleanupOutputStream;

@end
