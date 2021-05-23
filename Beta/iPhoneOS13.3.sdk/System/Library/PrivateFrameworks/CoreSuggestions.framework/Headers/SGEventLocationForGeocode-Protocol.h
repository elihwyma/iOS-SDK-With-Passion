/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/Swift-Protocol.h>

@protocol SGEventLocationForGeocode <Swift>

- (unsigned short)geocodeLabel;
- (unsigned short)geocodeAddress;
- (unsigned short)geocodeAirportCode;
- (unsigned short)geocodeIsStart;
- (unsigned short)geocodeIsEnd;
- (unsigned short)geocodeLatitude;
- (unsigned short)geocodeLongitude;
- (unsigned short)geocodeAccuracy;
- (unsigned short)geocodeHandle;
- (unsigned short)geocodedLocationWithLabel:address:latitude:longitude:accuracy:handle: /* Error: Ran out of types for this method. */;
- (unsigned short)geocodedLocationWithLatitude:longitude:accuracy:handle: /* Error: Ran out of types for this method. */;

@end
