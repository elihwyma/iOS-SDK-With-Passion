/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@protocol CALNEventInvitationNotificationDataSource <Swift>

- (unsigned short)fetchEventInvitationNotificationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchEventInvitationNotificationSourceClientIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEventInvitationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptEventInvitationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)declineEventInvitationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)tentativeAcceptEventInvitationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)reportEventInvitationAsJunkWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchEventInvitationNotifications;

@end
