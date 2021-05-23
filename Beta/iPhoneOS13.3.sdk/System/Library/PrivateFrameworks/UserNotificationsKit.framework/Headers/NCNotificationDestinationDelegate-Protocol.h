/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/Swift-Protocol.h>

@protocol NCNotificationDestinationDelegate <Swift>

- (unsigned short)destination:requestPermissionToExecuteAction:forNotificationRequest:withParameters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:executeAction:forNotificationRequest:requestAuthentication:withParameters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:requestsClearingNotificationRequests: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:requestsClearingNotificationRequestsInSections: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:requestsClearingNotificationRequestsFromDate:toDate:inSections: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:requestsClearingNotificationRequests:fromDestinations: /* Error: Ran out of types for this method. */;

@end
