/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, CKRecordID, CKUserIdentity, NSData, NSString;

@interface CKShareParticipant : NSObject

{
    _Bool _isCurrentUser;
    _Bool _isOrgAdminUser;
    _Bool _createdInProcess;
    _Bool _acceptedInProcess;
    _Bool _wantsNewInvitationToken;
    CKUserIdentity *_userIdentity;
    long long _role;
    long long _acceptanceStatus;
    long long _permission;
    long long _mutableInvitationTokenStatus;
    NSString *_participantID;
    CKRecordID *_shareRecordID;
    NSString *_inviterID;
    long long _originalParticipantRole;
    long long _originalAcceptanceStatus;
    long long _originalPermission;
    NSData *_protectionInfo;
    NSData *_protectionInfoPublicKey;
    NSData *_encryptedPersonalInfo;
    CKDeviceToDeviceShareInvitationToken *_invitationToken;
}

@property (nonatomic) long long mutableInvitationTokenStatus;
@property (retain, nonatomic) CKUserIdentity *userIdentity;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (nonatomic) _Bool isCurrentUser;
@property (nonatomic) _Bool isOrgAdminUser;
@property (retain, nonatomic) NSString *inviterID;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long originalParticipantRole;
@property (nonatomic) long long originalAcceptanceStatus;
@property (nonatomic) long long originalPermission;
@property (nonatomic) _Bool createdInProcess;
@property (nonatomic) _Bool acceptedInProcess;
@property (retain, nonatomic) NSData *protectionInfo;
@property (retain, nonatomic) NSData *protectionInfoPublicKey;
@property (retain, nonatomic) NSData *encryptedPersonalInfo;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (nonatomic, readonly) long long invitationTokenStatus;
@property (nonatomic) _Bool wantsNewInvitationToken;
@property (nonatomic) long long role;
@property (nonatomic) long long type;
@property (nonatomic) long long permission;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)_stripPersonalInfo;
- (id)_initWithUserIdentity:(id)arg1;
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;

@end
