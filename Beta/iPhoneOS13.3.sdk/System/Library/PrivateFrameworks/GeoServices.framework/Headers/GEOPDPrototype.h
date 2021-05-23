/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPrototype : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_componentType;
    NSMutableArray *_values;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_componentType:1;
        unsigned int read_values:1;
        unsigned int read_version:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_componentType:1;
        unsigned int wrote_values:1;
        unsigned int wrote_version:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasComponentType;
@property (retain, nonatomic) NSString *componentType;
@property (nonatomic, readonly) _Bool hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *values;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)valueType;
+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addValue:(id)arg1;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readVersion;
- (void)_readComponentType;
- (void)_readValues;
- (void)_addNoFlagsValue:(id)arg1;

@end
