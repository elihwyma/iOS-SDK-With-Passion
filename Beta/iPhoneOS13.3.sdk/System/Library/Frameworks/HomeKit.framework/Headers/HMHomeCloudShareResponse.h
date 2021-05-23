/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class CKShareParticipant, HMUser, HMUserCloudShareClientInfo;

@interface HMHomeCloudShareResponse : NSObject

{
    CKShareParticipant *_participant;
    HMUser *_ownerUser;
    HMUserCloudShareClientInfo *_clientInfo;
}

@property (readonly) CKShareParticipant *participant;
@property (readonly) HMUser *ownerUser;
@property (readonly) HMUserCloudShareClientInfo *clientInfo;

- (id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3;

@end
