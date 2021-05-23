/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSessionTask.h>

@class CFNetworkTimer, NSData, NSMutableArray, NSObject, __NSCFURLLocalStreamTaskWorkRead, __NSCFURLLocalStreamTaskWorkWrite;

@protocol OS_dispatch_queue;

@interface __NSCFTCPIOStreamTask : __NSCFURLSessionTask

{
    CDUnknownBlockType _disavow;
    struct shared_ptr<TCPIO_EstablishBase> _establish;
    shared_ptr_ced42cc3 _ios;
    unsigned char _captureStreamsUponCompletion;
    unsigned char _secure;
    NSData *__initialDataPayload;
    struct shared_ptr<HTTPProtocol> _httpProtocol;
    NSMutableArray *_pendingWork;
    NSMutableArray *_completedSuspendedWork;
    _Bool _doingWorkOnThisQueue;
    int _connectionState;
    _Bool _goneSecure;
    _Bool _streamsCaptured;
    CDStruct_59046461 _readError;
    _Bool _readInProgress;
    _Bool _readClosed;
    CDStruct_59046461 _writeError;
    _Bool _writeEOF;
    _Bool _writeInProgress;
    _Bool _writeClosed;
    _Bool _receivedServerTrustChallenge;
    _Bool _receivedEof;
    CFNetworkTimer *_writeTimer;
    CFNetworkTimer *_readTimer;
    __NSCFURLLocalStreamTaskWorkWrite *_currentWriteTask;
    __NSCFURLLocalStreamTaskWorkRead *_currentReadTask;
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;
}

@property (copy) NSData *_initialDataPayload;
@property (retain, nonatomic) __NSCFURLLocalStreamTaskWorkWrite *currentWriteTask;
@property (retain, nonatomic) __NSCFURLLocalStreamTaskWorkRead *currentReadTask;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id).cxx_construct;
- (id)workQueue;
- (void)_onqueue_checkForCompletion;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_resume;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_task_onqueue_didFinish;
- (id)initWithTask:(id)arg1 connection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (shared_ptr_ced42cc3)ios;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)captureStreams;
- (void)closeWrite;
- (void)closeRead;
- (void)copyStreamProperty:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startSecureConnection;
- (void)stopSecureConnection;
- (void)_onqueue_stopSecureConnection;
- (void)_onqueue_startSecureConnection;
- (void)_onqueue_closeRead;
- (void)_onqueue_closeWrite;
- (void)_onqueue_captureStreams;
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2 shouldWaitForTls:(_Bool)arg3;
- (_Bool)shouldDoWorkConsideringTlsState;
- (void)_onqueue_ioTick;
- (void)_onqueue_timeoutOccured;
- (void)_onqueue_callbackCompletedWork;
- (void)_onqueue_processWriteWork:(id)arg1;
- (void)_onqueue_processReadWork:(id)arg1;
- (id)_onqueue_errorOrCancelError;
- (_Bool)_onqueue_usingProxy;
- (void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_setTransportConnection:(shared_ptr_8da4e70b)arg1;
- (void)_onqueue_tlsCompletion;
- (void)_onqueue_tlsDisabled;
- (void)_onqueue_cleanUpConnectionEstablishmentState;
- (void)_onqueue_connectionEstablishedWithError:(CDStruct_59046461)arg1 callbackReferent:(id)arg2;

@end
