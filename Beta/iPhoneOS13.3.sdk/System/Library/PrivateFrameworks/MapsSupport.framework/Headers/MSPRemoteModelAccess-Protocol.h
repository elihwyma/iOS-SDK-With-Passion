/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@protocol MSPRemoteModelAccess <Swift>

- (unsigned short)fetchHistorySerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)commitHistorySerializedRepresentation:reapingTombstones:earliestKnownSyncDate:operationIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)eraseHistorySerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLastKnownHistoryOperationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPinnedPlacesSerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)commitPinnedPlacesSerializedRepresentation:operationIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)erasePinnedPlacesSerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLastKnownPinnedPlacesOperationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCollectionsSerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)commitCollectionsSerializedRepresentation:operationIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLastKnownCollectionsOperationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)eraseCollectionsSerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFavoritesSerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)commitFavoritesSerializedRepresentation:reapingTombstones:operationIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLastKnownFavoritesOperationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)eraseFavoritesSerializedRepresentationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)testByNotingHistoryChangedOnDisk;
- (unsigned short)noteMapstoolChangedHistoryOnDisk;
- (unsigned short)noteMapstoolChangedFavoritesOnDisk;

@end
