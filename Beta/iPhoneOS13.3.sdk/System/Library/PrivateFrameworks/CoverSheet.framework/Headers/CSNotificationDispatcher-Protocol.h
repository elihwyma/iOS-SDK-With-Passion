/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@protocol CSNotificationDispatcher <Swift>

- (unsigned short)notificationSectionSettingsForDestination: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:requestPermissionToExecuteAction:forNotificationRequest:withParameters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:performAction:forNotificationRequest:requestAuthentication:withParameters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:settingsForSectionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:clearNotificationRequestsInSections: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:clearNotificationRequests: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:clearNotificationRequestsFromIncomingSection: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:setAllowsNotifications:forSectionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:setDeliverQuietly:forSectionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:setAllowsCriticalAlerts:forSectionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)destination:clearNotificationRequestsFromDate:toDate:inSections: /* Error: Ran out of types for this method. */;
- (unsigned short)alertingControllerForDestination: /* Error: Ran out of types for this method. */;

@end
