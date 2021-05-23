/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLService.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, PLNSNotificationOperatorComposition, PLSemaphore, PLTimer;

@protocol OS_xpc_object;

@interface PLXPCService : PLService

{
    unsigned int _responderWaitTime;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSMutableDictionary *_registeredListeners;
    NSMutableDictionary *_registeredResponders;
    NSDictionary *_permissionCache;
    PLNSNotificationOperatorComposition *_registrationNotification;
    NSArray *_clientIDs;
    NSDictionary *_clientNames;
    PLTimer *_resetPermissionsForClientsTimer;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLSemaphore *_satelliteProcessSemaphore;
}

@property (retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain) NSMutableDictionary *registeredListeners;
@property (retain) NSMutableDictionary *registeredResponders;
@property (retain) NSDictionary *permissionCache;
@property (retain) PLNSNotificationOperatorComposition *registrationNotification;
@property (retain) NSArray *clientIDs;
@property (retain) NSDictionary *clientNames;
@property (retain) PLTimer *resetPermissionsForClientsTimer;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLSemaphore *satelliteProcessSemaphore;
@property unsigned int responderWaitTime;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionClientLogging;
+ (id)entryEventPointDefinitionClientLoggingDrops;
+ (id)entryEventIntervalDefinitionResponderEvent;
+ (id)entryAggregateDefinitionXPCEvent;

- (id)init;
- (void)initOperatorDependancies;
- (void)dailyTasks;
- (void)stopPowerlogHelperd:(id)arg1;
- (void)initSatelliteProcessSemaphore;
- (void)handlePeer:(id)arg1 forEvent:(id)arg2;
- (void)resetPermissionsForClients;
- (void)handleSingleMessage:(id)arg1 fromPeer:(id)arg2 forEvent:(id)arg3;
- (void)setSatelliteProcessExitWithTime:(double)arg1;
- (void)handlePeerShouldLogEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5;
- (void)handlePeerResponderEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerListenerEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withProcessName:(id)arg4;
- (void)respondToEvent:(id)arg1 withResponse:(id)arg2;
- (id)registeredOperatorFromDictionary:(id)arg1 forMessage:(id)arg2;
- (void)logMessage:(id)arg1 withPayload:(id)arg2;
- (void)setSatelliteProcessExit;

@end
