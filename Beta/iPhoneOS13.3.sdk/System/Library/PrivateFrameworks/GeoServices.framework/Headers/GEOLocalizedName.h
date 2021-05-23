/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedName : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    NSString *_nameType;
    NSString *_name;
    NSString *_phoneticName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _nameRank;
    _Bool _isDefault;
    struct {
        unsigned int has_nameRank:1;
        unsigned int has_isDefault:1;
        unsigned int read_unknownFields:1;
        unsigned int read_languageCode:1;
        unsigned int read_nameType:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_languageCode:1;
        unsigned int wrote_nameType:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneticName:1;
        unsigned int wrote_nameRank:1;
        unsigned int wrote_isDefault:1;
    } _flags;
}

@property (nonatomic) _Bool hasIsDefault;
@property (nonatomic) _Bool isDefault;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic, readonly) _Bool hasNameType;
@property (retain, nonatomic) NSString *nameType;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasNameRank;
@property (nonatomic) unsigned int nameRank;
@property (nonatomic, readonly) _Bool hasPhoneticName;
@property (retain, nonatomic) NSString *phoneticName;
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
- (void)_readLanguageCode;
- (void)_readPhoneticName;
- (id)initWithPlaceDataLocalizedString:(id)arg1;
- (void)_readNameType;

@end
