/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandaloneVerificationChannel : PBCodable

{
    NSString *_contactPoint;
    NSString *_identifier;
    NSString *_organizationName;
    NSString *_sourceAddress;
    int _type;
    NSString *_typeDescription;
    NSString *_typeDescriptionUnlocalized;
    _Bool _requiresUserInteraction;
    struct {
        unsigned int type:1;
        unsigned int requiresUserInteraction:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasTypeDescriptionUnlocalized;
@property (retain, nonatomic) NSString *typeDescriptionUnlocalized;
@property (nonatomic, readonly) _Bool hasTypeDescription;
@property (retain, nonatomic) NSString *typeDescription;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (nonatomic) _Bool hasRequiresUserInteraction;
@property (nonatomic) _Bool requiresUserInteraction;
@property (nonatomic, readonly) _Bool hasContactPoint;
@property (retain, nonatomic) NSString *contactPoint;
@property (nonatomic, readonly) _Bool hasSourceAddress;
@property (retain, nonatomic) NSString *sourceAddress;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
