/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/Swift-Protocol.h>

@protocol MapsSuggestionsNetworkRequester <Swift>

- (unsigned short)ETAsFromHereWaypoint:destinationWaypoints:transportType:automobileOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveMapItemHandleData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reverseGeocodeCoordinate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forwardGeocodeAddressString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)searchString:maxResults:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)searchPOIWithName:ofPOICategory:withinVenue:maxResults:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forwardGeocodePostalAddress:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)composedWaypointForMapItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)composedWaypointForLocation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)composedWaypointForAddressString:completion: /* Error: Ran out of types for this method. */;

@end
