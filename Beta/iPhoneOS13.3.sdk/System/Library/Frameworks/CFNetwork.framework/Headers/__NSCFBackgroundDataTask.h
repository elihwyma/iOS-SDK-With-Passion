/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class NSFileHandle, NSInputStream, NSObject, NSString;

@protocol OS_dispatch_io, OS_dispatch_queue, OS_dispatch_semaphore;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask

{
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned long long _bytesRead;
    NSObject<OS_dispatch_semaphore> *_streamOpenedSema;
    _Bool _finishedOpen;
    _Bool _openedStreamDuringNeedNewBodyStream;
    _Bool _streamBased;
    CDUnknownBlockType _streamWriteCompletion;
}

@property (readonly, getter=isStreamBased) _Bool streamBased;
@property (copy) CDUnknownBlockType streamWriteCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_needNewBodyStream:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willBeRetried;
- (void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_openStream;
- (void)_onqueue_captureStream:(id)arg1;
- (void)_onqueue_invokeStreamWriteCompletion;
- (void)readFromStream;
- (void)_onqueue_finishStream:(_Bool)arg1;

@end
