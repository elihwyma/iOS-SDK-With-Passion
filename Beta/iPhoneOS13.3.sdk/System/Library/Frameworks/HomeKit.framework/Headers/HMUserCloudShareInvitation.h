/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, HMHome, HMUser, NSString, NSURL;

@interface HMUserCloudShareInvitation : NSObject

{
    NSURL *_shareURL;
    CKDeviceToDeviceShareInvitationToken *_shareToken;
    NSString *_containerID;
    HMHome *_home;
    HMUser *_user;
    HMUser *_fromUser;
}

@property (readonly) NSURL *shareURL;
@property (readonly) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly) NSString *containerID;
@property (readonly) HMHome *home;
@property (readonly) HMUser *user;
@property (readonly) HMUser *fromUser;

- (id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6;

@end
