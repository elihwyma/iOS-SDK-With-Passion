//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _childBrandMuids;
    CDStruct_62a50c50 _variantBrandMuids;
    NSMutableArray *_geoHashs;
    NSUInteger _muid;
    NSUInteger _relatedGlobalBrandMuid;
    NSString *_scope;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _isPrimaryVariant;
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

+ (BOOL)isValid:(id)arg1;
+ (Class)geoHashType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRelatedGlobalBrandMuid;
@property(nonatomic) NSUInteger relatedGlobalBrandMuid;
@property(nonatomic) BOOL hasIsPrimaryVariant;
@property(nonatomic) BOOL isPrimaryVariant;
- (void)setVariantBrandMuids:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)variantBrandMuidAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsVariantBrandMuid:(NSUInteger)arg1;
- (void)addVariantBrandMuid:(NSUInteger)arg1;
- (void)clearVariantBrandMuids;
@property(readonly, nonatomic) NSUInteger variantBrandMuids;
@property(readonly, nonatomic) NSUInteger variantBrandMuidsCount;
- (void)_readVariantBrandMuids;
- (void)setChildBrandMuids:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)childBrandMuidAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsChildBrandMuid:(NSUInteger)arg1;
- (void)addChildBrandMuid:(NSUInteger)arg1;
- (void)clearChildBrandMuids;
@property(readonly, nonatomic) NSUInteger childBrandMuids;
@property(readonly, nonatomic) NSUInteger childBrandMuidsCount;
- (void)_readChildBrandMuids;
- (id)geoHashAtIndex:(NSUInteger)arg1;
- (NSUInteger)geoHashsCount;
- (void)_addNoFlagsGeoHash:(id)arg1;
- (void)addGeoHash:(id)arg1;
- (void)clearGeoHashs;
@property(retain, nonatomic) NSMutableArray *geoHashs;
- (void)_readGeoHashs;
@property(retain, nonatomic) NSString *scope;
@property(readonly, nonatomic) BOOL hasScope;
- (void)_readScope;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

