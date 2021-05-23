/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEONameInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _phoneticType;
    int _shieldType;
    int _signType;
    struct {
        unsigned int has_phoneticType:1;
        unsigned int has_shieldType:1;
        unsigned int has_signType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locale:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int read_shield:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_locale:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneticName:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_phoneticType:1;
        unsigned int wrote_shieldType:1;
        unsigned int wrote_signType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasPhoneticName;
@property (retain, nonatomic) NSString *phoneticName;
@property (nonatomic, readonly) _Bool hasShield;
@property (retain, nonatomic) NSString *shield;
@property (nonatomic) _Bool hasShieldType;
@property (nonatomic) int shieldType;
@property (nonatomic) _Bool hasPhoneticType;
@property (nonatomic) int phoneticType;
@property (nonatomic) _Bool hasSignType;
@property (nonatomic) int signType;
@property (nonatomic, readonly) _Bool hasLocale;
@property (retain, nonatomic) NSString *locale;
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
- (void)_readName;
- (void)_readPhoneticName;
- (void)_readShield;
- (void)_readLocale;
- (id)phoneticTypeAsString:(int)arg1;
- (int)StringAsPhoneticType:(id)arg1;
- (id)signTypeAsString:(int)arg1;
- (int)StringAsSignType:(id)arg1;

@end
