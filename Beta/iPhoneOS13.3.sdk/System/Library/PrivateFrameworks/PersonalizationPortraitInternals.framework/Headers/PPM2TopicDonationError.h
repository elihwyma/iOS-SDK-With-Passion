/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PPM2TopicDonationError : PBCodable

{
    int _reason;
    struct {
        unsigned int reason:1;
    } _has;
}

@property (nonatomic) _Bool hasReason;
@property (nonatomic) int reason;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (int)StringAsReason:(id)arg1;

@end
