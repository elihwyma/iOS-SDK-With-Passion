/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSString, UNUserNotificationCenter;

@protocol VCUserNotificationManagerDelegate;

@interface VCUserNotificationManager : NSObject

{
    id <VCUserNotificationManagerDelegate> _delegate;
    UNUserNotificationCenter *_notificationCenter;
}

@property (nonatomic, readonly) UNUserNotificationCenter *notificationCenter;
@property (weak, nonatomic) id <VCUserNotificationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 actionIcons:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)postNotificationThatTrigger:(id)arg1 failedWithError:(id)arg2;
- (void)removeNotificationsWithTriggerIdentifier:(id)arg1;

@end
