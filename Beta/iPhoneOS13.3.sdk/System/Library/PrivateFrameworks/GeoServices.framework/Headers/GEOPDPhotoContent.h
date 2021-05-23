/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoContent : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _height;
    unsigned int _width;
    CDStruct_a1cdbaa7 _flags;
}

@property (nonatomic) _Bool hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) unsigned int height;
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
- (unsigned long long)_area;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
