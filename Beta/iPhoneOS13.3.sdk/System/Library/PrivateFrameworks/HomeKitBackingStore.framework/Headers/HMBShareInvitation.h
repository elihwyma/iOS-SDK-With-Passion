/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class CKDeviceToDeviceShareInvitationToken, HMBCloudZoneID, HMBShareInvitationContext, NSDate, NSURL;

@interface HMBShareInvitation : HMFObject <Swift>

{
    HMBShareInvitationContext *_context;
    HMBCloudZoneID *_cloudZoneID;
    NSDate *_dateCreated;
    NSURL *_shareURL;
    CKDeviceToDeviceShareInvitationToken *_token;
}

@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) CKDeviceToDeviceShareInvitationToken *token;
@property (nonatomic, readonly) HMBShareInvitationContext *context;
@property (nonatomic, readonly) HMBCloudZoneID *cloudZoneID;
@property (nonatomic, readonly) NSDate *dateCreated;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4;
- (id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4 dateCreated:(id)arg5;

@end
