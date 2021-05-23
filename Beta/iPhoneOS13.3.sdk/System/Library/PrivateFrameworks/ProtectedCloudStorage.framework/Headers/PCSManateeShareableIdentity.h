/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <ProtocolBuffer/PBCodable.h>

@class PCSManateePrivateKey;

__attribute__((visibility("hidden")))
@interface PCSManateeShareableIdentity : PBCodable

{
    PCSManateePrivateKey *_encryptionPrivateKey;
    PCSManateePrivateKey *_signingPrivateKey;
}

@property (nonatomic, readonly) _Bool hasEncryptionPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey;
@property (nonatomic, readonly) _Bool hasSigningPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *signingPrivateKey;

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
