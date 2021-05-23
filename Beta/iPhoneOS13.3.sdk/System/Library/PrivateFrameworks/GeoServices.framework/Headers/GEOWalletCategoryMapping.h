/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOStyleAttributes, NSString, PBDataReader;

@interface GEOWalletCategoryMapping : PBCodable

{
    PBDataReader *_reader;
    GEOStyleAttributes *_stylesAttributes;
    NSString *_walletCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_stylesAttributes:1;
        unsigned int read_walletCategory:1;
        unsigned int wrote_stylesAttributes:1;
        unsigned int wrote_walletCategory:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasWalletCategory;
@property (retain, nonatomic) NSString *walletCategory;
@property (nonatomic, readonly) _Bool hasStylesAttributes;
@property (retain, nonatomic) GEOStyleAttributes *stylesAttributes;

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
- (void)_readWalletCategory;
- (void)_readStylesAttributes;

@end
