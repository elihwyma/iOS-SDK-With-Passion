/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPTransitStorageIcon, MSPTransitStorageShield, NSString, PBUnknownFields;

@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface MSPTransitStorageArtwork : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityText;
    int _artworkSourceType;
    int _artworkUseType;
    MSPTransitStorageIcon *_icon;
    MSPTransitStorageShield *_iconFallbackShield;
    MSPTransitStorageShield *_shield;
    _Bool _hasRoutingIncidentBadge;
    struct {
        unsigned int artworkSourceType:1;
        unsigned int artworkUseType:1;
        unsigned int hasRoutingIncidentBadge:1;
    } _has;
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
@property (nonatomic) _Bool hasArtworkSourceType;
@property (nonatomic) int artworkSourceType;
@property (nonatomic) _Bool hasArtworkUseType;
@property (nonatomic) int artworkUseType;
@property (nonatomic, readonly) _Bool hasShield;
@property (retain, nonatomic) MSPTransitStorageShield *shield;
@property (nonatomic, readonly) _Bool hasIcon;
@property (retain, nonatomic) MSPTransitStorageIcon *icon;
@property (nonatomic, readonly) _Bool hasIconFallbackShield;
@property (retain, nonatomic) MSPTransitStorageShield *iconFallbackShield;
@property (nonatomic) _Bool hasHasRoutingIncidentBadge;
@property (nonatomic) _Bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) _Bool hasAccessibilityText;
@property (retain, nonatomic) NSString *accessibilityText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithArtwork:(id)arg1;
- (id)artworkSourceTypeAsString:(int)arg1;
- (int)StringAsArtworkSourceType:(id)arg1;
- (id)artworkUseTypeAsString:(int)arg1;
- (int)StringAsArtworkUseType:(id)arg1;

@end
