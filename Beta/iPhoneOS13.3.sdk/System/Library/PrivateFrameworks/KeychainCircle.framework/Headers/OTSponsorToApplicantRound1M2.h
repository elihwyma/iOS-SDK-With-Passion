/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound1M2 : PBCodable

{
    unsigned long long _epoch;
    struct {
        unsigned int epoch:1;
    } _has;
}

@property (nonatomic) _Bool hasEpoch;
@property (nonatomic) unsigned long long epoch;

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
