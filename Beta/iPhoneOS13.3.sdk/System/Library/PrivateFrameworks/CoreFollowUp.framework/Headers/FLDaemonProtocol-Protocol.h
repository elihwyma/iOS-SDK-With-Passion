/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <CoreFollowUp/Swift-Protocol.h>

@protocol FLDaemonProtocol <Swift>

- (unsigned short)postFollowUpItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)countOfPendingFollowUpItemsForClientIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)pendingFollowUpItemsForClientIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPendingFollowUpItemsForClientIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPendingFollowUpItemsForClientIdentifier:uniqueIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearNotificationForItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postHSA2LoginNotification:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postHSA2LoginCode:withNotification:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postHSA2PasswordChangeForAppleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)tearDownHSA2LoginNotificationWithPushMessageID: /* Error: Ran out of types for this method. */;
- (unsigned short)didActivateHSA2LoginNotificationNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)postHSA2PasswordResetNotification:completion: /* Error: Ran out of types for this method. */;

@end
