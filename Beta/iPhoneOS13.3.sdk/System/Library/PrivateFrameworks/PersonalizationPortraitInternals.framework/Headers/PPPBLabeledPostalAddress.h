/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable

{
    NSString *_city;
    NSString *_country;
    NSString *_isoCountryCode;
    NSString *_label;
    NSString *_postalCode;
    NSString *_state;
    NSString *_street;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
}

@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic, readonly) _Bool hasStreet;
@property (retain, nonatomic) NSString *street;
@property (nonatomic, readonly) _Bool hasSubLocality;
@property (retain, nonatomic) NSString *subLocality;
@property (nonatomic, readonly) _Bool hasCity;
@property (retain, nonatomic) NSString *city;
@property (nonatomic, readonly) _Bool hasSubAdministrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (nonatomic, readonly) _Bool hasState;
@property (retain, nonatomic) NSString *state;
@property (nonatomic, readonly) _Bool hasPostalCode;
@property (retain, nonatomic) NSString *postalCode;
@property (nonatomic, readonly) _Bool hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic, readonly) _Bool hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
