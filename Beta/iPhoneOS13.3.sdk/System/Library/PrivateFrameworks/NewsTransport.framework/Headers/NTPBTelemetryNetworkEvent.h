/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBTelemetryNetworkEvent : PBCodable

{
    long long _connectDuration;
    long long _dnsDuration;
    long long _errorCode;
    long long _httpStatusCode;
    long long _requestDuration;
    long long _responseDuration;
    long long _responseSize;
    long long _startTime;
    int _cacheState;
    struct {
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int startTime:1;
        unsigned int cacheState:1;
    } _has;
}

@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) _Bool hasDnsDuration;
@property (nonatomic) long long dnsDuration;
@property (nonatomic) _Bool hasConnectDuration;
@property (nonatomic) long long connectDuration;
@property (nonatomic) _Bool hasRequestDuration;
@property (nonatomic) long long requestDuration;
@property (nonatomic) _Bool hasResponseDuration;
@property (nonatomic) long long responseDuration;
@property (nonatomic) _Bool hasResponseSize;
@property (nonatomic) long long responseSize;
@property (nonatomic) _Bool hasCacheState;
@property (nonatomic) int cacheState;
@property (nonatomic) _Bool hasHttpStatusCode;
@property (nonatomic) long long httpStatusCode;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
