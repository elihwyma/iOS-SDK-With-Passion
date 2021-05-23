/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSString, PBUnknownFields;

@protocol GEOServerFormattedString, GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface GEOTransitClusterArtworkItem : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_text;
    unsigned int _artworkIndex;
    struct {
        unsigned int has_artworkIndex:1;
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
@property (nonatomic, readonly) id <GEOServerFormattedString> text;
@property (nonatomic) _Bool hasArtworkIndex;
@property (nonatomic) unsigned int artworkIndex;
@property (nonatomic, readonly) _Bool hasText;
@property (retain, nonatomic) GEOFormattedString *text;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
