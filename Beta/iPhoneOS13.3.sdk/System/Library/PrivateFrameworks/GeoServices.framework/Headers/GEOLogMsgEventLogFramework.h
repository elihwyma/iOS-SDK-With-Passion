/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventLogFramework : PBCodable

{
    NSMutableArray *_logFrameworkItems;
    unsigned long long _messageSize;
    unsigned int _messageCount;
    int _messageType;
    int _metricState;
    int _metricType;
    int _purgeReason;
    struct {
        unsigned int has_messageSize:1;
        unsigned int has_messageCount:1;
        unsigned int has_messageType:1;
        unsigned int has_metricState:1;
        unsigned int has_metricType:1;
        unsigned int has_purgeReason:1;
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
@property (nonatomic) _Bool hasMessageType;
@property (nonatomic) int messageType;
@property (retain, nonatomic) NSMutableArray *logFrameworkItems;
@property (nonatomic) _Bool hasPurgeReason;
@property (nonatomic) int purgeReason;

+ (_Bool)isValid:(id)arg1;
+ (Class)logFrameworkItemType;

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
- (void)addLogFrameworkItem:(id)arg1;
- (unsigned long long)logFrameworkItemsCount;
- (void)clearLogFrameworkItems;
- (id)logFrameworkItemAtIndex:(unsigned long long)arg1;
- (id)messageTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (id)purgeReasonAsString:(int)arg1;
- (int)StringAsPurgeReason:(id)arg1;

@end
