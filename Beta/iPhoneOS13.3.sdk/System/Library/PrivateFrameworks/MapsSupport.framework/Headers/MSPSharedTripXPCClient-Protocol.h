/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@protocol MSPSharedTripXPCClient <Swift>

- (unsigned short)accountAvailabilityDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)sharedTripInvalidatedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateActiveHandles;
- (unsigned short)sendMessage:toParticipant: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMessage:toGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)sharedTripDidBecomeAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)sharedTripDidBecomeUnavailable: /* Error: Ran out of types for this method. */;
- (unsigned short)sharedTripDidClose: /* Error: Ran out of types for this method. */;
- (unsigned short)destinationDidUpdateForSharedTrip: /* Error: Ran out of types for this method. */;
- (unsigned short)etaDidUpdateForSharedTrip: /* Error: Ran out of types for this method. */;
- (unsigned short)routeDidUpdateForSharedTrip: /* Error: Ran out of types for this method. */;
- (unsigned short)destinationReachedDidUpdateForSharedTrip: /* Error: Ran out of types for this method. */;

@end
