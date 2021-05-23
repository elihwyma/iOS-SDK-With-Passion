/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEONamedField, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEONamedFieldValue : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    GEONamedField *_mapValue;
    NSString *_stringValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _boolValue;
    struct {
        unsigned int has_doubleValue:1;
        unsigned int has_intValue:1;
        unsigned int has_boolValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapValue:1;
        unsigned int read_stringValue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_doubleValue:1;
        unsigned int wrote_intValue:1;
        unsigned int wrote_mapValue:1;
        unsigned int wrote_stringValue:1;
        unsigned int wrote_boolValue:1;
    } _flags;
}

@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) _Bool hasBoolValue;
@property (nonatomic) _Bool boolValue;
@property (nonatomic, readonly) _Bool hasMapValue;
@property (retain, nonatomic) GEONamedField *mapValue;
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
- (void)_readStringValue;
- (void)_readMapValue;

@end
