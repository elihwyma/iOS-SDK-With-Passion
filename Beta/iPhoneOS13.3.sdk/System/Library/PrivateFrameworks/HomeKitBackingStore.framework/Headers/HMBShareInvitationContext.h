/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class CKUserIdentityLookupInfo, NSUUID;

@interface HMBShareInvitationContext : HMFObject <Swift>

{
    _Bool _shouldGrantWriteAccess;
    NSUUID *_participantClientIdentifier;
    CKUserIdentityLookupInfo *_lookupInfo;
}

@property (readonly) CKUserIdentityLookupInfo *lookupInfo;
@property (copy, readonly) NSUUID *participantClientIdentifier;
@property _Bool shouldGrantWriteAccess;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2;

@end
