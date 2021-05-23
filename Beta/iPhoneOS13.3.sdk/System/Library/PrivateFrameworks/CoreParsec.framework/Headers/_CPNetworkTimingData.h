/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _CPTCPInfo, _CPTuscanyConnectionInfo;

@interface _CPNetworkTimingData : PBCodable

{
    _Bool _connectionRace;
    _Bool _connectionReused;
    _Bool _QUICWhitelistedDomain;
    _Bool _TFOSuccess;
    unsigned int _redirectCount;
    unsigned int _redirectCountW3C;
    unsigned int _requestHeaderSize;
    unsigned int _responseBodyBytesDecoded;
    unsigned int _responseBodyBytesReceived;
    unsigned int _responseHeaderSize;
    unsigned int _connectStart;
    unsigned int _connectEnd;
    unsigned int _domainLookupStart;
    unsigned int _domainLookupEnd;
    unsigned int _fetchStart;
    unsigned int _redirectStart;
    unsigned int _redirectEnd;
    unsigned int _requestStart;
    unsigned int _requestEnd;
    unsigned int _responseStart;
    unsigned int _responseEnd;
    unsigned int _secureConnectStart;
    NSString *_interfaceIdentifier;
    NSData *_peerAddress;
    _CPTCPInfo *_startTimeCounts;
    _CPTCPInfo *_stopTimeCounts;
    NSString *_connectionUUID;
    NSString *_networkProtocolName;
    double _timingDataInit;
    _CPTuscanyConnectionInfo *_tuscany;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *interfaceIdentifier;
@property (copy, nonatomic) NSData *peerAddress;
@property (nonatomic) _Bool connectionRace;
@property (nonatomic) _Bool connectionReused;
@property (retain, nonatomic) _CPTCPInfo *startTimeCounts;
@property (retain, nonatomic) _CPTCPInfo *stopTimeCounts;
@property (copy, nonatomic) NSString *connectionUUID;
@property (copy, nonatomic) NSString *networkProtocolName;
@property (nonatomic) _Bool QUICWhitelistedDomain;
@property (nonatomic) unsigned int redirectCount;
@property (nonatomic) unsigned int redirectCountW3C;
@property (nonatomic) unsigned int requestHeaderSize;
@property (nonatomic) unsigned int responseBodyBytesDecoded;
@property (nonatomic) unsigned int responseBodyBytesReceived;
@property (nonatomic) unsigned int responseHeaderSize;
@property (nonatomic) _Bool TFOSuccess;
@property (nonatomic) double timingDataInit;
@property (retain, nonatomic) _CPTuscanyConnectionInfo *tuscany;
@property (nonatomic) unsigned int connectStart;
@property (nonatomic) unsigned int connectEnd;
@property (nonatomic) unsigned int domainLookupStart;
@property (nonatomic) unsigned int domainLookupEnd;
@property (nonatomic) unsigned int fetchStart;
@property (nonatomic) unsigned int redirectStart;
@property (nonatomic) unsigned int redirectEnd;
@property (nonatomic) unsigned int requestStart;
@property (nonatomic) unsigned int requestEnd;
@property (nonatomic) unsigned int responseStart;
@property (nonatomic) unsigned int responseEnd;
@property (nonatomic) unsigned int secureConnectStart;
@property (nonatomic, readonly) NSData *jsonData;

+ (id)startMetricsForNormalization;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTelemetryDictionary:(id)arg1;

@end
