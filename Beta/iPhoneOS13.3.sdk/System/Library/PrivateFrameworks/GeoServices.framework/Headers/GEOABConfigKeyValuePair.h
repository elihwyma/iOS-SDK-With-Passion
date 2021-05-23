/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOABConfigValue, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigKeyValuePair : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_abConfigKey;
    GEOABConfigValue *_abConfigValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _abConfigValueType;
    struct {
        unsigned int has_abConfigValueType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abConfigKey:1;
        unsigned int read_abConfigValue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_abConfigKey:1;
        unsigned int wrote_abConfigValue:1;
        unsigned int wrote_abConfigValueType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAbConfigKey;
@property (retain, nonatomic) NSString *abConfigKey;
@property (nonatomic) _Bool hasAbConfigValueType;
@property (nonatomic) int abConfigValueType;
@property (nonatomic, readonly) _Bool hasAbConfigValue;
@property (retain, nonatomic) GEOABConfigValue *abConfigValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readAbConfigKey;
- (void)_readAbConfigValue;
- (id)abConfigValueTypeAsString:(int)arg1;
- (int)StringAsAbConfigValueType:(id)arg1;

@end
