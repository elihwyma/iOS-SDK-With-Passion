/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPlaceResult;

__attribute__((visibility("hidden")))
@interface GEOBatchPlaceResult : PBCodable

{
    GEOPlaceResult *_placeResult;
    int _statusCode;
    CDStruct_ade9d5f7 _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) _Bool hasPlaceResult;
@property (retain, nonatomic) GEOPlaceResult *placeResult;

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
- (void)clearSensitiveFields;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;

@end
