/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBScalablePipe, CBScalablePipeManager, CUReadRequest, CUWriteRequest, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothScalablePipe : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    struct channel *_btChannel;
    _Bool _btEndpointRegistering;
    _Bool _btEndpointRegistered;
    int _btPeerHostState;
    _Bool _btPeerKVORegistered;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    struct channel_ring_desc *_btReadRing;
    char *_btReadLeftoverBuf;
    unsigned long long _btReadLeftoverMaxLen;
    char *_btReadLeftoverPtr;
    char *_btReadLeftoverEnd;
    struct channel_ring_desc *_btWriteRing;
    int _channelFD;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    _Bool _writeSuspended;
    int _peerHostState;
    int _priority;
    int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSUUID *_peerIdentifier;
    CDUnknownBlockType _peerHostStateChangedHandler;
    CDUnknownBlockType _stateChangedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSUUID *peerIdentifier;
@property (nonatomic, readonly) int peerHostState;
@property (copy, nonatomic) CDUnknownBlockType peerHostStateChangedHandler;
@property (nonatomic) int priority;
@property (nonatomic, readonly) int state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureStarted;
- (void)readWithRequest:(id)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_abortReadsWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_processWrites;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)_ensureStopped:(id)arg1;
- (void)_setupPipe;
- (void)_tearDownPipe;
- (void)_handleBTPeerHostStateChanged;
- (void)_processReads;
- (int)_readBytes:(char *)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long *)arg4;
- (int)_writeIOArray:(struct iovec **)arg1 ioCount:(int *)arg2;
- (unsigned long long)_writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
