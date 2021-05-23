/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUPairingDaemon, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUPairingXPCConnection : NSObject

{
    CUPairingDaemon *_daemon;
    _Bool _pmEntitledDeleteIdentity;
    _Bool _pmEntitledHomeKit;
    _Bool _pmEntitledRead;
    _Bool _pmEntitledRemoveAdmin;
    _Bool _pmEntitledRemovePeer;
    _Bool _pmEntitledWrite;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _monitoring;
    NSXPCConnection *_xpcCnx;
}

- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectionInvalidated;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;

@end
