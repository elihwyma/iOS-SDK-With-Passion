/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, CKRecord, CKRecordID, CKRecordZone, CKShare, CKShareParticipant, CKUserIdentity, NSArray, NSData, NSString;

@interface CKShareMetadata : NSObject

{
    _Bool _acceptedInProcess;
    NSString *_containerIdentifier;
    CKShare *_share;
    CKRecordID *_rootRecordID;
    long long _participantRole;
    long long _participantStatus;
    long long _participantPermission;
    CKUserIdentity *_ownerIdentity;
    CKRecord *_rootRecord;
    long long _environment;
    NSData *_protectedFullToken;
    NSData *_publicToken;
    NSData *_privateToken;
    CKRecordZone *_sharedZone;
    CKShareParticipant *_callingParticipant;
    NSArray *_outOfNetworkMatches;
    NSArray *_sharedItemHierarchyIDs;
    NSString *_rootRecordType;
    NSData *_encryptedData;
    CKDeviceToDeviceShareInvitationToken *_invitationToken;
}

@property (nonatomic) long long environment;
@property (copy, nonatomic) NSData *protectedFullToken;
@property (copy, nonatomic) NSData *publicToken;
@property (nonatomic, readonly, getter=baseToken) NSString *baseToken;
@property (copy, nonatomic) NSData *privateToken;
@property (retain, nonatomic) CKRecordZone *sharedZone;
@property (copy, nonatomic) CKShareParticipant *callingParticipant;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) CKShare *share;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantPermission;
@property (retain, nonatomic) CKUserIdentity *ownerIdentity;
@property (retain, nonatomic) NSArray *outOfNetworkMatches;
@property (copy, nonatomic) CKRecordID *rootRecordID;
@property (retain, nonatomic) CKRecord *rootRecord;
@property (copy, nonatomic) NSArray *sharedItemHierarchyIDs;
@property (retain, nonatomic) NSString *rootRecordType;
@property (nonatomic) _Bool acceptedInProcess;
@property (retain, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (nonatomic, readonly) long long participantType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)CKAssignToContainerWithID:(id)arg1;

@end
