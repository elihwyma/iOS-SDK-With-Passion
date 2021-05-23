/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class RMSPairingCredentialsMessage;

__attribute__((visibility("hidden")))
@interface RMSPairingChallengeRequestMessage : PBCodable

{
    RMSPairingCredentialsMessage *_pairingCredentials;
    int _sessionIdentifier;
    CDStruct_07a29e00 _has;
}

@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic, readonly) _Bool hasPairingCredentials;
@property (retain, nonatomic) RMSPairingCredentialsMessage *pairingCredentials;

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
