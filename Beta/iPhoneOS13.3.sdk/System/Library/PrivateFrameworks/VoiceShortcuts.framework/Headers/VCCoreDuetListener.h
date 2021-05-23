/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, VCDaemonXPCEventHandler, VCUserNotificationManager, WFConfiguredTrigger, WFDatabase, WFOutOfProcessWorkflowController, WFWorkflowRunEvent;

@protocol OS_dispatch_queue, VCDatabaseProvider, _CDUserContext;

@interface VCCoreDuetListener : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <_CDUserContext> _userContext;
    id <VCDatabaseProvider> _databaseProvider;
    VCUserNotificationManager *_notificationManager;
    VCDaemonXPCEventHandler *_eventHandler;
    NSMutableDictionary *_registrations;
    WFOutOfProcessWorkflowController *_workflowController;
    WFWorkflowRunEvent *_inProgressRunEvent;
    WFConfiguredTrigger *_inProgressTrigger;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <_CDUserContext> userContext;
@property (nonatomic, readonly) id <VCDatabaseProvider> databaseProvider;
@property (nonatomic, readonly) VCUserNotificationManager *notificationManager;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *eventHandler;
@property (nonatomic, readonly) NSMutableDictionary *registrations;
@property (retain, nonatomic) WFOutOfProcessWorkflowController *workflowController;
@property (retain, nonatomic) WFWorkflowRunEvent *inProgressRunEvent;
@property (retain, nonatomic) WFConfiguredTrigger *inProgressTrigger;
@property (nonatomic, readonly) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldRunTrigger:(id)arg1 forEvent:(id)arg2 runEvents:(id)arg3 error:(id *)arg4;
+ (double)rateLimitingTimeoutForTrigger:(id)arg1 runEvents:(id)arg2;

- (void)dealloc;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2;
- (void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (void)deviceDidUnlockForFirstTime;
- (id)queue_configuredTriggerForIdentifier:(id)arg1 workflowReference:(id *)arg2 error:(out id *)arg3;
- (_Bool)queue_registerAllTriggers:(id *)arg1;
- (_Bool)registerTrigger:(id)arg1 error:(id *)arg2;
- (void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2;
- (void)unregisterAllTriggers;
- (_Bool)isCallbackRegisteredWithIdentifier:(id)arg1;
- (void)registerCallback:(id)arg1 withIdentifier:(id)arg2;
- (void)unregisterCallbackForIdentifier:(id)arg1;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (void)handleSunriseSunsetChanged;
- (void)fetchCurrentSunriseSunsetTimes;
- (void)queue_fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 eventInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 error:(out id *)arg4;
- (void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2;
- (void)registerAllTriggersWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 eventInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)logMetricForTrigger:(id)arg1;

@end
