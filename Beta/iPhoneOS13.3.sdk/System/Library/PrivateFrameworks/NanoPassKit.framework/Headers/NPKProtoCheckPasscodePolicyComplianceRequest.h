/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@interface NPKProtoCheckPasscodePolicyComplianceRequest : PBRequest

{
    int _enforcedPolicy;
    _Bool _applyRestrictions;
    struct {
        unsigned int enforcedPolicy:1;
        unsigned int applyRestrictions:1;
    } _has;
}

@property (nonatomic) _Bool hasEnforcedPolicy;
@property (nonatomic) int enforcedPolicy;
@property (nonatomic) _Bool hasApplyRestrictions;
@property (nonatomic) _Bool applyRestrictions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)enforcedPolicyAsString:(int)arg1;
- (int)StringAsEnforcedPolicy:(id)arg1;

@end
