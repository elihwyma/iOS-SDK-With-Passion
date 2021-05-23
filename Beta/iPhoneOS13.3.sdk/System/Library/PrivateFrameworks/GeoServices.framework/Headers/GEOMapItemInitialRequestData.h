/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable

{
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    struct {
        unsigned int has_requestType:1;
    } _flags;
}

@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) _Bool hasPlaceRequestParameters;
@property (retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;

+ (_Bool)isValid:(id)arg1;

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
- (id)requestTypeAsString:(int)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)clearSensitiveFields;

@end
