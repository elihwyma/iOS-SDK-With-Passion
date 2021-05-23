/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class CKShareParticipant, HMBShareInvitation, HMBShareUserID, NSString, NSUUID;

@interface HMBShareParticipant : HMFObject <Swift>

{
    NSUUID *_clientIdentifier;
    CKShareParticipant *_ckShareParticipant;
    HMBShareInvitation *_pendingInvitation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) CKShareParticipant *ckShareParticipant;
@property (copy) HMBShareInvitation *pendingInvitation;
@property (copy, readonly) NSUUID *clientIdentifier;
@property (copy, readonly) HMBShareUserID *cloudShareID;
@property (readonly) _Bool hasWriteAccess;
@property (readonly) _Bool hasAccepted;

+ (_Bool)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithCKShareParticipant:(id)arg1 clientIdentifier:(id)arg2;

@end
