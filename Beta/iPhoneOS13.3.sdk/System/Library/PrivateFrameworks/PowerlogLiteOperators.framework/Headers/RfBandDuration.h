/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface RfBandDuration : PBCodable

{
    unsigned int _durationMs;
    int _eutraRfBand;
    int _geraRfBand;
    int _rat;
    int _utraFddRfBand;
    int _utraTddRfBand;
    struct {
        unsigned int durationMs:1;
        unsigned int eutraRfBand:1;
        unsigned int geraRfBand:1;
        unsigned int rat:1;
        unsigned int utraFddRfBand:1;
        unsigned int utraTddRfBand:1;
    } _has;
}

@property (nonatomic) _Bool hasRat;
@property (nonatomic) int rat;
@property (nonatomic) _Bool hasGeraRfBand;
@property (nonatomic) int geraRfBand;
@property (nonatomic) _Bool hasUtraFddRfBand;
@property (nonatomic) int utraFddRfBand;
@property (nonatomic) _Bool hasUtraTddRfBand;
@property (nonatomic) int utraTddRfBand;
@property (nonatomic) _Bool hasEutraRfBand;
@property (nonatomic) int eutraRfBand;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)ratAsString:(int)arg1;
- (int)StringAsRat:(id)arg1;
- (id)geraRfBandAsString:(int)arg1;
- (int)StringAsGeraRfBand:(id)arg1;
- (id)utraFddRfBandAsString:(int)arg1;
- (int)StringAsUtraFddRfBand:(id)arg1;
- (id)utraTddRfBandAsString:(int)arg1;
- (int)StringAsUtraTddRfBand:(id)arg1;
- (id)eutraRfBandAsString:(int)arg1;
- (int)StringAsEutraRfBand:(id)arg1;

@end
