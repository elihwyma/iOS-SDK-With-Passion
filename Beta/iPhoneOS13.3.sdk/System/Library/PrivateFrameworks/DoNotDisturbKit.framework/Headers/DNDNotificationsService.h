/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
 */

#import <Foundation/NSObject.h>

@class DNDBehaviorSettings, DNDBypassSettings, DNDModeAssertionService, DNDSettingsService, DNDState, DNDStateModeAssertionMetadata, DNDStateService, NSString, UNUserNotificationCenter;

@protocol OS_dispatch_queue;

@interface DNDNotificationsService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    DNDModeAssertionService *_notificationsAssertionService;
    DNDStateService *_notificationsStateService;
    DNDSettingsService *_notificationsSettingsService;
    _Bool _doNotDisturbActive;
    _Bool _basicActive;
    _Bool _sleepActive;
    _Bool _bedtimeActive;
    _Bool _drivingActive;
    _Bool _workoutActive;
    DNDStateModeAssertionMetadata *_longestAssertionMetadata;
    DNDState *_currentState;
    DNDBehaviorSettings *_currentBehaviorSettings;
    DNDBypassSettings *_currentPhoneCallBypassSettings;
    UNUserNotificationCenter *_notificationsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)resume;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithClientIdentifier:(id)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)_handleSignificantTimeChange;
- (void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(_Bool)arg1 significantTimeChange:(_Bool)arg2;

@end
