/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOClientMetrics, GEOPDDatasetABStatus, GEOPDPlaceGlobalResult, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPlaceResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugApiKey;
    unsigned long long _debugLatencyMs;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDPlaceGlobalResult *_globalResult;
    NSMutableArray *_placeResults;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestType;
    int _status;
    struct {
        unsigned int has_debugLatencyMs:1;
        unsigned int has_requestType:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugApiKey:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_displayRegion:1;
        unsigned int read_globalResult:1;
        unsigned int read_placeResults:1;
        unsigned int read_spokenLanguages:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientMetrics:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_debugApiKey:1;
        unsigned int wrote_debugLatencyMs:1;
        unsigned int wrote_displayLanguages:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_globalResult:1;
        unsigned int wrote_placeResults:1;
        unsigned int wrote_spokenLanguages:1;
        unsigned int wrote_requestType:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasDebugLatencyMs;
@property (nonatomic) unsigned long long debugLatencyMs;
@property (nonatomic, readonly) _Bool hasClientMetrics;
@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) _Bool hasGlobalResult;
@property (retain, nonatomic) GEOPDPlaceGlobalResult *globalResult;
@property (retain, nonatomic) NSMutableArray *placeResults;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (nonatomic, readonly) _Bool hasDisplayRegion;
@property (retain, nonatomic) NSString *displayRegion;
@property (retain, nonatomic) NSMutableArray *spokenLanguages;
@property (nonatomic, readonly) _Bool hasDebugApiKey;
@property (retain, nonatomic) NSString *debugApiKey;
@property (nonatomic, readonly) _Bool hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)displayLanguageType;
+ (Class)spokenLanguageType;
+ (Class)placeResultType;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)requestTypeAsString:(int)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)clearSensitiveFields;
- (id)_disambiguationLabels;
- (void)_readDatasetAbStatus;
- (void)_readClientMetrics;
- (void)_readDisplayLanguages;
- (void)_addNoFlagsDisplayLanguage:(id)arg1;
- (void)_readSpokenLanguages;
- (void)_addNoFlagsSpokenLanguage:(id)arg1;
- (void)_readDisplayRegion;
- (unsigned long long)displayLanguagesCount;
- (void)clearDisplayLanguages;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (unsigned long long)spokenLanguagesCount;
- (void)clearSpokenLanguages;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (void)_readPlaceResults;
- (void)_addNoFlagsPlaceResult:(id)arg1;
- (unsigned long long)placeResultsCount;
- (void)clearPlaceResults;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)_readDebugApiKey;
- (id)initWithPlace:(id)arg1 forRequestType:(int)arg2;
- (void)_readGlobalResult;

@end
