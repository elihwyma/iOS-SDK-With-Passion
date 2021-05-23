/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSData, NSMutableArray, NSString;

@interface CKDPShare : PBCodable

{
    NSString *_displayedHostname;
    NSString *_etag;
    NSMutableArray *_invitedKeyToRemoves;
    CKDPProtectionInfo *_invitedPcs;
    NSString *_origin;
    NSMutableArray *_participants;
    NSMutableArray *_potentialMatchs;
    int _publicAccess;
    int _publisherModelType;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
    NSData *_shortTokenHash;
    NSString *_shortTokenRoutingKey;
    _Bool _anonymousPublicAccess;
    _Bool _publisherModel;
    struct {
        unsigned int publicAccess:1;
        unsigned int publisherModelType:1;
        unsigned int anonymousPublicAccess:1;
        unsigned int publisherModel:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic) _Bool hasPublicAccess;
@property (nonatomic) int publicAccess;
@property (nonatomic, readonly) _Bool hasInvitedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *invitedPcs;
@property (nonatomic, readonly) _Bool hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs;
@property (retain, nonatomic) NSMutableArray *participants;
@property (nonatomic, readonly) _Bool hasShortTokenRoutingKey;
@property (retain, nonatomic) NSString *shortTokenRoutingKey;
@property (retain, nonatomic) NSMutableArray *potentialMatchs;
@property (retain, nonatomic) NSMutableArray *invitedKeyToRemoves;
@property (nonatomic) _Bool hasPublisherModel;
@property (nonatomic) _Bool publisherModel;
@property (nonatomic) _Bool hasAnonymousPublicAccess;
@property (nonatomic) _Bool anonymousPublicAccess;
@property (nonatomic, readonly) _Bool hasDisplayedHostname;
@property (retain, nonatomic) NSString *displayedHostname;
@property (nonatomic) _Bool hasPublisherModelType;
@property (nonatomic) int publisherModelType;
@property (nonatomic, readonly) _Bool hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (nonatomic, readonly) _Bool hasOrigin;
@property (retain, nonatomic) NSString *origin;

+ (Class)participantType;
+ (Class)potentialMatchType;
+ (Class)invitedKeyToRemoveType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addParticipant:(id)arg1;
- (unsigned long long)potentialMatchsCount;
- (id)_publicAccessCKLogValue;
- (void)addPotentialMatch:(id)arg1;
- (void)addInvitedKeyToRemove:(id)arg1;
- (unsigned long long)participantsCount;
- (void)clearParticipants;
- (id)participantAtIndex:(unsigned long long)arg1;
- (void)clearPotentialMatchs;
- (id)potentialMatchAtIndex:(unsigned long long)arg1;
- (unsigned long long)invitedKeyToRemovesCount;
- (void)clearInvitedKeyToRemoves;
- (id)invitedKeyToRemoveAtIndex:(unsigned long long)arg1;
- (id)publicAccessAsString:(int)arg1;
- (int)StringAsPublicAccess:(id)arg1;
- (id)publisherModelTypeAsString:(int)arg1;
- (int)StringAsPublisherModelType:(id)arg1;

@end
