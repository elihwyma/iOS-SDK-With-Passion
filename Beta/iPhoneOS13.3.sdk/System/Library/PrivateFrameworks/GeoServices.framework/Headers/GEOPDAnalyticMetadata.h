/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAbAssignInfo, GEOLocalTime, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnalyticMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionId;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_loggedAbExperiment;
    NSString *_osVersion;
    NSString *_productName;
    double _relativeTimestamp;
    GEOLocalTime *_requestTime;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestSource;
    unsigned int _sequenceNumber;
    _Bool _isFromApi;
    _Bool _isInternalInstall;
    _Bool _isInternalTool;
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_relativeTimestamp:1;
        unsigned int has_requestSource:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_isFromApi:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abAssignInfo:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_hardwareModel:1;
        unsigned int read_loggedAbExperiment:1;
        unsigned int read_osVersion:1;
        unsigned int read_productName:1;
        unsigned int read_requestTime:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sessionId:1;
        unsigned int wrote_abAssignInfo:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_appMajorVersion:1;
        unsigned int wrote_appMinorVersion:1;
        unsigned int wrote_hardwareModel:1;
        unsigned int wrote_loggedAbExperiment:1;
        unsigned int wrote_osVersion:1;
        unsigned int wrote_productName:1;
        unsigned int wrote_relativeTimestamp:1;
        unsigned int wrote_requestTime:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_requestSource:1;
        unsigned int wrote_sequenceNumber:1;
        unsigned int wrote_isFromApi:1;
        unsigned int wrote_isInternalInstall:1;
        unsigned int wrote_isInternalTool:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (nonatomic, readonly) _Bool hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (nonatomic, readonly) _Bool hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (nonatomic, readonly) _Bool hasHardwareModel;
@property (retain, nonatomic) NSString *hardwareModel;
@property (nonatomic, readonly) _Bool hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) _Bool hasIsInternalTool;
@property (nonatomic) _Bool isInternalTool;
@property (nonatomic) _Bool hasIsInternalInstall;
@property (nonatomic) _Bool isInternalInstall;
@property (nonatomic) _Bool hasSessionId;
@property (nonatomic) struct GEOSessionID sessionId;
@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) _Bool hasRequestSource;
@property (nonatomic) int requestSource;
@property (nonatomic) _Bool hasIsFromApi;
@property (nonatomic) _Bool isFromApi;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic, readonly) _Bool hasProductName;
@property (retain, nonatomic) NSString *productName;
@property (nonatomic, readonly) _Bool hasLoggedAbExperiment;
@property (retain, nonatomic) NSString *loggedAbExperiment;
@property (nonatomic, readonly) _Bool hasAbAssignInfo;
@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, readonly) _Bool hasRequestTime;
@property (retain, nonatomic) GEOLocalTime *requestTime;
@property (nonatomic) _Bool hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)serviceTagType;

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
- (id)initWithTraits:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readLoggedAbExperiment;
- (void)_readServiceTags;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (unsigned long long)serviceTagsCount;
- (void)clearServiceTags;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (void)addServiceTag:(id)arg1;
- (void)_readOsVersion;
- (void)_readAppMajorVersion;
- (void)_readAppMinorVersion;
- (void)_readHardwareModel;
- (void)_readAbAssignInfo;
- (void)_readRequestTime;
- (void)_readAppIdentifier;
- (void)_readProductName;
- (id)requestSourceAsString:(int)arg1;
- (int)StringAsRequestSource:(id)arg1;

@end
