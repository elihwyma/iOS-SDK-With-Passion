/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLPlacemarkInternal, CLRegion, CNPostalAddress, NSArray, NSDictionary, NSString, NSTimeZone;

@interface CLPlacemark : NSObject

{
    CLPlacemarkInternal *_internal;
}

@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (copy, nonatomic, readonly) CLLocation *location;
@property (copy, nonatomic, readonly) CLRegion *region;
@property (copy, nonatomic, readonly) NSTimeZone *timeZone;
@property (copy, nonatomic, readonly) NSDictionary *addressDictionary;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *thoroughfare;
@property (copy, nonatomic, readonly) NSString *subThoroughfare;
@property (copy, nonatomic, readonly) NSString *locality;
@property (copy, nonatomic, readonly) NSString *subLocality;
@property (copy, nonatomic, readonly) NSString *administrativeArea;
@property (copy, nonatomic, readonly) NSString *subAdministrativeArea;
@property (copy, nonatomic, readonly) NSString *postalCode;
@property (copy, nonatomic, readonly) NSString *ISOcountryCode;
@property (copy, nonatomic, readonly) NSString *country;
@property (copy, nonatomic, readonly) NSString *inlandWater;
@property (copy, nonatomic, readonly) NSString *ocean;
@property (copy, nonatomic, readonly) NSArray *areasOfInterest;

+ (_Bool)supportsSecureCoding;
+ (id)placemarkWithGEOMapItem:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)_geoMapItem;

@end
