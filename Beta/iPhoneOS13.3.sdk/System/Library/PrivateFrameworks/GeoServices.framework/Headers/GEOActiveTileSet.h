/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOActiveTileSet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    NSString *_baseURL;
    NSMutableArray *_countryRegionWhitelists;
    NSMutableArray *_deviceSKUWhitelists;
    NSString *_localizationURL;
    NSMutableArray *_sentinelTiles;
    NSMutableArray *_supportedLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _checksumType;
    int _requestStyle;
    int _scale;
    int _size;
    int _style;
    unsigned int _timeToLiveSeconds;
    int _updateBehavior;
    unsigned int _version;
    _Bool _useAuthProxy;
    struct {
        unsigned int has_checksumType:1;
        unsigned int has_requestStyle:1;
        unsigned int has_timeToLiveSeconds:1;
        unsigned int has_updateBehavior:1;
        unsigned int has_useAuthProxy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_availableTiles:1;
        unsigned int read_baseURL:1;
        unsigned int read_countryRegionWhitelists:1;
        unsigned int read_deviceSKUWhitelists:1;
        unsigned int read_localizationURL:1;
        unsigned int read_sentinelTiles:1;
        unsigned int read_supportedLanguages:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_availableTiles:1;
        unsigned int wrote_baseURL:1;
        unsigned int wrote_countryRegionWhitelists:1;
        unsigned int wrote_deviceSKUWhitelists:1;
        unsigned int wrote_localizationURL:1;
        unsigned int wrote_sentinelTiles:1;
        unsigned int wrote_supportedLanguages:1;
        unsigned int wrote_checksumType:1;
        unsigned int wrote_requestStyle:1;
        unsigned int wrote_scale:1;
        unsigned int wrote_size:1;
        unsigned int wrote_style:1;
        unsigned int wrote_timeToLiveSeconds:1;
        unsigned int wrote_updateBehavior:1;
        unsigned int wrote_version:1;
        unsigned int wrote_useAuthProxy:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasBaseURL;
@property (retain, nonatomic) NSString *baseURL;
@property (nonatomic) int style;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasTimeToLiveSeconds;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (nonatomic, readonly) unsigned long long availableTilesCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *availableTiles;
@property (retain, nonatomic) NSMutableArray *sentinelTiles;
@property (nonatomic, readonly) _Bool hasLocalizationURL;
@property (retain, nonatomic) NSString *localizationURL;
@property (retain, nonatomic) NSMutableArray *supportedLanguages;
@property (nonatomic) _Bool hasUpdateBehavior;
@property (nonatomic) int updateBehavior;
@property (retain, nonatomic) NSMutableArray *countryRegionWhitelists;
@property (nonatomic) _Bool hasChecksumType;
@property (nonatomic) int checksumType;
@property (nonatomic) _Bool hasRequestStyle;
@property (nonatomic) int requestStyle;
@property (nonatomic) _Bool hasUseAuthProxy;
@property (nonatomic) _Bool useAuthProxy;
@property (retain, nonatomic) NSMutableArray *deviceSKUWhitelists;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)supportedLanguageType;
+ (Class)countryRegionWhitelistType;
+ (Class)deviceSKUWhitelistType;
+ (id)buildDisputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;
+ (Class)sentinelTileType;

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
- (_Bool)isDisputedBordersWhitelistedForCountry:(id)arg1 region:(id)arg2;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(CDStruct_90e2a262)arg2;
- (void)_readBaseURL;
- (void)_readLocalizationURL;
- (void)_readSupportedLanguages;
- (void)_addNoFlagsSupportedLanguage:(id)arg1;
- (void)_readCountryRegionWhitelists;
- (void)_addNoFlagsCountryRegionWhitelist:(id)arg1;
- (void)_readDeviceSKUWhitelists;
- (void)_addNoFlagsDeviceSKUWhitelist:(id)arg1;
- (unsigned long long)supportedLanguagesCount;
- (void)clearSupportedLanguages;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (unsigned long long)countryRegionWhitelistsCount;
- (void)clearCountryRegionWhitelists;
- (id)countryRegionWhitelistAtIndex:(unsigned long long)arg1;
- (void)addCountryRegionWhitelist:(id)arg1;
- (unsigned long long)deviceSKUWhitelistsCount;
- (void)clearDeviceSKUWhitelists;
- (id)deviceSKUWhitelistAtIndex:(unsigned long long)arg1;
- (void)addDeviceSKUWhitelist:(id)arg1;
- (id)styleAsString:(int)arg1;
- (int)StringAsStyle:(id)arg1;
- (id)scaleAsString:(int)arg1;
- (int)StringAsScale:(id)arg1;
- (id)sizeAsString:(int)arg1;
- (int)StringAsSize:(id)arg1;
- (id)updateBehaviorAsString:(int)arg1;
- (int)StringAsUpdateBehavior:(id)arg1;
- (id)checksumTypeAsString:(int)arg1;
- (int)StringAsChecksumType:(id)arg1;
- (id)requestStyleAsString:(int)arg1;
- (int)StringAsRequestStyle:(id)arg1;
- (void)clearAvailableTiles;
- (void)_readAvailableTiles;
- (void)_addNoFlagsAvailableTiles:(struct GEOTileSetRegion)arg1;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (unsigned int)maximumZoomLevelInRect:(CDStruct_90e2a262)arg1;
- (id)bestLanguageWithOverrideLocale:(id)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (id)disputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;
- (void)_resetBestLanguage;
- (id)_bestCountryRegionWhitelistMatchForCountry:(id)arg1 region:(id)arg2;
- (unsigned int)minimumZoomLevelInRect:(CDStruct_90e2a262)arg1;
- (unsigned int)maximumZoomLevelForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (id)dataForGenericTileType:(int)arg1 configuration:(id)arg2;
- (_Bool)isEquivalentTileSet:(id)arg1;
- (void)addSentinelTile:(id)arg1;
- (void)_readSentinelTiles;
- (void)_addNoFlagsSentinelTile:(id)arg1;
- (unsigned long long)sentinelTilesCount;
- (void)clearSentinelTiles;
- (id)sentinelTileAtIndex:(unsigned long long)arg1;

@end
