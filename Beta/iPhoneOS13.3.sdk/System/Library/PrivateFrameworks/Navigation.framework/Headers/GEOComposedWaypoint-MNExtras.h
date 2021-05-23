/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <GeoServices/GEOComposedWaypoint.h>

@interface GEOComposedWaypoint (MNExtras)

@property (nonatomic, readonly) int destinationType;

+ (id)appleParkWaypointFromMuid;
+ (id)appleParkWaypointFromAddress;
+ (id)appleParkWaypointFromLatLng;

- (id)localeIdentifier;
- (id)destinationInfo;
- (id)humanDescription;
- (id)navDisplayName;
- (id)navAnnouncementAddress;
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1;
- (id)navDisplayAddress;
- (id)navAnnouncementName;
- (id)humanDescriptionWithLatLng;
- (id)humanDescriptionWithAddressAndLatLng;

@end
