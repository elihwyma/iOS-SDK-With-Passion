/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface DNDSettingsService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_settingsUpdateListeners;
    _Bool _registeredForUpdates;
    NSString *_clientIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (id)_initWithClientIdentifier:(id)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (_Bool)_queue_registerForSettingsUpdatesIfRequired;
- (void)_handleLostXPCConnectionWithRetry:(_Bool)arg1;
- (id)behaviorSettingsReturningError:(id *)arg1;
- (_Bool)setBehaviorSettings:(id)arg1 error:(id *)arg2;
- (id)phoneCallBypassSettingsReturningError:(id *)arg1;
- (_Bool)setPhoneCallBypassSettings:(id)arg1 error:(id *)arg2;
- (id)scheduleSettingsReturningError:(id *)arg1;
- (_Bool)setScheduleSettings:(id)arg1 error:(id *)arg2;
- (void)addSettingsUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeSettingsUpdateListener:(id)arg1;
- (_Bool)setBehaviorSettings:(id)arg1 returningError:(id *)arg2;
- (_Bool)setPhoneCallBypassSettings:(id)arg1 returningError:(id *)arg2;
- (_Bool)setScheduleSettings:(id)arg1 returningError:(id *)arg2;
- (_Bool)addSettingsUpdateListener:(id)arg1 error:(id *)arg2;
- (_Bool)removeSettingsUpdateListener:(id)arg1 error:(id *)arg2;

@end
