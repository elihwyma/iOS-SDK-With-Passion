/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOAttribute : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _key;
    unsigned int _value;
    CDStruct_a4cc0a70 _flags;
}

@property (nonatomic) _Bool hasKey;
@property (nonatomic) int key;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) unsigned int value;
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
- (id)keyAsString:(int)arg1;
- (int)StringAsKey:(id)arg1;

@end
