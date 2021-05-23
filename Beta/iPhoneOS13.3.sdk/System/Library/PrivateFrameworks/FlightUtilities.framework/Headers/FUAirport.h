/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class CLPlacemark, NSString, NSTimeZone;

@interface FUAirport : NSObject

{
    NSString *_IATACode;
    NSString *_name;
    NSString *_city;
    NSTimeZone *_timeZone;
    CLPlacemark *_placemark;
    struct CLLocationCoordinate2D _location;
}

@property (retain) NSString *IATACode;
@property (retain) NSString *name;
@property (retain) NSString *city;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property struct CLLocationCoordinate2D location;
@property (retain) CLPlacemark *placemark;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fetchPlacemarkWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
