/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectGeocodingResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
}

@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)disambiguationLabelType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationLabel:(id)arg1;

@end
