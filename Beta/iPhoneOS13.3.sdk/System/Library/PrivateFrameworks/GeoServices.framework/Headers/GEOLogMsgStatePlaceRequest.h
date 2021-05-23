/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable

{
    GEOPDPlaceRequest *_placeDataRequest;
    int _placeRequestType;
    struct {
        unsigned int has_placeRequestType:1;
    } _flags;
}

@property (nonatomic) _Bool hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (nonatomic, readonly) _Bool hasPlaceDataRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeDataRequest;

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
- (id)placeRequestTypeAsString:(int)arg1;
- (int)StringAsPlaceRequestType:(id)arg1;

@end
