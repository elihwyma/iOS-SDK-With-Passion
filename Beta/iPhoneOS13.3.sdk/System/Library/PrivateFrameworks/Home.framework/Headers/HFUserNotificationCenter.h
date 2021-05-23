/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NAFuture, NSHashTable, NSString, UNUserNotificationCenter;

@protocol HFUserNotificationPresentationHandling;

@interface HFUserNotificationCenter : NSObject

{
    UNUserNotificationCenter *_userNotificationCenter;
    id <HFUserNotificationPresentationHandling> _presentationHandler;
    NAFuture *_notificationSettingsFuture;
    NSHashTable *_observers;
}

@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (retain, nonatomic) NAFuture *notificationSettingsFuture;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id <HFUserNotificationPresentationHandling> presentationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notificationSettings;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_applicationDidEnterBackground;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)_applicationWillEnterForeground;

@end
