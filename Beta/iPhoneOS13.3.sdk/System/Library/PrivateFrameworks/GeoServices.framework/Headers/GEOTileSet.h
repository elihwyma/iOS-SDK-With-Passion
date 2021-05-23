/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTileSet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_baseURL;
    NSMutableArray *_countryRegionWhitelists;
    NSMutableArray *_deviceSKUWhitelists;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    NSMutableArray *_supportedLanguages;
    NSMutableArray *_validVersions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _alternativeMultipathTCPPort;
    int _checksumType;
    unsigned int _dataSet;
    int _requestStyle;
    int _scale;
    int _size;
    int _style;
    int _updateBehavior;
    _Bool _multiTileURLUsesStatusCodes;
    _Bool _supportsMultipathTCP;
    _Bool _useAuthProxy;
    struct {
        unsigned int has_alternativeMultipathTCPPort:1;
        unsigned int has_checksumType:1;
        unsigned int has_dataSet:1;
        unsigned int has_requestStyle:1;
        unsigned int has_updateBehavior:1;
        unsigned int has_multiTileURLUsesStatusCodes:1;
        unsigned int has_supportsMultipathTCP:1;
        unsigned int has_useAuthProxy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_baseURL:1;
        unsigned int read_countryRegionWhitelists:1;
        unsigned int read_deviceSKUWhitelists:1;
        unsigned int read_localizationURL:1;
        unsigned int read_multiTileURL:1;
        unsigned int read_supportedLanguages:1;
        unsigned int read_validVersions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_baseURL:1;
        unsigned int wrote_countryRegionWhitelists:1;
        unsigned int wrote_deviceSKUWhitelists:1;
        unsigned int wrote_localizationURL:1;
        unsigned int wrote_multiTileURL:1;
        unsigned int wrote_supportedLanguages:1;
        unsigned int wrote_validVersions:1;
        unsigned int wrote_alternativeMultipathTCPPort:1;
        unsigned int wrote_checksumType:1;
        unsigned int wrote_dataSet:1;
        unsigned int wrote_requestStyle:1;
        unsigned int wrote_scale:1;
        unsigned int wrote_size:1;
        unsigned int wrote_style:1;
        unsigned int wrote_updateBehavior:1;
        unsigned int wrote_multiTileURLUsesStatusCodes:1;
        unsigned int wrote_supportsMultipathTCP:1;
        unsigned int wrote_useAuthProxy:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasBaseURL;
@property (retain, nonatomic) NSString *baseURL;
@property (nonatomic, readonly) _Bool hasMultiTileURL;
@property (retain, nonatomic) NSString *multiTileURL;
@property (nonatomic) int style;
@property (retain, nonatomic) NSMutableArray *validVersions;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic, readonly) _Bool hasLocalizationURL;
@property (retain, nonatomic) NSString *localizationURL;
@property (retain, nonatomic) NSMutableArray *supportedLanguages;
@property (nonatomic) _Bool hasMultiTileURLUsesStatusCodes;
@property (nonatomic) _Bool multiTileURLUsesStatusCodes;
@property (nonatomic) _Bool hasUpdateBehavior;
@property (nonatomic) int updateBehavior;
@property (retain, nonatomic) NSMutableArray *countryRegionWhitelists;
@property (nonatomic) _Bool hasChecksumType;
@property (nonatomic) int checksumType;
@property (nonatomic) _Bool hasDataSet;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic) _Bool hasRequestStyle;
@property (nonatomic) int requestStyle;
@property (nonatomic) _Bool hasUseAuthProxy;
@property (nonatomic) _Bool useAuthProxy;
@property (nonatomic) _Bool hasSupportsMultipathTCP;
@property (nonatomic) _Bool supportsMultipathTCP;
@property (nonatomic) _Bool hasAlternativeMultipathTCPPort;
@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (retain, nonatomic) NSMutableArray *deviceSKUWhitelists;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)validVersionType;
+ (Class)supportedLanguageType;
+ (Class)countryRegionWhitelistType;
+ (Class)deviceSKUWhitelistType;

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
- (void)_readBaseURL;
- (void)_readMultiTileURL;
- (void)_readValidVersions;
- (void)_addNoFlagsValidVersion:(id)arg1;
- (void)_readLocalizationURL;
- (void)_readSupportedLanguages;
- (void)_addNoFlagsSupportedLanguage:(id)arg1;
- (void)_readCountryRegionWhitelists;
- (void)_addNoFlagsCountryRegionWhitelist:(id)arg1;
- (void)_readDeviceSKUWhitelists;
- (void)_addNoFlagsDeviceSKUWhitelist:(id)arg1;
- (unsigned long long)validVersionsCount;
- (void)clearValidVersions;
- (id)validVersionAtIndex:(unsigned long long)arg1;
- (void)addValidVersion:(id)arg1;
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

@end
