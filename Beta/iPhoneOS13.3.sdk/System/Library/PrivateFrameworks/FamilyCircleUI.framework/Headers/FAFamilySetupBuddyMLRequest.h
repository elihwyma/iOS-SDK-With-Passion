/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccount/AAFamilyRequest.h>

@class NSString, SSAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest

{
    SSAccount *_iTunesAccount;
    NSString *_inviteCode;
}

@property (retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount;
@property (copy, nonatomic) NSString *inviteCode;

- (_Bool)isUserInitiated;
- (id)urlRequest;
- (id)urlString;

@end
