/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSTimeZone, SFLatLng;

@interface SFAirport : NSObject <Swift>

{
    NSString *_code;
    NSTimeZone *_timezone;
    SFLatLng *_location;
    NSString *_city;
    NSString *_street;
    NSString *_district;
    NSString *_state;
    NSString *_postalCode;
    NSString *_countryCode;
    NSString *_country;
    NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSTimeZone *timezone;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
