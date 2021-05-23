/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <GeoServices/GEOSharedNavState.h>

@interface GEOSharedNavState (MSPExtras)

- (void)merge:(id)arg1;
- (id)destinationName;
- (id)composedRoute;
- (id)senderName;
- (id)mspDescription;
- (void)stripArrivedOrClosedTrip;
- (void)truncatePointDataForPrivacy;
- (id)composedRouteTraffic;
- (CDUnknownBlockType)equalityTest;

@end
