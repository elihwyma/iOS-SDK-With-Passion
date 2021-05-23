/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDWiFiSDBSliceSpecific : PBCodable

{
    unsigned long long _timestamp;
    unsigned long long _txDeferDuration;
    unsigned long long _txPriDuration;
    unsigned long long _txaDuration;
    unsigned int _ackTxPowerBackoffCount;
    unsigned int _txDeferredCount;
    unsigned int _txMuteCount;
    unsigned int _txPathEnableReqCount;
    unsigned int _txPathMuteCount;
    unsigned int _txPriorityCount;
    unsigned int _txaONCount;
    unsigned int _txaPORCount;
    unsigned int _txaTimeoutCount;
    struct {
        unsigned int timestamp:1;
        unsigned int txDeferDuration:1;
        unsigned int txPriDuration:1;
        unsigned int txaDuration:1;
        unsigned int ackTxPowerBackoffCount:1;
        unsigned int txDeferredCount:1;
        unsigned int txMuteCount:1;
        unsigned int txPathEnableReqCount:1;
        unsigned int txPathMuteCount:1;
        unsigned int txPriorityCount:1;
        unsigned int txaONCount:1;
        unsigned int txaPORCount:1;
        unsigned int txaTimeoutCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTxaONCount;
@property (nonatomic) unsigned int txaONCount;
@property (nonatomic) _Bool hasTxaTimeoutCount;
@property (nonatomic) unsigned int txaTimeoutCount;
@property (nonatomic) _Bool hasTxaPORCount;
@property (nonatomic) unsigned int txaPORCount;
@property (nonatomic) _Bool hasTxPathEnableReqCount;
@property (nonatomic) unsigned int txPathEnableReqCount;
@property (nonatomic) _Bool hasTxPathMuteCount;
@property (nonatomic) unsigned int txPathMuteCount;
@property (nonatomic) _Bool hasTxPriorityCount;
@property (nonatomic) unsigned int txPriorityCount;
@property (nonatomic) _Bool hasTxDeferredCount;
@property (nonatomic) unsigned int txDeferredCount;
@property (nonatomic) _Bool hasTxMuteCount;
@property (nonatomic) unsigned int txMuteCount;
@property (nonatomic) _Bool hasAckTxPowerBackoffCount;
@property (nonatomic) unsigned int ackTxPowerBackoffCount;
@property (nonatomic) _Bool hasTxaDuration;
@property (nonatomic) unsigned long long txaDuration;
@property (nonatomic) _Bool hasTxPriDuration;
@property (nonatomic) unsigned long long txPriDuration;
@property (nonatomic) _Bool hasTxDeferDuration;
@property (nonatomic) unsigned long long txDeferDuration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
