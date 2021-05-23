/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface RMSPairingCredentialsMessage : PBCodable

{
    unsigned int _characterCount;
    int _requirementType;
    struct {
        unsigned int characterCount:1;
        unsigned int requirementType:1;
    } _has;
}

@property (nonatomic) _Bool hasRequirementType;
@property (nonatomic) int requirementType;
@property (nonatomic) _Bool hasCharacterCount;
@property (nonatomic) unsigned int characterCount;

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
