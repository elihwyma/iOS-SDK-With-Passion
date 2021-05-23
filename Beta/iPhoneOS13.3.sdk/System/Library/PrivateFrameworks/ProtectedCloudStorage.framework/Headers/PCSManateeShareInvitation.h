/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSManateeShareInvitation : PBCodable

{
    NSData *_exportedPCSData;
    NSData *_shareePublicKeyData;
}

@property (nonatomic, readonly) _Bool hasExportedPCSData;
@property (retain, nonatomic) NSData *exportedPCSData;
@property (nonatomic, readonly) _Bool hasShareePublicKeyData;
@property (retain, nonatomic) NSData *shareePublicKeyData;

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
