/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEORPCorrectedField : PBCodable

{
    PBDataReader *_reader;
    NSString *_correctedValue;
    NSString *_fieldName;
    NSString *_originalValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _field;
    _Bool _isMarkedIncorrect;
    struct {
        unsigned int has_field:1;
        unsigned int has_isMarkedIncorrect:1;
        unsigned int read_correctedValue:1;
        unsigned int read_fieldName:1;
        unsigned int read_originalValue:1;
        unsigned int wrote_correctedValue:1;
        unsigned int wrote_fieldName:1;
        unsigned int wrote_originalValue:1;
        unsigned int wrote_field:1;
        unsigned int wrote_isMarkedIncorrect:1;
    } _flags;
}

@property (nonatomic) _Bool hasField;
@property (nonatomic) int field;
@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic, readonly) _Bool hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (nonatomic, readonly) _Bool hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
@property (nonatomic) _Bool hasIsMarkedIncorrect;
@property (nonatomic) _Bool isMarkedIncorrect;

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
- (void)_readOriginalValue;
- (void)_readCorrectedValue;
- (void)_readFieldName;
- (id)fieldAsString:(int)arg1;
- (int)StringAsField:(id)arg1;

@end
