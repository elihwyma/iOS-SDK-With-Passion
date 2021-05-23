/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable

{
    PBUnknownFields *_unknownFields;
    _Bool _concatenatingFormatStringsSupported;
    _Bool _styleSupported;
    _Bool _timestampFormatPatternSupported;
    struct {
        unsigned int has_concatenatingFormatStringsSupported:1;
        unsigned int has_styleSupported:1;
        unsigned int has_timestampFormatPatternSupported:1;
    } _flags;
}

@property (nonatomic) _Bool hasConcatenatingFormatStringsSupported;
@property (nonatomic) _Bool concatenatingFormatStringsSupported;
@property (nonatomic) _Bool hasTimestampFormatPatternSupported;
@property (nonatomic) _Bool timestampFormatPatternSupported;
@property (nonatomic) _Bool hasStyleSupported;
@property (nonatomic) _Bool styleSupported;
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

@end
