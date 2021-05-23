/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitIcon, GEOPBTransitShield, NSString, PBDataReader, PBUnknownFields;

@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface GEOPBTransitArtwork : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityString;
    GEOPBTransitShield *_iconFallbackShield;
    GEOPBTransitIcon *_icon;
    GEOPBTransitShield *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _artworkType;
    int _artworkUse;
    int _badge;
    struct {
        unsigned int has_artworkType:1;
        unsigned int has_artworkUse:1;
        unsigned int has_badge:1;
        unsigned int read_unknownFields:1;
        unsigned int read_accessibilityString:1;
        unsigned int read_iconFallbackShield:1;
        unsigned int read_icon:1;
        unsigned int read_shield:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessibilityString:1;
        unsigned int wrote_iconFallbackShield:1;
        unsigned int wrote_icon:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_artworkType:1;
        unsigned int wrote_artworkUse:1;
        unsigned int wrote_badge:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> shieldDataSource;
@property (nonatomic, readonly) id <GEOTransitIconDataSource> iconDataSource;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (nonatomic, readonly) id <GEOTransitTextDataSource> textDataSource;
@property (nonatomic, readonly) _Bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic) _Bool hasArtworkType;
@property (nonatomic) int artworkType;
@property (nonatomic) _Bool hasArtworkUse;
@property (nonatomic) int artworkUse;
@property (nonatomic, readonly) _Bool hasShield;
@property (retain, nonatomic) GEOPBTransitShield *shield;
@property (nonatomic, readonly) _Bool hasIcon;
@property (retain, nonatomic) GEOPBTransitIcon *icon;
@property (nonatomic, readonly) _Bool hasIconFallbackShield;
@property (retain, nonatomic) GEOPBTransitShield *iconFallbackShield;
@property (nonatomic) _Bool hasBadge;
@property (nonatomic) int badge;
@property (nonatomic, readonly) _Bool hasAccessibilityString;
@property (retain, nonatomic) NSString *accessibilityString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readShield;
- (void)_readIcon;
- (void)_readIconFallbackShield;
- (void)_readAccessibilityString;
- (id)artworkTypeAsString:(int)arg1;
- (int)StringAsArtworkType:(id)arg1;
- (id)artworkUseAsString:(int)arg1;
- (int)StringAsArtworkUse:(id)arg1;
- (id)badgeAsString:(int)arg1;
- (int)StringAsBadge:(id)arg1;

@end
