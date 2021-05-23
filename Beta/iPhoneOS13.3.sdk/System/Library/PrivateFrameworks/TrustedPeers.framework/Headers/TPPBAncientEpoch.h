/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <ProtocolBuffer/PBCodable.h>

@interface TPPBAncientEpoch : PBCodable

{
    unsigned long long _candidateEpoch;
    unsigned long long _myEpoch;
    struct {
        unsigned int candidateEpoch:1;
        unsigned int myEpoch:1;
    } _has;
}

@property (nonatomic) _Bool hasMyEpoch;
@property (nonatomic) unsigned long long myEpoch;
@property (nonatomic) _Bool hasCandidateEpoch;
@property (nonatomic) unsigned long long candidateEpoch;

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
