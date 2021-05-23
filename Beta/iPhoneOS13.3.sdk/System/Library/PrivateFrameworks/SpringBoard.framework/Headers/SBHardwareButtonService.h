/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSMutableIntegerMap, FBServiceClientAuthenticator, NSMutableArray, NSString, RBSProcessMonitor;

@interface SBHardwareButtonService : NSObject

{
    FBServiceClientAuthenticator *_serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientEventConsumerEntitlement;
    RBSProcessMonitor *_processMonitor;
    NSMutableArray *_observers;
    BSMutableIntegerMap *_eventMaskPerKind;
    BSMutableIntegerMap *_registrationsByButtonKind;
    BSMutableIntegerMap *_clientsByPID;
}

@property (retain, nonatomic) BSMutableIntegerMap *registrationsByButtonKind;
@property (retain, nonatomic) BSMutableIntegerMap *clientsByPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)addObserver:(id)arg1;
- (_Bool)consumeHeadsetPlayPauseSinglePressDownWithPriority:(long long)arg1 continuation:(out CDUnknownBlockType *)arg2;
- (_Bool)consumeRingerSwitchToggleStateOnWithPriority:(long long)arg1;
- (_Bool)consumeRingerSwitchToggleStateOffWithPriority:(long long)arg1;
- (_Bool)consumeLockButtonLongPressWithPriority:(long long)arg1;
- (_Bool)consumeLockButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)consumeLockButtonDoublePressUpWithPriority:(long long)arg1;
- (_Bool)hasConsumersForLockButtonDoublePressUp;
- (void)_reconfigureProcessMonitor;
- (void)_reconfigureProcessMonitorForPredicates:(id)arg1;
- (void)_process:(id)arg1 stateDidUpdate:(id)arg2;
- (_Bool)consumeHomeButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonLongPressWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonDoublePressDownWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonTriplePressUpWithPriority:(long long)arg1;
- (_Bool)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3;
- (_Bool)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3 continuation:(out CDUnknownBlockType *)arg4;
- (void)_updateEventMasksForButtonKind:(long long)arg1;
- (void)_performButtonRegistrationChangeAndNotifyObservers:(CDUnknownBlockType)arg1;
- (id)_mutableRegistrationsForButtonKind:(long long)arg1 createIfNecessary:(_Bool)arg2;
- (id)_registrationsForButtonKind:(long long)arg1;
- (void)_sendXPCMessageForEvent:(long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3 toClient:(id)arg4;
- (id)_applicationForClientInfo:(id)arg1;
- (void)_addRegistration:(id)arg1 toClient:(id)arg2;
- (void)_removeRegistration:(id)arg1 fromClient:(id)arg2;
- (void)_setSystemServiceClient:(id)arg1 buttonKind:(long long)arg2 eventMask:(unsigned long long)arg3 priority:(long long)arg4;
- (void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 requestsHIDEvents:(_Bool)arg3 token:(id)arg4 forButtonKind:(long long)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasConsumersForHomeButtonPresses;
- (_Bool)hasConsumersForHomeButtonSinglePress;
- (_Bool)hasConsumersForLockButtonPresses;
- (_Bool)consumeVolumeIncreaseButtonSinglePressDownWithPriority:(long long)arg1 continuation:(out CDUnknownBlockType *)arg2;
- (_Bool)consumeVolumeIncreaseButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)consumeVolumeDecreaseButtonSinglePressDownWithPriority:(long long)arg1 continuation:(out CDUnknownBlockType *)arg2;
- (_Bool)consumeVolumeDecreaseButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)consumeHeadsetPlayPauseSinglePressUpWithPriority:(long long)arg1;
- (void)_updateAllButtonEventMasks;
- (id)_mutableRegistrationsForButtonKind:(long long)arg1;

@end
