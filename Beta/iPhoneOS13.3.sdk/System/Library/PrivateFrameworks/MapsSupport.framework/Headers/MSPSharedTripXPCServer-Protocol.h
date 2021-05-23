/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@protocol MSPSharedTripXPCServer <Swift>

- (unsigned short)checkin;
- (unsigned short)fetchAccountValidWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSendingIdentityWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startSharingTripWithContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSharingTripWithContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)startSharingTripWithMessagesContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSharingTripWithMessagesContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)startSharingTripWithMessagesGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSharingTripWithMessagesGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSharingTrip;
- (unsigned short)fetchActiveHandlesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeToSharedTripUpdatesWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)unsubscribeFromSharedTripUpdatesWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSharedTripsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)blockSharedTrip: /* Error: Ran out of types for this method. */;

@end
