/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmStorage, MTXPCConnectionListenerProvider, NSString;

@protocol NAScheduler;

@interface MTAlarmServer : NSObject

{
    _Bool _systemReady;
    MTAlarmStorage *_storage;
    MTXPCConnectionListenerProvider *_connectionListenerProvider;
    id <NAScheduler> _serializer;
}

@property (nonatomic, readonly) MTAlarmStorage *storage;
@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (nonatomic, readonly, getter=isSystemReady) _Bool systemReady;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_notifyClientsForTriggerType:(unsigned long long)arg1;

- (void)checkIn;
- (id)initWithStorage:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)getAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleSystemReady;
- (void)addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (_Bool)_isSystemReady;
- (id)_systemNotReadyError;

@end
