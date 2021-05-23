/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSHashTable, NSString, NSXPCConnection;

@interface DNDRemoteServiceConnection : NSObject

{
    NSXPCConnection *_connection;
    NSHashTable *_eventListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addEventListener:(id)arg1;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 requestDetails:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRemoteConnectionInterrupted;
- (void)_handleRemoteConnectionInvalidated;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deliverActiveModeAssertionUpdate:(id)arg1 invalidation:(id)arg2 clientIdentifiers:(id)arg3;
- (void)deliverStateUpdate:(id)arg1;
- (void)deliverUpdatedBehaviorSettings:(id)arg1;
- (void)deliverUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)deliverUpdatedScheduleSettings:(id)arg1;
- (void)removeEventListener:(id)arg1;

@end
