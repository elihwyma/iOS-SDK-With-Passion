/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FADeclineFamilyInviteRequest : AAFamilyRequest

{
    NSString *_inviteCode;
}

@property (copy, nonatomic) NSString *inviteCode;

- (_Bool)isUserInitiated;
- (id)urlRequest;
- (id)urlString;

@end
