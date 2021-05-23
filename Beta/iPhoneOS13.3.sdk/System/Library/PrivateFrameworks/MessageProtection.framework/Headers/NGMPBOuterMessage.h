/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBOuterMessage : PBCodable

{
    NSData *_encryptedPayload;
    NSData *_ephemeralPubKey;
    NSData *_keyValidator;
    NSData *_signature;
}

@property (retain, nonatomic) NSData *encryptedPayload;
@property (retain, nonatomic) NSData *ephemeralPubKey;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic, readonly) _Bool hasKeyValidator;
@property (retain, nonatomic) NSData *keyValidator;

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
