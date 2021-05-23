/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDMacCountersRx : PBCodable

{
    unsigned long long _rxackucast;
    unsigned long long _rxcfrmmcast;
    unsigned long long _rxcfrmocast;
    unsigned long long _rxcfrmucast;
    unsigned long long _rxctsocast;
    unsigned long long _rxctsucast;
    unsigned long long _rxdfrmmcast;
    unsigned long long _rxdfrmocast;
    unsigned long long _rxdfrmucastmbss;
    unsigned long long _rxmfrmmcast;
    unsigned long long _rxmfrmocast;
    unsigned long long _rxmfrmucastmbss;
    unsigned long long _rxrtsocast;
    unsigned long long _rxrtsucast;
    struct {
        unsigned int rxackucast:1;
        unsigned int rxcfrmmcast:1;
        unsigned int rxcfrmocast:1;
        unsigned int rxcfrmucast:1;
        unsigned int rxctsocast:1;
        unsigned int rxctsucast:1;
        unsigned int rxdfrmmcast:1;
        unsigned int rxdfrmocast:1;
        unsigned int rxdfrmucastmbss:1;
        unsigned int rxmfrmmcast:1;
        unsigned int rxmfrmocast:1;
        unsigned int rxmfrmucastmbss:1;
        unsigned int rxrtsocast:1;
        unsigned int rxrtsucast:1;
    } _has;
}

@property (nonatomic) _Bool hasRxdfrmucastmbss;
@property (nonatomic) unsigned long long rxdfrmucastmbss;
@property (nonatomic) _Bool hasRxmfrmucastmbss;
@property (nonatomic) unsigned long long rxmfrmucastmbss;
@property (nonatomic) _Bool hasRxcfrmucast;
@property (nonatomic) unsigned long long rxcfrmucast;
@property (nonatomic) _Bool hasRxrtsucast;
@property (nonatomic) unsigned long long rxrtsucast;
@property (nonatomic) _Bool hasRxctsucast;
@property (nonatomic) unsigned long long rxctsucast;
@property (nonatomic) _Bool hasRxackucast;
@property (nonatomic) unsigned long long rxackucast;
@property (nonatomic) _Bool hasRxdfrmocast;
@property (nonatomic) unsigned long long rxdfrmocast;
@property (nonatomic) _Bool hasRxmfrmocast;
@property (nonatomic) unsigned long long rxmfrmocast;
@property (nonatomic) _Bool hasRxcfrmocast;
@property (nonatomic) unsigned long long rxcfrmocast;
@property (nonatomic) _Bool hasRxrtsocast;
@property (nonatomic) unsigned long long rxrtsocast;
@property (nonatomic) _Bool hasRxctsocast;
@property (nonatomic) unsigned long long rxctsocast;
@property (nonatomic) _Bool hasRxdfrmmcast;
@property (nonatomic) unsigned long long rxdfrmmcast;
@property (nonatomic) _Bool hasRxmfrmmcast;
@property (nonatomic) unsigned long long rxmfrmmcast;
@property (nonatomic) _Bool hasRxcfrmmcast;
@property (nonatomic) unsigned long long rxcfrmmcast;

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
