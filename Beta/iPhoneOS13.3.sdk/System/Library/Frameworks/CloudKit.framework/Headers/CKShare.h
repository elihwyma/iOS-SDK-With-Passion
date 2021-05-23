/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKRecord.h>

@class CKContainerID, CKRecordID, CKShareID, CKShareParticipant, NSArray, NSData, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface CKShare : CKRecord

{
    _Bool _encodeAllowsReadOnlyParticipantsToSeeEachOther;
    _Bool _allowsAnonymousPublicAccess;
    _Bool _serializePersonalInfo;
    long long _publicPermission;
    NSMutableSet *_addedParticipantIDs;
    NSMutableSet *_removedParticipantIDs;
    NSMutableArray *_lastFetchedParticipants;
    CKContainerID *_containerID;
    CKRecordID *_rootRecordID;
    NSMutableArray *_allParticipants;
    NSData *_invitedProtectionData;
    NSString *_invitedProtectionEtag;
    NSString *_previousInvitedProtectionEtag;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
    NSString *_previousPublicProtectionEtag;
    long long _participantVisibility;
    NSArray *_invitedKeysToRemove;
    CKShareID *_shareID;
}

@property (retain, nonatomic) NSMutableSet *addedParticipantIDs;
@property (retain, nonatomic) NSMutableSet *removedParticipantIDs;
@property (retain, nonatomic) NSMutableArray *lastFetchedParticipants;
@property (nonatomic) _Bool encodeAllowsReadOnlyParticipantsToSeeEachOther;
@property (retain, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) CKRecordID *rootRecordID;
@property (retain, nonatomic) NSMutableArray *allParticipants;
@property (retain, nonatomic) NSData *publicSharingIdentity;
@property (retain, nonatomic) NSData *invitedProtectionData;
@property (retain, nonatomic) NSString *invitedProtectionEtag;
@property (retain, nonatomic) NSString *previousInvitedProtectionEtag;
@property (retain, nonatomic) NSData *publicProtectionData;
@property (retain, nonatomic) NSString *publicProtectionEtag;
@property (retain, nonatomic) NSString *previousPublicProtectionEtag;
@property (copy, nonatomic) NSURL *mutableURL;
@property (nonatomic, readonly) _Bool isZoneWideShare;
@property (nonatomic) long long participantVisibility;
@property (nonatomic) _Bool allowsAnonymousPublicAccess;
@property (retain, nonatomic) NSArray *invitedKeysToRemove;
@property (nonatomic) _Bool serializePersonalInfo;
@property (copy, nonatomic) CKShareID *shareID;
@property (nonatomic) _Bool allowsReadOnlyParticipantsToSeeEachOther;
@property (nonatomic) long long publicPermission;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) CKShareParticipant *owner;
@property (nonatomic, readonly) CKShareParticipant *currentUserParticipant;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordZoneID:(id)arg1;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)copyWithOriginalValues;
- (id)encryptedPublicSharingKey;
- (_Bool)canHostServerURLInfo;
- (_Bool)hasEncryptedData;
- (void)setWantsPublicSharingKey:(_Bool)arg1;
- (void)_stripPersonalInfo;
- (id)shareURL;
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;
- (void)_commonCKShareInit;
- (void)_addOwnerParticipant;
- (void)_addParticipantBypassingChecks:(id)arg1;
- (void)_removePendingPrivateAndAdminParticipants;
- (void)_removeAllParticipants;
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (void)_removeParticipantBypassingChecks:(id)arg1;
- (_Bool)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;
- (_Bool)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;
- (id)addedParticipants;
- (id)removedParticipants;
- (void)resetFetchedParticipants;
- (void)registerFetchedParticipant:(id)arg1;
- (void)clearModifiedParticipants;
- (void)addParticipant:(id)arg1;
- (id)initWithRootRecord:(id)arg1;
- (id)_initWithShareRecordID:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (id)updateFromServerShare:(id)arg1;
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(_Bool)arg3 inContainer:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_copyWithoutPersonalInfo;
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
