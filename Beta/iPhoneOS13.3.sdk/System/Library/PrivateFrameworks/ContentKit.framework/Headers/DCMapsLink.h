/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DCMapsLink : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *mkDirectionsMode;
@property (nonatomic, readonly) _Bool canGetDirections;
@property (nonatomic, readonly) unsigned long long directionsTransportType;
@property (nonatomic, readonly) struct CLLocationCoordinate2D centerCoordinate;
@property (nonatomic, readonly) unsigned long long mkMapType;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) NSString *searchNearQuery;
@property (nonatomic, readonly) NSString *searchLocation;
@property (nonatomic, readonly) NSString *startAddress;
@property (nonatomic, readonly) NSString *destinationAddress;
@property (nonatomic, readonly) unsigned long long directionsMode;
@property (nonatomic, readonly) NSString *centerLocation;
@property (nonatomic, readonly) long long zoomLevel;
@property (nonatomic, readonly) unsigned long long mapType;
@property (nonatomic, readonly) _Bool showsTraffic;
@property (nonatomic, readonly) _Bool showsTransit;
@property (nonatomic, readonly) _Bool showsStreetView;
@property (nonatomic, readonly) _Bool showsBicycling;
@property (nonatomic, readonly) NSString *streetViewLocation;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (void)processLocation:(id)arg1 shiftingIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createMapsLinkWithPlacemark:(id)arg1 location:(id)arg2 streetAddress:(id)arg3 shiftingLocationIfNecessary:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)isMapsURL:(id)arg1;
+ (id)mapsLinkWithURL:(id)arg1;
+ (CDStruct_c3b9c2ee)coordinateSpanForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3;
+ (double)longitudeToPixelSpaceX:(double)arg1;
+ (double)latitudeToPixelSpaceY:(double)arg1;
+ (double)pixelSpaceXToLongitude:(double)arg1;
+ (double)pixelSpaceYToLatitude:(double)arg1;
+ (CDStruct_2b0c6e0b)coordinateRegionForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3;

- (id)region;
- (id)wfName;
- (id)wfSerializedRepresentation;
- (id)regionCenteredAtLocation:(struct CLLocationCoordinate2D)arg1;
- (void)geocodeAddressString:(id)arg1 inRegionIfAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)geocodeDirectionsEndpointsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDirectionsToPlacemark:(id)arg1 fromPlacemark:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getDirectionsToPlacemark:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getAppleMapsDirectionsURL:(CDUnknownBlockType)arg1;
- (id)mapsAppURL;
- (id)googleMapsAppURL;
- (id)transitAppURL;
- (id)wazeAppURL;
- (id)baiduMapsAppURL;
- (void)getCitymapperAppURL:(CDUnknownBlockType)arg1;
- (struct CLLocationCoordinate2D)streetViewLocationCoordinate;
- (struct CLLocationCoordinate2D)centerLocationCoordinate;
- (struct CLLocationCoordinate2D)searchLocationCoordinate;
- (CDStruct_c3b9c2ee)coordinateSpanForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2;
- (CDStruct_2b0c6e0b)coordinateRegionForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2;
- (struct CLLocationCoordinate2D)locationCoordinateFromString:(id)arg1;

@end
