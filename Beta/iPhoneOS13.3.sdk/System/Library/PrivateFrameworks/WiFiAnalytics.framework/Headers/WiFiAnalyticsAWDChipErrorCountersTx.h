/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDChipErrorCountersTx : PBCodable

{
    unsigned long long _txchanrej;
    unsigned long long _txexptime;
    unsigned long long _txphycrs;
    unsigned long long _txphyerr;
    unsigned long long _txuflo;
    struct {
        unsigned int txchanrej:1;
        unsigned int txexptime:1;
        unsigned int txphycrs:1;
        unsigned int txphyerr:1;
        unsigned int txuflo:1;
    } _has;
}

@property (nonatomic) _Bool hasTxuflo;
@property (nonatomic) unsigned long long txuflo;
@property (nonatomic) _Bool hasTxphyerr;
@property (nonatomic) unsigned long long txphyerr;
@property (nonatomic) _Bool hasTxphycrs;
@property (nonatomic) unsigned long long txphycrs;
@property (nonatomic) _Bool hasTxchanrej;
@property (nonatomic) unsigned long long txchanrej;
@property (nonatomic) _Bool hasTxexptime;
@property (nonatomic) unsigned long long txexptime;

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
