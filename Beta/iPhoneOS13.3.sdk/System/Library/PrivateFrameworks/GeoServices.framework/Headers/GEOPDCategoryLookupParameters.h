/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    long long _industryCode;
    NSString *_mapsCategoryId;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_industryCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_walletCategoryId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_industryCode:1;
        unsigned int wrote_mapsCategoryId:1;
        unsigned int wrote_walletCategoryId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (nonatomic, readonly) _Bool hasWalletCategoryId;
@property (retain, nonatomic) NSString *walletCategoryId;
@property (nonatomic) _Bool hasIndustryCode;
@property (nonatomic) long long industryCode;
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

@end
