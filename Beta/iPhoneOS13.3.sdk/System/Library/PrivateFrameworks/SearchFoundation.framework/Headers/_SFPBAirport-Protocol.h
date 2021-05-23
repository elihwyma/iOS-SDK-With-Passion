/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBLatLng, _SFPBTimeZone;

@protocol _SFPBAirport <Swift>

@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) _SFPBTimeZone *timezone;
@property (retain, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
