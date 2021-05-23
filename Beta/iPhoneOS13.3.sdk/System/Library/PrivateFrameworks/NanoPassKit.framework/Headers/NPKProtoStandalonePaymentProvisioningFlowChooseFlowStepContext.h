/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext : PBCodable

{
    NSMutableArray *_sections;
}

@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (void)addSections:(id)arg1;

@end
