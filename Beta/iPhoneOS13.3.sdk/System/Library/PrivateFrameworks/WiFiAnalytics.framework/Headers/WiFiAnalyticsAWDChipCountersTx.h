/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDChipCountersTx : PBCodable

{
    unsigned long long _txbyte;
    unsigned long long _txchit;
    unsigned long long _txcmiss;
    unsigned long long _txctl;
    unsigned long long _txerror;
    unsigned long long _txframe;
    unsigned long long _txnoassoc;
    unsigned long long _txnobuf;
    unsigned long long _txprshort;
    unsigned long long _txretrans;
    unsigned long long _txrunt;
    unsigned long long _txserr;
    struct {
        unsigned int txbyte:1;
        unsigned int txchit:1;
        unsigned int txcmiss:1;
        unsigned int txctl:1;
        unsigned int txerror:1;
        unsigned int txframe:1;
        unsigned int txnoassoc:1;
        unsigned int txnobuf:1;
        unsigned int txprshort:1;
        unsigned int txretrans:1;
        unsigned int txrunt:1;
        unsigned int txserr:1;
    } _has;
}

@property (nonatomic) _Bool hasTxframe;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) _Bool hasTxbyte;
@property (nonatomic) unsigned long long txbyte;
@property (nonatomic) _Bool hasTxretrans;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) _Bool hasTxerror;
@property (nonatomic) unsigned long long txerror;
@property (nonatomic) _Bool hasTxctl;
@property (nonatomic) unsigned long long txctl;
@property (nonatomic) _Bool hasTxprshort;
@property (nonatomic) unsigned long long txprshort;
@property (nonatomic) _Bool hasTxserr;
@property (nonatomic) unsigned long long txserr;
@property (nonatomic) _Bool hasTxnobuf;
@property (nonatomic) unsigned long long txnobuf;
@property (nonatomic) _Bool hasTxnoassoc;
@property (nonatomic) unsigned long long txnoassoc;
@property (nonatomic) _Bool hasTxrunt;
@property (nonatomic) unsigned long long txrunt;
@property (nonatomic) _Bool hasTxchit;
@property (nonatomic) unsigned long long txchit;
@property (nonatomic) _Bool hasTxcmiss;
@property (nonatomic) unsigned long long txcmiss;

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
