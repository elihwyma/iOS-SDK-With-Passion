/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCUserNotificationManager : NSObject

@property (nonatomic, readonly) _Bool hasOutstandingNotifications;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(_Bool)arg6 dismissOnLock:(_Bool)arg7 displayInAppWhitelistModes:(_Bool)arg8 dismissAfterTimeInterval:(double)arg9 assertion:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)cancelAllNotificationsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 displayOnLockScreen:(_Bool)arg7 dismissOnLock:(_Bool)arg8 displayInAppWhitelistModes:(_Bool)arg9 dismissAfterTimeInterval:(double)arg10 assertion:(id)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (void)cancelNotificationEntriesMatchingPredicate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
