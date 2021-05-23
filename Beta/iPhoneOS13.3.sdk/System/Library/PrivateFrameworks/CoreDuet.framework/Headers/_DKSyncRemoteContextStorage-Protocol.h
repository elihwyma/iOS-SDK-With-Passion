/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/Swift-Protocol.h>

@protocol _DKSyncRemoteContextStorage <Swift>

- (unsigned short)setDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeToContextValueChangeNotificationsFromPeer:registrationIdentifier:predicate:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unsubscribeFromContextValueChangeNotificationsFromPeer:registrationIdentifier:predicate:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchContextValuesFromPeer:forKeyPaths:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendContextValuesToPeer:registrationIdentifier:archivedObjects:highPriority:completion: /* Error: Ran out of types for this method. */;

@end
