/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, PETScalarEventTracker, UNUserNotificationCenter, WFLWorkflowController;

@protocol ATXTVIntentHandler;

@interface ATXActionNotificationServer : NSObject

{
    UNUserNotificationCenter *_notificationCenter;
    WFLWorkflowController *_currentWorkflowController;
    id <ATXTVIntentHandler> _tvIntentHandler;
    PETScalarEventTracker *_removeTracker;
    PETScalarEventTracker *_notifyInitTracker;
    PETScalarEventTracker *_notifyErrorTracker;
    PETScalarEventTracker *_notifySuccessTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_requestIdentifierForBundleId:(id)arg1;
+ (id)localizedContentBodyStringWithString:(id)arg1 forAction:(id)arg2;
+ (id)bundleIdFromRequestIdentifier:(id)arg1;

- (id)init;
- (_Bool)_isRTL;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_attachmentForIdentifier:(id)arg1;
- (void)_setupNotifications;
- (void)workflowControllerWillRun:(id)arg1;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)_postTestNotification;
- (void)_postTestNotificationWithPredictionCount:(long long)arg1;
- (void)postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2;
- (void)postNotificationForATXActionResponse:(id)arg1;
- (unsigned long long)deliveredNotificationCount;
- (_Bool)hasLockscreenPrediction;
- (void)_postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2;
- (void)removeAllNotificationsAndTrackEvent:(_Bool)arg1;
- (id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 languageCode:(id)arg3;
- (void)_handleIntent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
