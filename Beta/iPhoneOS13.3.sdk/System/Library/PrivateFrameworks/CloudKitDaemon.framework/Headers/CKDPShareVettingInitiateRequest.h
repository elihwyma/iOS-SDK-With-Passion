/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPShareIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareVettingInitiateRequest : PBRequest

{
    NSString *_baseToken;
    NSData *_encryptedKey;
    NSString *_participantId;
    CKDPShareIdentifier *_shareId;
}

@property (nonatomic, readonly) _Bool hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (nonatomic, readonly) _Bool hasEncryptedKey;
@property (retain, nonatomic) NSData *encryptedKey;
@property (nonatomic, readonly) _Bool hasParticipantId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic, readonly) _Bool hasBaseToken;
@property (retain, nonatomic) NSString *baseToken;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
