/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKDPRecordStableUrl : PBCodable

{
    NSString *_displayedHostname;
    NSData *_encryptedPublicSharingKey;
    NSData *_protectedFullToken;
    NSString *_routingKey;
    NSData *_shortTokenHash;
}

@property (nonatomic, readonly) _Bool hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (nonatomic, readonly) _Bool hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (nonatomic, readonly) _Bool hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (nonatomic, readonly) _Bool hasEncryptedPublicSharingKey;
@property (retain, nonatomic) NSData *encryptedPublicSharingKey;
@property (nonatomic, readonly) _Bool hasDisplayedHostname;
@property (retain, nonatomic) NSString *displayedHostname;

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
