/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantBrandLookupResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _childBrandMuids;
    CDStruct_62a50c50 _variantBrandMuids;
    NSMutableArray *_geoHashs;
    unsigned long long _muid;
    unsigned long long _relatedGlobalBrandMuid;
    NSString *_scope;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isPrimaryVariant;
    struct {
        unsigned int has_muid:1;
        unsigned int has_relatedGlobalBrandMuid:1;
        unsigned int has_isPrimaryVariant:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childBrandMuids:1;
        unsigned int read_variantBrandMuids:1;
        unsigned int read_geoHashs:1;
        unsigned int read_scope:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_childBrandMuids:1;
        unsigned int wrote_variantBrandMuids:1;
        unsigned int wrote_geoHashs:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_relatedGlobalBrandMuid:1;
        unsigned int wrote_scope:1;
        unsigned int wrote_isPrimaryVariant:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasScope;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSMutableArray *geoHashs;
@property (nonatomic, readonly) unsigned long long childBrandMuidsCount;
@property (nonatomic, readonly) unsigned long long *childBrandMuids;
@property (nonatomic, readonly) unsigned long long variantBrandMuidsCount;
@property (nonatomic, readonly) unsigned long long *variantBrandMuids;
@property (nonatomic) _Bool hasIsPrimaryVariant;
@property (nonatomic) _Bool isPrimaryVariant;
@property (nonatomic) _Bool hasRelatedGlobalBrandMuid;
@property (nonatomic) unsigned long long relatedGlobalBrandMuid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)geoHashType;

- (id)init;
- (void)dealloc;
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
- (void)_readScope;
- (void)_readGeoHashs;
- (void)_addNoFlagsGeoHash:(id)arg1;
- (void)_readChildBrandMuids;
- (void)_addNoFlagsChildBrandMuid:(unsigned long long)arg1;
- (void)_readVariantBrandMuids;
- (void)_addNoFlagsVariantBrandMuid:(unsigned long long)arg1;
- (unsigned long long)geoHashsCount;
- (void)clearGeoHashs;
- (id)geoHashAtIndex:(unsigned long long)arg1;
- (void)addGeoHash:(id)arg1;
- (void)clearChildBrandMuids;
- (unsigned long long)childBrandMuidAtIndex:(unsigned long long)arg1;
- (void)addChildBrandMuid:(unsigned long long)arg1;
- (void)clearVariantBrandMuids;
- (unsigned long long)variantBrandMuidAtIndex:(unsigned long long)arg1;
- (void)addVariantBrandMuid:(unsigned long long)arg1;
- (void)setChildBrandMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setVariantBrandMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
