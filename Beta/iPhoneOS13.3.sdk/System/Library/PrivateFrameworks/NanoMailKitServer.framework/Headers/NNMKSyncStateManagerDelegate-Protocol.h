/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKSyncStateManagerDelegate <Swift>

- (unsigned short)syncStateManager:didAcknowledgeForwardNotificationPayload:forBulletin: /* Error: Ran out of types for this method. */;
- (unsigned short)syncStateManagerDidUnpair: /* Error: Ran out of types for this method. */;
- (unsigned short)syncStateManagerDidChangePairedDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)syncStateManagerDidBeginSyncSession:syncSessionType:syncSessionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)syncStateManagerDidInvalidateSyncSession:syncSessionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)syncStateManagerShouldAddFavoriteSubsectionForMailboxId: /* Error: Ran out of types for this method. */;

@end
