/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUHomeKitManager, NSData, NSString, NSXPCListener, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject

{
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    unsigned long long _stateHandle;
    struct NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    _Bool _testMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) _Bool testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPairingDaemon;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)reset;
- (void)activate;
- (id)detailedDescription;
- (void)_connectionInvalidated:(id)arg1;
- (void)_rpIdentityUpdate;
- (id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (int)deleteIdentityWithOptions:(unsigned long long)arg1;
- (int)_deleteIdentityWithOptions:(unsigned long long)arg1;
- (int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2;
- (id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (void)_removeDups:(id)arg1;
- (id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;

@end
