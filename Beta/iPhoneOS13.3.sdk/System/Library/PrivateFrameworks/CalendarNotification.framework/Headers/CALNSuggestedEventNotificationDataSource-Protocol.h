/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@protocol CALNSuggestedEventNotificationDataSource <Swift>

- (unsigned short)fetchSuggestedEventNotificationsWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSuggestedEventNotificationObjectIDs;
- (unsigned short)fetchSuggestedEventNotificationWithObjectID: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSuggestedEventNotificationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)confirmSuggestedEventWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)ignoreSuggestedEventWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCanceledSuggestedEventWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSuggestedEventNotifications;

@end
