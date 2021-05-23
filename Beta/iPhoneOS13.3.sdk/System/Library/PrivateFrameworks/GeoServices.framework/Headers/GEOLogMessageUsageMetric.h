/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOLogMessageUsageMetric : PBCodable

{
    struct GEOSessionID _sessionId;
    unsigned long long _messageSize;
    unsigned int _messageCount;
    int _metricState;
    int _metricType;
    unsigned int _retryCount;
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_messageSize:1;
        unsigned int has_messageCount:1;
        unsigned int has_metricState:1;
        unsigned int has_metricType:1;
        unsigned int has_retryCount:1;
    } _flags;
}

@property (nonatomic) _Bool hasMetricType;
@property (nonatomic) int metricType;
@property (nonatomic) _Bool hasMetricState;
@property (nonatomic) int metricState;
@property (nonatomic) _Bool hasMessageCount;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) _Bool hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) _Bool hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) _Bool hasSessionId;
@property (nonatomic) struct GEOSessionID sessionId;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)metricTypeAsString:(int)arg1;
- (int)StringAsMetricType:(id)arg1;
- (id)metricStateAsString:(int)arg1;
- (int)StringAsMetricState:(id)arg1;

@end
