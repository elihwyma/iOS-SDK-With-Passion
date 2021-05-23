/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareAcceptRequest : PBRequest

{
    NSString *_etag;
    NSString *_participantId;
    CKDPProtectionInfo *_protectionInfo;
    CKDPProtectionInfo *_publicKey;
    int _publicKeyVersion;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
    _Bool _acceptedInProcess;
    struct {
        unsigned int publicKeyVersion:1;
        unsigned int acceptedInProcess:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs;
@property (nonatomic, readonly) _Bool hasPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo *publicKey;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, readonly) _Bool hasParticipantId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) _Bool hasPublicKeyVersion;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic) _Bool hasAcceptedInProcess;
@property (nonatomic) _Bool acceptedInProcess;

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
