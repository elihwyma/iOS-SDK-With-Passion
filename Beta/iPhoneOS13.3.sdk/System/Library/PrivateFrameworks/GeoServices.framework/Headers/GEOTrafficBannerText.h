/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTrafficBannerText : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_bannerLargeText;
    GEOFormattedString *_bannerSmallText;
    NSMutableArray *_localizedIncidentBanners;
    NSMutableArray *_localizedIncidentSpokenTexts;
    NSMutableArray *_localizedIncidentSubBanners;
    GEOFormattedString *_spokenPrompt;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _bannerStyle;
    unsigned int _hideAtDistance;
    unsigned int _incidentDistance;
    unsigned int _incidentIndex;
    int _previousBannerChange;
    unsigned int _secondsSaved;
    unsigned int _showAtDistance;
    _Bool _disableFasterRerouteByDefault;
    struct {
        unsigned int has_bannerStyle:1;
        unsigned int has_hideAtDistance:1;
        unsigned int has_incidentDistance:1;
        unsigned int has_incidentIndex:1;
        unsigned int has_previousBannerChange:1;
        unsigned int has_secondsSaved:1;
        unsigned int has_showAtDistance:1;
        unsigned int has_disableFasterRerouteByDefault:1;
        unsigned int read_unknownFields:1;
        unsigned int read_bannerLargeText:1;
        unsigned int read_bannerSmallText:1;
        unsigned int read_localizedIncidentBanners:1;
        unsigned int read_localizedIncidentSpokenTexts:1;
        unsigned int read_localizedIncidentSubBanners:1;
        unsigned int read_spokenPrompt:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_bannerLargeText:1;
        unsigned int wrote_bannerSmallText:1;
        unsigned int wrote_localizedIncidentBanners:1;
        unsigned int wrote_localizedIncidentSpokenTexts:1;
        unsigned int wrote_localizedIncidentSubBanners:1;
        unsigned int wrote_spokenPrompt:1;
        unsigned int wrote_bannerStyle:1;
        unsigned int wrote_hideAtDistance:1;
        unsigned int wrote_incidentDistance:1;
        unsigned int wrote_incidentIndex:1;
        unsigned int wrote_previousBannerChange:1;
        unsigned int wrote_secondsSaved:1;
        unsigned int wrote_showAtDistance:1;
        unsigned int wrote_disableFasterRerouteByDefault:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *localizedIncidentBanners;
@property (retain, nonatomic) NSMutableArray *localizedIncidentSubBanners;
@property (retain, nonatomic) NSMutableArray *localizedIncidentSpokenTexts;
@property (nonatomic, readonly) _Bool hasBannerLargeText;
@property (retain, nonatomic) GEOFormattedString *bannerLargeText;
@property (nonatomic, readonly) _Bool hasBannerSmallText;
@property (retain, nonatomic) GEOFormattedString *bannerSmallText;
@property (nonatomic, readonly) _Bool hasSpokenPrompt;
@property (retain, nonatomic) GEOFormattedString *spokenPrompt;
@property (nonatomic) _Bool hasShowAtDistance;
@property (nonatomic) unsigned int showAtDistance;
@property (nonatomic) _Bool hasHideAtDistance;
@property (nonatomic) unsigned int hideAtDistance;
@property (nonatomic) _Bool hasIncidentDistance;
@property (nonatomic) unsigned int incidentDistance;
@property (nonatomic) _Bool hasIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) _Bool hasPreviousBannerChange;
@property (nonatomic) int previousBannerChange;
@property (nonatomic) _Bool hasDisableFasterRerouteByDefault;
@property (nonatomic) _Bool disableFasterRerouteByDefault;
@property (nonatomic) _Bool hasBannerStyle;
@property (nonatomic) int bannerStyle;
@property (nonatomic) _Bool hasSecondsSaved;
@property (nonatomic) unsigned int secondsSaved;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedIncidentBannerType;
+ (Class)localizedIncidentSubBannerType;
+ (Class)localizedIncidentSpokenTextType;

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
- (void)_readLocalizedIncidentBanners;
- (void)_addNoFlagsLocalizedIncidentBanner:(id)arg1;
- (void)_readLocalizedIncidentSubBanners;
- (void)_addNoFlagsLocalizedIncidentSubBanner:(id)arg1;
- (void)_readLocalizedIncidentSpokenTexts;
- (void)_addNoFlagsLocalizedIncidentSpokenText:(id)arg1;
- (void)_readBannerLargeText;
- (void)_readBannerSmallText;
- (void)_readSpokenPrompt;
- (unsigned long long)localizedIncidentBannersCount;
- (void)clearLocalizedIncidentBanners;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)clearLocalizedIncidentSubBanners;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (void)clearLocalizedIncidentSpokenTexts;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (id)previousBannerChangeAsString:(int)arg1;
- (int)StringAsPreviousBannerChange:(id)arg1;
- (id)bannerStyleAsString:(int)arg1;
- (int)StringAsBannerStyle:(id)arg1;

@end
