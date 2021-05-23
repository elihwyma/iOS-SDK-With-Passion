/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSClientDetailsProvider, NSMapTable, NSString, NSXPCListener;

@protocol DNDSRemoteServiceProviderDelegate;

@interface DNDSRemoteServiceProvider : NSObject

{
    NSXPCListener *_listener;
    NSMapTable *_clientConnectionDetailsByConnection;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    id <DNDSRemoteServiceProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <DNDSRemoteServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 requestDetails:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_iterateClientConnectionsToSendWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleClientConnectionInterrupted:(id)arg1;
- (void)_handleClientConnectionInvalidated:(id)arg1;
- (id)_clientDetailsForClientIdentifier:(id)arg1 clientConnection:(id)arg2;
- (void)_registerOrMutateConnectionDetailsForClientConnection:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_unregisterConnectionDetailsForClientConnection:(id)arg1;
- (id)initWithClientDetailsProvider:(id)arg1;
- (void)handleStateUpdate:(id)arg1;
- (void)handleModeAssertionUpdateResult:(id)arg1;
- (void)handleUpdatedBehaviorSettings:(id)arg1;
- (void)handleUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)handleUpdatedScheduleSettings:(id)arg1;

@end
