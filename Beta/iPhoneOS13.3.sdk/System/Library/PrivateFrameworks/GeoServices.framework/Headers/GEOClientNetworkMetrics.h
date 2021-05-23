/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOClientNetworkMetrics : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _requestEnd;
    double _requestStart;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    struct {
        unsigned int has_requestEnd:1;
        unsigned int has_requestStart:1;
        unsigned int has_httpResponseCode:1;
        unsigned int has_redirectCount:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int read_unknownFields:1;
        unsigned int read_serviceIpAddress:1;
        unsigned int read_transactionMetrics:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_requestEnd:1;
        unsigned int wrote_requestStart:1;
        unsigned int wrote_serviceIpAddress:1;
        unsigned int wrote_transactionMetrics:1;
        unsigned int wrote_httpResponseCode:1;
        unsigned int wrote_redirectCount:1;
        unsigned int wrote_requestDataSize:1;
        unsigned int wrote_responseDataSize:1;
    } _flags;
}

@property (nonatomic) _Bool hasHttpResponseCode;
@property (nonatomic) int httpResponseCode;
@property (nonatomic, readonly) _Bool hasServiceIpAddress;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (nonatomic) _Bool hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) _Bool hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (nonatomic) _Bool hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) _Bool hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) _Bool hasRedirectCount;
@property (nonatomic) int redirectCount;
@property (retain, nonatomic) NSMutableArray *transactionMetrics;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)transactionMetricsType;

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
- (void)addTransactionMetrics:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readServiceIpAddress;
- (void)_readTransactionMetrics;
- (void)_addNoFlagsTransactionMetrics:(id)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)clearTransactionMetrics;
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;

@end
