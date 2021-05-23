/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

@interface GEOPhotoInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _size;
    CDStruct_3f61e687 _flags;
}

@property (nonatomic) _Bool hasSize;
@property (nonatomic) int size;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)sizeAsString:(int)arg1;
- (int)StringAsSize:(id)arg1;
- (id)initWithPlaceDataPhotoContent:(id)arg1;

@end
