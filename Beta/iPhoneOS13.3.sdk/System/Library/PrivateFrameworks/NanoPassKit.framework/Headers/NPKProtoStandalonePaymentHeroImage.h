/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NPKProtoStandalonePaymentHeroImage : PBCodable

{
    NSString *_identifier;
    NSData *_imageData;
    NSString *_imageHash;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasImageHash;
@property (retain, nonatomic) NSString *imageHash;
@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;

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
