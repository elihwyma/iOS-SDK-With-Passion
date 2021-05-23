/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBLatLng, _SFPBTimeZone;

@interface _SFPBAirport : PBCodable <Swift>

{
    NSString *_code;
    _SFPBTimeZone *_timezone;
    _SFPBLatLng *_location;
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

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
