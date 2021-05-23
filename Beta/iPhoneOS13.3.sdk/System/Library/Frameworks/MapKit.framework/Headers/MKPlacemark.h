/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <CoreLocation/CLPlacemark.h>

#import <MapKit/Swift-Protocol.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <Swift>

@property (nonatomic, readonly) NSString *countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

- (id)thoroughfare;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2;
- (id)mkPostalAddressDictionary;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 postalAddress:(id)arg2;

@end
