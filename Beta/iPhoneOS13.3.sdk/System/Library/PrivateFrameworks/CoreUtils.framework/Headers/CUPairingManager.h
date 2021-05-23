/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface CUPairingManager : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _monitoring;
    unsigned long long _monitorOptions;
    NSXPCConnection *_xpcCnx;
    _Bool _targetUserSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _identityCreatedHandler;
    CDUnknownBlockType _identityDeletedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _pairedPeerAddedHandler;
    CDUnknownBlockType _pairedPeerRemovedHandler;
    CDUnknownBlockType _pairedPeerChangedHandler;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType identityCreatedHandler;
@property (copy, nonatomic) CDUnknownBlockType identityDeletedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType pairedPeerAddedHandler;
@property (copy, nonatomic) CDUnknownBlockType pairedPeerRemovedHandler;
@property (copy, nonatomic) CDUnknownBlockType pairedPeerChangedHandler;
@property (nonatomic) _Bool targetUserSession;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (int)_ensureXPCStarted;
- (void)pairedPeerRemoved:(id)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerAdded:(id)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerChanged:(id)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityCreated:(id)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (void)_getPairingIdentityWithOptions:(unsigned long long)arg1 tryCount:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startMonitoringWithOptions:(unsigned long long)arg1;

@end
