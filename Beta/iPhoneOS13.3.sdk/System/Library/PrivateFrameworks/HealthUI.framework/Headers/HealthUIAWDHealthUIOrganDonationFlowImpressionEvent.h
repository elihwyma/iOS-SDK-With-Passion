/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <ProtocolBuffer/PBCodable.h>

@interface HealthUIAWDHealthUIOrganDonationFlowImpressionEvent : PBCodable

{
    unsigned long long _timestamp;
    int _sourceOfFlowImpression;
    struct {
        unsigned int timestamp:1;
        unsigned int sourceOfFlowImpression:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSourceOfFlowImpression;
@property (nonatomic) int sourceOfFlowImpression;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceOfFlowImpressionAsString:(int)arg1;
- (int)StringAsSourceOfFlowImpression:(id)arg1;

@end
