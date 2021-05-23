/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigValue : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    NSString *_stringValue;
    _Bool _boolValue;
    struct {
        unsigned int has_doubleValue:1;
        unsigned int has_intValue:1;
        unsigned int has_boolValue:1;
    } _flags;
}

@property (nonatomic) _Bool hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasBoolValue;
@property (nonatomic) _Bool boolValue;
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
