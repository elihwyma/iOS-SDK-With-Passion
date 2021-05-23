/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSString, PBUnknownFields;

@interface MSPQuerySearch : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_language;
    NSString *_locationDisplayString;
    GEOMapRegion *_mapRegion;
    NSString *_query;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic, readonly) _Bool hasLocationDisplayString;
@property (retain, nonatomic) NSString *locationDisplayString;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
