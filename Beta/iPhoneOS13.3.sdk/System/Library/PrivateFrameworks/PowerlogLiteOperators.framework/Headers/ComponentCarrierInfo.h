/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ComponentCarrierInfo : PBCodable

{
    int _dlBandwidth;
    unsigned int _dlEarfcn;
    unsigned int _dlRfBand;
    struct {
        unsigned int dlBandwidth:1;
        unsigned int dlEarfcn:1;
        unsigned int dlRfBand:1;
    } _has;
}

@property (nonatomic) _Bool hasDlEarfcn;
@property (nonatomic) unsigned int dlEarfcn;
@property (nonatomic) _Bool hasDlBandwidth;
@property (nonatomic) int dlBandwidth;
@property (nonatomic) _Bool hasDlRfBand;
@property (nonatomic) unsigned int dlRfBand;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dlBandwidthAsString:(int)arg1;
- (int)StringAsDlBandwidth:(id)arg1;

@end
