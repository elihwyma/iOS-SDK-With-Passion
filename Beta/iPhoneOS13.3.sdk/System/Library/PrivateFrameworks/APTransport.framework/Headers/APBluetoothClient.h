/*
 Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, WPAirPlaySolo;

@protocol APBluetoothClientDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface APBluetoothClient : NSObject

{
    id <APBluetoothClientDelegate> _delegate;
    _Bool _isFirstCycle;
    _Bool _isSourcePresenceAdvertising;
    _Bool _isStartAdvertisingPending;
    _Bool _isStopAdvertisingPending;
    NSMutableDictionary *_nearbyDevices;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_sourcePresenceAdvertisingData;
    NSObject<OS_dispatch_source> *_sourcePresenceAdvertisingTimer;
    NSObject<OS_dispatch_source> *_sourcePresenceWaitingTimer;
    WPAirPlaySolo *_wpAirPlaySolo;
}

@property (nonatomic) _Bool isFirstCycle;
@property (nonatomic) _Bool isSourcePresenceAdvertising;
@property (nonatomic) _Bool isStartAdvertisingPending;
@property (nonatomic) _Bool isStopAdvertisingPending;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevices;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSDictionary *sourcePresenceAdvertisingData;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceAdvertisingTimer;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceWaitingTimer;
@property (retain, nonatomic) WPAirPlaySolo *wpAirPlaySolo;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySoloAdvertisingPending:(id)arg1;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
- (void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)startTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)stopTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)stopSourcePresenceWaitingCycle;
- (void)startSourcePresenceAdvertisingCycle;
- (void)stopSourcePresenceAdvertisingCycle;
- (void)startSourcePresenceWaitingCycle;
- (void)startSourcePresenceConnectionlessAdvertising;
- (void)stopSourcePresenceConnectionlessAdvertising;

@end
