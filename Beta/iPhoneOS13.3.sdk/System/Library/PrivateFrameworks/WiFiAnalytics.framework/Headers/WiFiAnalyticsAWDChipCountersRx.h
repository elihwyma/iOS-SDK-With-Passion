/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDChipCountersRx : PBCodable

{
    unsigned long long _rxbadcm;
    unsigned long long _rxbadda;
    unsigned long long _rxbadds;
    unsigned long long _rxbadproto;
    unsigned long long _rxbadsrcmac;
    unsigned long long _rxbyte;
    unsigned long long _rxctl;
    unsigned long long _rxerror;
    unsigned long long _rxfilter;
    unsigned long long _rxfragerr;
    unsigned long long _rxframe;
    unsigned long long _rxgiant;
    unsigned long long _rxnobuf;
    unsigned long long _rxnondata;
    unsigned long long _rxnoscb;
    unsigned long long _rxrtry;
    unsigned long long _rxrunt;
    struct {
        unsigned int rxbadcm:1;
        unsigned int rxbadda:1;
        unsigned int rxbadds:1;
        unsigned int rxbadproto:1;
        unsigned int rxbadsrcmac:1;
        unsigned int rxbyte:1;
        unsigned int rxctl:1;
        unsigned int rxerror:1;
        unsigned int rxfilter:1;
        unsigned int rxfragerr:1;
        unsigned int rxframe:1;
        unsigned int rxgiant:1;
        unsigned int rxnobuf:1;
        unsigned int rxnondata:1;
        unsigned int rxnoscb:1;
        unsigned int rxrtry:1;
        unsigned int rxrunt:1;
    } _has;
}

@property (nonatomic) _Bool hasRxframe;
@property (nonatomic) unsigned long long rxframe;
@property (nonatomic) _Bool hasRxbyte;
@property (nonatomic) unsigned long long rxbyte;
@property (nonatomic) _Bool hasRxerror;
@property (nonatomic) unsigned long long rxerror;
@property (nonatomic) _Bool hasRxctl;
@property (nonatomic) unsigned long long rxctl;
@property (nonatomic) _Bool hasRxnobuf;
@property (nonatomic) unsigned long long rxnobuf;
@property (nonatomic) _Bool hasRxrtry;
@property (nonatomic) unsigned long long rxrtry;
@property (nonatomic) _Bool hasRxnondata;
@property (nonatomic) unsigned long long rxnondata;
@property (nonatomic) _Bool hasRxbadds;
@property (nonatomic) unsigned long long rxbadds;
@property (nonatomic) _Bool hasRxbadcm;
@property (nonatomic) unsigned long long rxbadcm;
@property (nonatomic) _Bool hasRxfragerr;
@property (nonatomic) unsigned long long rxfragerr;
@property (nonatomic) _Bool hasRxrunt;
@property (nonatomic) unsigned long long rxrunt;
@property (nonatomic) _Bool hasRxgiant;
@property (nonatomic) unsigned long long rxgiant;
@property (nonatomic) _Bool hasRxnoscb;
@property (nonatomic) unsigned long long rxnoscb;
@property (nonatomic) _Bool hasRxbadproto;
@property (nonatomic) unsigned long long rxbadproto;
@property (nonatomic) _Bool hasRxbadsrcmac;
@property (nonatomic) unsigned long long rxbadsrcmac;
@property (nonatomic) _Bool hasRxbadda;
@property (nonatomic) unsigned long long rxbadda;
@property (nonatomic) _Bool hasRxfilter;
@property (nonatomic) unsigned long long rxfilter;

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
