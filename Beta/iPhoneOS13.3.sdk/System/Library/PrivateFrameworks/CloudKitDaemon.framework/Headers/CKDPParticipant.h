/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPContactInformation, CKDPDate, CKDPIdentifier, CKDPProtectionInfo, NSData;

@interface CKDPParticipant : PBCodable

{
    long long _acceptTimestamp;
    CKDPDate *_acceptedTimestampDate;
    CKDPContactInformation *_contactInformation;
    CKDPDate *_inviteTimestampDate;
    CKDPIdentifier *_inviterId;
    int _keyHealth;
    int _outOfNetworkKeyType;
    NSData *_outOfNetworkPrivateKey;
    CKDPIdentifier *_participantId;
    int _participantType;
    int _permission;
    CKDPProtectionInfo *_protectionInfo;
    NSData *_protectionInfoPublicKey;
    CKDPProtectionInfo *_publicKey;
    int _publicKeyVersion;
    int _state;
    CKDPIdentifier *_userId;
    _Bool _acceptedInProcess;
    _Bool _createdInProcess;
    _Bool _isInNetwork;
    _Bool _isOrgUser;
    struct {
        unsigned int acceptTimestamp:1;
        unsigned int keyHealth:1;
        unsigned int outOfNetworkKeyType:1;
        unsigned int participantType:1;
        unsigned int permission:1;
        unsigned int publicKeyVersion:1;
        unsigned int state:1;
        unsigned int acceptedInProcess:1;
        unsigned int createdInProcess:1;
        unsigned int isInNetwork:1;
        unsigned int isOrgUser:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasParticipantId;
@property (retain, nonatomic) CKDPIdentifier *participantId;
@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) CKDPIdentifier *userId;
@property (nonatomic, readonly) _Bool hasContactInformation;
@property (retain, nonatomic) CKDPContactInformation *contactInformation;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasParticipantType;
@property (nonatomic) int participantType;
@property (nonatomic) _Bool hasPermission;
@property (nonatomic) int permission;
@property (nonatomic, readonly) _Bool hasInviterId;
@property (retain, nonatomic) CKDPIdentifier *inviterId;
@property (nonatomic) _Bool hasCreatedInProcess;
@property (nonatomic) _Bool createdInProcess;
@property (nonatomic, readonly) _Bool hasPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo *publicKey;
@property (nonatomic) _Bool hasAcceptTimestamp;
@property (nonatomic) long long acceptTimestamp;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, readonly) _Bool hasOutOfNetworkPrivateKey;
@property (retain, nonatomic) NSData *outOfNetworkPrivateKey;
@property (nonatomic) _Bool hasOutOfNetworkKeyType;
@property (nonatomic) int outOfNetworkKeyType;
@property (nonatomic) _Bool hasPublicKeyVersion;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic) _Bool hasAcceptedInProcess;
@property (nonatomic) _Bool acceptedInProcess;
@property (nonatomic) _Bool hasIsInNetwork;
@property (nonatomic) _Bool isInNetwork;
@property (nonatomic, readonly) _Bool hasAcceptedTimestampDate;
@property (retain, nonatomic) CKDPDate *acceptedTimestampDate;
@property (nonatomic) _Bool hasIsOrgUser;
@property (nonatomic) _Bool isOrgUser;
@property (nonatomic, readonly) _Bool hasProtectionInfoPublicKey;
@property (retain, nonatomic) NSData *protectionInfoPublicKey;
@property (nonatomic) _Bool hasKeyHealth;
@property (nonatomic) int keyHealth;
@property (nonatomic, readonly) _Bool hasInviteTimestampDate;
@property (retain, nonatomic) CKDPDate *inviteTimestampDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;
- (id)permissionAsString:(int)arg1;
- (int)StringAsPermission:(id)arg1;
- (id)_participantTypeCKLogValue;
- (id)_stateCKLogValue;
- (id)_permissionCKLogValue;
- (id)participantTypeAsString:(int)arg1;
- (int)StringAsParticipantType:(id)arg1;
- (id)keyHealthAsString:(int)arg1;
- (int)StringAsKeyHealth:(id)arg1;

@end
