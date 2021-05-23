/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/_UNNotificationServiceExtensionContext.h>

@class NSString, UNNotificationServiceExtension;

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext

{
    struct atomic_flag _hasRepliedFlag;
    UNNotificationServiceExtension *_extensionInstance;
}

@property (retain, nonatomic) UNNotificationServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)_stageAttachmentsForNotificationContent:(id)arg1;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceExtensionPerformCleanup;

@end
