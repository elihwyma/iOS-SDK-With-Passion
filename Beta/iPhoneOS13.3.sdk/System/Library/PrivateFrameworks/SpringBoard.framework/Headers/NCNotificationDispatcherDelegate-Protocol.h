/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol NCNotificationDispatcherDelegate <Swift>

- (unsigned short)dispatcher:requestPermissionToExecuteAction:forDestination:notificationRequest:withParameters:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatcher:didExecuteAction:forNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatcher:willExecuteAction:forDestination:notificationRequest:requestAuthentication:withParameters:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatcher:launchForegroundApplicationForAction:notificationRequest:fromDestination:withParameters: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatcher:launchBackgroundApplicationForAction:notificationRequest:fromDestination:withParameters: /* Error: Ran out of types for this method. */;

@end
