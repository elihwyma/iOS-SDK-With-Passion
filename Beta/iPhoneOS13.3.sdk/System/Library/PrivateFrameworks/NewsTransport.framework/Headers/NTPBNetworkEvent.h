/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable

{
    unsigned long long _cacheState;
    unsigned long long _connectDuration;
    unsigned long long _dnsDuration;
    unsigned long long _errorCode;
    unsigned long long _httpStatusCode;
    unsigned long long _requestDuration;
    unsigned long long _responseDuration;
    unsigned long long _responseSize;
    unsigned long long _sessionID;
    unsigned long long _startTime;
    unsigned long long _type;
    NSString *_requestUUID;
    NSString *_respondingPOP;
    NSString *_url;
    struct {
        unsigned int cacheState:1;
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int sessionID:1;
        unsigned int startTime:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) _Bool hasDnsDuration;
@property (nonatomic) unsigned long long dnsDuration;
@property (nonatomic) _Bool hasConnectDuration;
@property (nonatomic) unsigned long long connectDuration;
@property (nonatomic) _Bool hasRequestDuration;
@property (nonatomic) unsigned long long requestDuration;
@property (nonatomic) _Bool hasResponseDuration;
@property (nonatomic) unsigned long long responseDuration;
@property (nonatomic) _Bool hasResponseSize;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) _Bool hasCacheState;
@property (nonatomic) unsigned long long cacheState;
@property (nonatomic) _Bool hasHttpStatusCode;
@property (nonatomic) unsigned long long httpStatusCode;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic, readonly) _Bool hasRequestUUID;
@property (retain, nonatomic) NSString *requestUUID;
@property (nonatomic, readonly) _Bool hasRespondingPOP;
@property (retain, nonatomic) NSString *respondingPOP;
@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) unsigned long long sessionID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
