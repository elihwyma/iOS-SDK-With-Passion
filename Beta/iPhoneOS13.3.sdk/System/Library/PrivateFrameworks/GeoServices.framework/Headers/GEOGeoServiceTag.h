/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

@interface GEOGeoServiceTag : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_tag;
    int _serviceType;
    struct {
        unsigned int has_serviceType:1;
    } _flags;
}

@property (nonatomic) _Bool hasServiceType;
@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)defaultTag;

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
- (id)serviceTypeAsString:(int)arg1;
- (int)StringAsServiceType:(id)arg1;

@end
