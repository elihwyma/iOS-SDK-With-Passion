/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TPPBPolicyProhibits : PBCodable

{
    unsigned long long _policyVersion;
    NSString *_candidateCategory;
    NSString *_explanation;
    NSString *_sponsorCategory;
    NSString *_sponsorId;
    struct {
        unsigned int policyVersion:1;
    } _has;
}

@property (nonatomic) _Bool hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (nonatomic, readonly) _Bool hasSponsorId;
@property (retain, nonatomic) NSString *sponsorId;
@property (nonatomic, readonly) _Bool hasSponsorCategory;
@property (retain, nonatomic) NSString *sponsorCategory;
@property (nonatomic, readonly) _Bool hasCandidateCategory;
@property (retain, nonatomic) NSString *candidateCategory;
@property (nonatomic, readonly) _Bool hasExplanation;
@property (retain, nonatomic) NSString *explanation;

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
