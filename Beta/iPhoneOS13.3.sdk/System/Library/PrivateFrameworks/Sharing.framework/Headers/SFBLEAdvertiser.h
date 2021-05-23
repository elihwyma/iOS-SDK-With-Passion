/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CURetrier, NSArray, NSData, NSDictionary, NSString, WPNearby;

@protocol OS_dispatch_queue;

@interface SFBLEAdvertiser : NSObject

{
    _Bool _activateCalled;
    long long _advertiseState;
    _Bool _invalidateCalled;
    NSData *_payloadDataCurrent;
    NSData *_payloadDataPrevious;
    NSDictionary *_payloadFields;
    NSString *_payloadIdentifier;
    long long _payloadType;
    CURetrier *_startRetrier;
    WPNearby *_wpNearby;
    long long _wpNearbyType;
    struct LogCategory *_ucat;
    long long _advertiseRate;
    CDUnknownBlockType _advertiseStateChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_lePipeDevices;
}

@property (copy, nonatomic) NSArray *lePipeDevices;
@property (nonatomic) long long advertiseRate;
@property (copy, nonatomic) CDUnknownBlockType advertiseStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithType:(long long)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPayloadData:(id)arg1;
- (void)_restartIfNeeded:(_Bool)arg1;
- (int)_preparePayload:(_Bool)arg1;
- (id)_preparePayloadNearbyAction:(int *)arg1;
- (id)_preparePayloadNearbyInfo:(int *)arg1;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didStopAdvertisingType:(long long)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;
- (void)setPayloadFields:(id)arg1;

@end
