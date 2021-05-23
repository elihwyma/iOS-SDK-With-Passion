/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFDiagnostics : NSObject

{
    _Bool _btUser;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)bluetoothUserInteraction;
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;
- (void)_logControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_show:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockTestClientWithDevice:(id)arg1;
- (void)unlockTestServer;

@end
