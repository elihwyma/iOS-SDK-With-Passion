/*
 Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

#import <iCloudNotification/Swift-Protocol.h>

@protocol INDaemonProtocol <Swift>

- (unsigned short)registerAccountWithID:foriCloudNotificationsWithReason:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterAccountWithID:fromiCloudNotificationsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAllRegistrationDigestsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)diagnosticReportWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateOfferForAccountWithID:offerId:buttonId:info:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)iCloudServerOfferForAccountWithID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyDeviceStorageLevel:completion: /* Error: Ran out of types for this method. */;

@end
