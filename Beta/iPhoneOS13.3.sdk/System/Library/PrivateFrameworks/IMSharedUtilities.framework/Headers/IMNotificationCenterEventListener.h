/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMEventListener.h>

@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener

{
    NSString *_registeredNotificationName;
    NSString *_notificationName;
    id _notificationObject;
}

@property (nonatomic, readonly) NSString *registeredNotificationName;
@property (readonly) _Bool isRegisteredForNotification;
@property (copy, readonly) NSString *notificationName;
@property (weak, readonly) id notificationObject;

+ (id)eventListenerForNotificationName:(id)arg1 object:(id)arg2;
+ (id)eventListenerForNotificationName:(id)arg1;

- (void)dealloc;
- (void)_notification:(id)arg1;
- (void)willStartListening;
- (void)willStopListening;
- (void)willReset;
- (_Bool)isListening;
- (void)registerForNotificationName:(id)arg1 object:(id)arg2;
- (void)registerForNotificationName:(id)arg1;

@end
