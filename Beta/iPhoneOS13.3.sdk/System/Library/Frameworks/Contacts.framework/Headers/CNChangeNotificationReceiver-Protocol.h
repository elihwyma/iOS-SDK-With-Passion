/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNChangeNotificationReceiver <Swift>

@property (nonatomic) _Bool forwardsSelfGeneratedDistributedSaveNotifications;
@property (nonatomic) double externalNotificationCoalescingDelay;

- (unsigned short)receiveNotificationName:fromSender:saveIdentifier:userInfo:isFromExternalProcess: /* Error: Ran out of types for this method. */;
- (unsigned short)receiveExternalNotificationName: /* Error: Ran out of types for this method. */;

@end
