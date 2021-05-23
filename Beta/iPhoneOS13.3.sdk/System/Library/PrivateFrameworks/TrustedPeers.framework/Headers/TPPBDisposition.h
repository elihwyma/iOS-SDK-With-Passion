/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <ProtocolBuffer/PBCodable.h>

@class TPPBAncientEpoch, TPPBDispositionDisallowedMachineID, TPPBDispositionDuplicateMachineID, TPPBPolicyProhibits, TPPBUnknownMachineID;

@interface TPPBDisposition : PBCodable

{
    TPPBAncientEpoch *_ancientEpoch;
    TPPBDispositionDisallowedMachineID *_disallowedMachineID;
    TPPBDispositionDuplicateMachineID *_duplicateMachineID;
    TPPBPolicyProhibits *_policyProhibits;
    TPPBUnknownMachineID *_unknownMachineID;
}

@property (nonatomic, readonly) _Bool hasAncientEpoch;
@property (retain, nonatomic) TPPBAncientEpoch *ancientEpoch;
@property (nonatomic, readonly) _Bool hasPolicyProhibits;
@property (retain, nonatomic) TPPBPolicyProhibits *policyProhibits;
@property (nonatomic, readonly) _Bool hasUnknownMachineID;
@property (retain, nonatomic) TPPBUnknownMachineID *unknownMachineID;
@property (nonatomic, readonly) _Bool hasDuplicateMachineID;
@property (retain, nonatomic) TPPBDispositionDuplicateMachineID *duplicateMachineID;
@property (nonatomic, readonly) _Bool hasDisallowedMachineID;
@property (retain, nonatomic) TPPBDispositionDisallowedMachineID *disallowedMachineID;

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
