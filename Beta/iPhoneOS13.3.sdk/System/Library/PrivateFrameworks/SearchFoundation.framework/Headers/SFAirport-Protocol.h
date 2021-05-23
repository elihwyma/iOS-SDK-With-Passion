/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSTimeZone, SFLatLng;

@protocol SFAirport <Swift>

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

@end
