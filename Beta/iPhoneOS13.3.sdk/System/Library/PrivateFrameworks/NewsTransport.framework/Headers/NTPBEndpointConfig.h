/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBEndpointConfig : PBCodable

{
    NSString *_analyticsEndpointUrlsJson;
    NSString *_analyticsEnvelopeContentTypePropJson;
    NSString *_clientApiBaseUrl;
    int _environment;
    NSString *_eventRelayBaseUrl;
    NSString *_eventRelayBatchBaseUrl;
    NSString *_newsNotificationsBaseUrl;
    NSString *_remoteDataSourceBaseUrl;
    NSString *_staticAssetBaseUrl;
}

@property (nonatomic) int environment;
@property (nonatomic, readonly) _Bool hasClientApiBaseUrl;
@property (retain, nonatomic) NSString *clientApiBaseUrl;
@property (nonatomic, readonly) _Bool hasEventRelayBaseUrl;
@property (retain, nonatomic) NSString *eventRelayBaseUrl;
@property (nonatomic, readonly) _Bool hasEventRelayBatchBaseUrl;
@property (retain, nonatomic) NSString *eventRelayBatchBaseUrl;
@property (nonatomic, readonly) _Bool hasNewsNotificationsBaseUrl;
@property (retain, nonatomic) NSString *newsNotificationsBaseUrl;
@property (nonatomic, readonly) _Bool hasAnalyticsEndpointUrlsJson;
@property (retain, nonatomic) NSString *analyticsEndpointUrlsJson;
@property (nonatomic, readonly) _Bool hasAnalyticsEnvelopeContentTypePropJson;
@property (retain, nonatomic) NSString *analyticsEnvelopeContentTypePropJson;
@property (nonatomic, readonly) _Bool hasStaticAssetBaseUrl;
@property (retain, nonatomic) NSString *staticAssetBaseUrl;
@property (nonatomic, readonly) _Bool hasRemoteDataSourceBaseUrl;
@property (retain, nonatomic) NSString *remoteDataSourceBaseUrl;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
