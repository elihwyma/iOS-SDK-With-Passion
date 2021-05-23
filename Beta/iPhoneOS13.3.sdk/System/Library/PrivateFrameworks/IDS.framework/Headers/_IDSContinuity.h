/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class CUTWeakReference, NSString;

@protocol OS_dispatch_queue;

@interface _IDSContinuity : NSObject

{
    id _delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;
- (void)stopScanningForType:(long long)arg1;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidUpdateStateToState:(long long)arg1;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3;
- (void)continuityDidStopTrackingPeer:(id)arg1;
- (void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;

@end
