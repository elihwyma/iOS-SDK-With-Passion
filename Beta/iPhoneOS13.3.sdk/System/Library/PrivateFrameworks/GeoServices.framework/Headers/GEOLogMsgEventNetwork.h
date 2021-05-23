/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEONetworkSessionTaskTransactionMetrics, NSString, PBDataReader;

@interface GEOLogMsgEventNetwork : PBCodable

{
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdentifier;
    double _requestEnd;
    long long _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    double _requestStart;
    NSString *_serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics *_taskMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _decodeTime;
    int _httpResponseCode;
    int _mptcpServiceType;
    int _networkService;
    int _queuedTime;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    unsigned int _tilesetId;
    int _totalTime;
    _Bool _mptcpNegotiated;
    _Bool _rnfTriggered;
    struct {
        unsigned int has_requestEnd:1;
        unsigned int has_requestErrorCode:1;
        unsigned int has_requestStart:1;
        unsigned int has_decodeTime:1;
        unsigned int has_httpResponseCode:1;
        unsigned int has_mptcpServiceType:1;
        unsigned int has_networkService:1;
        unsigned int has_queuedTime:1;
        unsigned int has_redirectCount:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int has_tilesetId:1;
        unsigned int has_totalTime:1;
        unsigned int has_mptcpNegotiated:1;
        unsigned int has_rnfTriggered:1;
        unsigned int read_manifestEnv:1;
        unsigned int read_requestAppIdentifier:1;
        unsigned int read_requestErrorDescription:1;
        unsigned int read_requestErrorDomain:1;
        unsigned int read_serviceIpAddress:1;
        unsigned int read_taskMetrics:1;
        unsigned int wrote_manifestEnv:1;
        unsigned int wrote_requestAppIdentifier:1;
        unsigned int wrote_requestEnd:1;
        unsigned int wrote_requestErrorCode:1;
        unsigned int wrote_requestErrorDescription:1;
        unsigned int wrote_requestErrorDomain:1;
        unsigned int wrote_requestStart:1;
        unsigned int wrote_serviceIpAddress:1;
        unsigned int wrote_taskMetrics:1;
        unsigned int wrote_decodeTime:1;
        unsigned int wrote_httpResponseCode:1;
        unsigned int wrote_mptcpServiceType:1;
        unsigned int wrote_networkService:1;
        unsigned int wrote_queuedTime:1;
        unsigned int wrote_redirectCount:1;
        unsigned int wrote_requestDataSize:1;
        unsigned int wrote_responseDataSize:1;
        unsigned int wrote_tilesetId:1;
        unsigned int wrote_totalTime:1;
        unsigned int wrote_mptcpNegotiated:1;
        unsigned int wrote_rnfTriggered:1;
    } _flags;
}

@property (nonatomic) _Bool hasNetworkService;
@property (nonatomic) int networkService;
@property (nonatomic) _Bool hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) _Bool hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (nonatomic, readonly) _Bool hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) _Bool hasRequestErrorCode;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic, readonly) _Bool hasRequestErrorDescription;
@property (retain, nonatomic) NSString *requestErrorDescription;
@property (nonatomic, readonly) _Bool hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) _Bool hasQueuedTime;
@property (nonatomic) int queuedTime;
@property (nonatomic) _Bool hasTotalTime;
@property (nonatomic) int totalTime;
@property (nonatomic) _Bool hasHttpResponseCode;
@property (nonatomic) int httpResponseCode;
@property (nonatomic) _Bool hasDecodeTime;
@property (nonatomic) int decodeTime;
@property (nonatomic) _Bool hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) _Bool hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) _Bool hasRedirectCount;
@property (nonatomic) int redirectCount;
@property (nonatomic, readonly) _Bool hasManifestEnv;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) _Bool hasTilesetId;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) _Bool hasMptcpServiceType;
@property (nonatomic) int mptcpServiceType;
@property (nonatomic) _Bool hasMptcpNegotiated;
@property (nonatomic) _Bool mptcpNegotiated;
@property (nonatomic, readonly) _Bool hasServiceIpAddress;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (nonatomic) _Bool hasRnfTriggered;
@property (nonatomic) _Bool rnfTriggered;
@property (nonatomic, readonly) _Bool hasTaskMetrics;
@property (retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readServiceIpAddress;
- (void)_readRequestErrorDomain;
- (void)_readRequestErrorDescription;
- (void)_readRequestAppIdentifier;
- (void)_readManifestEnv;
- (id)networkServiceAsString:(int)arg1;
- (int)StringAsNetworkService:(id)arg1;
- (void)_readTaskMetrics;
- (id)mptcpServiceTypeAsString:(int)arg1;
- (int)StringAsMptcpServiceType:(id)arg1;

@end
