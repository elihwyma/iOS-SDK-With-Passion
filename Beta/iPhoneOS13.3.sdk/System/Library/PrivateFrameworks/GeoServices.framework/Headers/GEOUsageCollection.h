/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOUsageCollection : PBCodable

{
    PBDataReader *_reader;
    struct GEOTileUsage *_tileUsages;
    unsigned long long _tileUsagesCount;
    unsigned long long _tileUsagesSpace;
    struct GEOSessionID _sessionID;
    NSString *_countryCode;
    NSString *_hwMachine;
    long long _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _cellWifi;
    int _geoService;
    int _placeRequestType;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    _Bool _sessionIDIsPersistent;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_requestErrorCode:1;
        unsigned int has_timestamp:1;
        unsigned int has_cellWifi:1;
        unsigned int has_geoService:1;
        unsigned int has_placeRequestType:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int has_responseTime:1;
        unsigned int has_sessionIDIsPersistent:1;
        unsigned int read_tileUsages:1;
        unsigned int read_countryCode:1;
        unsigned int read_hwMachine:1;
        unsigned int read_requestErrorDescription:1;
        unsigned int read_requestErrorDomain:1;
        unsigned int wrote_tileUsages:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_hwMachine:1;
        unsigned int wrote_requestErrorCode:1;
        unsigned int wrote_requestErrorDescription:1;
        unsigned int wrote_requestErrorDomain:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_cellWifi:1;
        unsigned int wrote_geoService:1;
        unsigned int wrote_placeRequestType:1;
        unsigned int wrote_requestDataSize:1;
        unsigned int wrote_responseDataSize:1;
        unsigned int wrote_responseTime:1;
        unsigned int wrote_sessionIDIsPersistent:1;
    } _flags;
}

@property (nonatomic) _Bool hasGeoService;
@property (nonatomic) int geoService;
@property (nonatomic) _Bool hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) _Bool hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (nonatomic) _Bool hasResponseTime;
@property (nonatomic) int responseTime;
@property (nonatomic) _Bool hasCellWifi;
@property (nonatomic) int cellWifi;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) struct GEOSessionID sessionID;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) unsigned long long tileUsagesCount;
@property (nonatomic, readonly) struct GEOTileUsage *tileUsages;
@property (nonatomic, readonly) _Bool hasHwMachine;
@property (retain, nonatomic) NSString *hwMachine;
@property (nonatomic) _Bool hasSessionIDIsPersistent;
@property (nonatomic) _Bool sessionIDIsPersistent;
@property (nonatomic) _Bool hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (nonatomic, readonly) _Bool hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) _Bool hasRequestErrorCode;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic, readonly) _Bool hasRequestErrorDescription;
@property (retain, nonatomic) NSString *requestErrorDescription;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readCountryCode;
- (void)clearTileUsages;
- (void)_readTileUsages;
- (void)_addNoFlagsTileUsage:(struct GEOTileUsage)arg1;
- (void)_readHwMachine;
- (void)_readRequestErrorDomain;
- (void)_readRequestErrorDescription;
- (struct GEOTileUsage)tileUsageAtIndex:(unsigned long long)arg1;
- (void)addTileUsage:(struct GEOTileUsage)arg1;
- (id)geoServiceAsString:(int)arg1;
- (int)StringAsGeoService:(id)arg1;
- (id)cellWifiAsString:(int)arg1;
- (int)StringAsCellWifi:(id)arg1;
- (void)setTileUsages:(struct GEOTileUsage *)arg1 count:(unsigned long long)arg2;
- (id)placeRequestTypeAsString:(int)arg1;
- (int)StringAsPlaceRequestType:(id)arg1;

@end
