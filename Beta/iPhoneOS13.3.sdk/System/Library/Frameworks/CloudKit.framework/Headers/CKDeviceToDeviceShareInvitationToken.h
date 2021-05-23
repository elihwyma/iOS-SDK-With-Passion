/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData, NSURL;

@interface CKDeviceToDeviceShareInvitationToken : NSObject

{
    NSData *_sharingInvitationData;
    NSURL *_shareURL;
}

@property (retain, nonatomic) NSData *sharingInvitationData;
@property (retain, nonatomic) NSURL *shareURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2;
- (id)initWithSharingInvitationData:(id)arg1;

@end
