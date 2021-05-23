/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable

{
    NSMutableArray *_heroImages;
}

@property (retain, nonatomic) NSMutableArray *heroImages;

+ (Class)heroImagesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addHeroImages:(id)arg1;
- (unsigned long long)heroImagesCount;
- (void)clearHeroImages;
- (id)heroImagesAtIndex:(unsigned long long)arg1;

@end
