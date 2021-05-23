/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocalizedString, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDCategoryInformation : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_localizedMapsCategoryName;
    NSString *_mapsCategoryId;
    GEOStyleAttributes *_mapsCategoryStyleAttributes;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_localizedMapsCategoryName:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_mapsCategoryStyleAttributes:1;
        unsigned int read_walletCategoryId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localizedMapsCategoryName:1;
        unsigned int wrote_mapsCategoryId:1;
        unsigned int wrote_mapsCategoryStyleAttributes:1;
        unsigned int wrote_walletCategoryId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasWalletCategoryId;
@property (retain, nonatomic) NSString *walletCategoryId;
@property (nonatomic, readonly) _Bool hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (nonatomic, readonly) _Bool hasLocalizedMapsCategoryName;
@property (retain, nonatomic) GEOLocalizedString *localizedMapsCategoryName;
@property (nonatomic, readonly) _Bool hasMapsCategoryStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *mapsCategoryStyleAttributes;
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
- (void)_readMapsCategoryId;
- (void)_readWalletCategoryId;
- (void)_readLocalizedMapsCategoryName;
- (void)_readMapsCategoryStyleAttributes;

@end
