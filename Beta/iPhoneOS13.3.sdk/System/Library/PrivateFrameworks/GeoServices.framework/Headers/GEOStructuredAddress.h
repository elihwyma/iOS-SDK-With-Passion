/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOStructuredAddress : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_5df41632 _geoIds;
    NSString *_administrativeAreaCode;
    NSString *_administrativeArea;
    NSMutableArray *_areaOfInterests;
    NSString *_countryCode;
    NSString *_country;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCodeExtension;
    NSString *_postCodeFull;
    NSString *_postCode;
    NSString *_premises;
    NSString *_premise;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) _Bool hasAdministrativeArea;
@property (retain, nonatomic) NSString *administrativeArea;
@property (nonatomic, readonly) _Bool hasAdministrativeAreaCode;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (nonatomic, readonly) _Bool hasSubAdministrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (nonatomic, readonly) _Bool hasLocality;
@property (retain, nonatomic) NSString *locality;
@property (nonatomic, readonly) _Bool hasPostCode;
@property (retain, nonatomic) NSString *postCode;
@property (nonatomic, readonly) _Bool hasSubLocality;
@property (retain, nonatomic) NSString *subLocality;
@property (nonatomic, readonly) _Bool hasPremises;
@property (retain, nonatomic) NSString *premises;
@property (nonatomic, readonly) _Bool hasThoroughfare;
@property (retain, nonatomic) NSString *thoroughfare;
@property (nonatomic, readonly) _Bool hasSubThoroughfare;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (nonatomic, readonly) _Bool hasFullThoroughfare;
@property (retain, nonatomic) NSString *fullThoroughfare;
@property (nonatomic, readonly) _Bool hasPostCodeExtension;
@property (retain, nonatomic) NSString *postCodeExtension;
@property (retain, nonatomic) NSMutableArray *areaOfInterests;
@property (nonatomic, readonly) _Bool hasInlandWater;
@property (retain, nonatomic) NSString *inlandWater;
@property (nonatomic, readonly) _Bool hasOcean;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSMutableArray *dependentLocalitys;
@property (nonatomic, readonly) _Bool hasPremise;
@property (retain, nonatomic) NSString *premise;
@property (retain, nonatomic) NSMutableArray *subPremises;
@property (nonatomic, readonly) _Bool hasPostCodeFull;
@property (retain, nonatomic) NSString *postCodeFull;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic, readonly) long long *geoIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)areaOfInterestType;
+ (Class)dependentLocalityType;
+ (Class)subPremiseType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)addressDictionary;
- (id)postalAddress;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearGeoIds;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (void)addDependentLocality:(id)arg1;
- (void)addSubPremise:(id)arg1;
- (unsigned long long)areaOfInterestsCount;
- (void)clearAreaOfInterests;
- (id)areaOfInterestAtIndex:(unsigned long long)arg1;
- (unsigned long long)dependentLocalitysCount;
- (void)clearDependentLocalitys;
- (id)dependentLocalityAtIndex:(unsigned long long)arg1;
- (unsigned long long)subPremisesCount;
- (void)clearSubPremises;
- (id)subPremiseAtIndex:(unsigned long long)arg1;
- (long long)geoIdAtIndex:(unsigned long long)arg1;
- (void)addGeoId:(long long)arg1;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;

@end
