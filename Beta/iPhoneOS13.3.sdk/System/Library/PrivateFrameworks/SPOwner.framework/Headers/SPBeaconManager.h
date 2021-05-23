/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession, FMXPCTimer, NSString, SPBLEStateMonitor, SPMonitorsWrapper;

@protocol OS_dispatch_queue, OS_dispatch_source, SPBeaconManagerXPCProtocol;

@interface SPBeaconManager : NSObject

{
    _Bool _currentBeaconingState;
    _Bool _forceBeaconingOff;
    unsigned char _currentStatus;
    _Bool _initialStateChangeSent;
    CDUnknownBlockType _stateChangedBlock;
    CDUnknownBlockType _stateChangedBlockWithCompletion;
    CDUnknownBlockType _statusChangedBlock;
    CDUnknownBlockType _statusChangedBlockWithCompletion;
    CDUnknownBlockType _beaconingKeyChangedBlock;
    CDUnknownBlockType _beaconingKeyChangedBlockWithCompletion;
    CDUnknownBlockType _nearbyTokensChangedBlock;
    CDUnknownBlockType _nearbyTokensChangedBlockWithCompletion;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPBeaconManagerXPCProtocol> _proxy;
    id <SPBeaconManagerXPCProtocol> _userAgentProxy;
    NSObject<OS_dispatch_queue> *_queue;
    FMXPCTimer *_periodicActionXpcTimer;
    NSObject<OS_dispatch_source> *_periodicActionDispatchTimer;
    SPMonitorsWrapper *_monitorWrapper;
    SPBLEStateMonitor *_bleMonitor;
    long long _cachedLocalBeaconManagerState;
}

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id <SPBeaconManagerXPCProtocol> proxy;
@property (retain, nonatomic) id <SPBeaconManagerXPCProtocol> userAgentProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCTimer *periodicActionXpcTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicActionDispatchTimer;
@property (retain, nonatomic) SPMonitorsWrapper *monitorWrapper;
@property (retain, nonatomic) SPBLEStateMonitor *bleMonitor;
@property (nonatomic) _Bool currentBeaconingState;
@property (nonatomic) _Bool forceBeaconingOff;
@property (nonatomic) unsigned char currentStatus;
@property (nonatomic) long long cachedLocalBeaconManagerState;
@property (nonatomic) _Bool initialStateChangeSent;
@property (copy, nonatomic) CDUnknownBlockType stateChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType stateChangedBlockWithCompletion;
@property (copy, nonatomic) CDUnknownBlockType statusChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType statusChangedBlockWithCompletion;
@property (copy, nonatomic) CDUnknownBlockType beaconingKeyChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconingKeyChangedBlockWithCompletion;
@property (copy, nonatomic) CDUnknownBlockType nearbyTokensChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType nearbyTokensChangedBlockWithCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)afterFirstUnlock:(CDUnknownBlockType)arg1;
+ (id)scheduleDateInterval:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)start;
- (id)remoteInterface;
- (void)stateDidChange:(_Bool)arg1 powerState:(unsigned long long)arg2;
- (void)beaconForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unacceptedBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (void)bleMonitor:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)notificationBeaconForSubscriptionId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allBeaconsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beaconsChanged:(id)arg1;
- (void)beaconingStateChangedNotification:(id)arg1;
- (void)beaconingStateChanged:(long long)arg1;
- (void)checkInPeriodicActionXpcTimer;
- (void)periodicActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyStatusChange:(unsigned char)arg1;
- (void)notifyStateChange:(_Bool)arg1;
- (void)setPeriodicActionXpcTimerWithDateInterval:(id)arg1;
- (void)timerFired;
- (void)setPeriodicActionDispatchTimerWithInterval:(double)arg1;
- (void)notifyBeaconingKeysChangedBlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyNearbyTokensChangedBlockWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isBeaconing;

@end
