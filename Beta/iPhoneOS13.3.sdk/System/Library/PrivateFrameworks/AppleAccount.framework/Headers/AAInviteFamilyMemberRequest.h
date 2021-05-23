/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAInviteFamilyMemberRequest : AAFamilyRequest

{
    NSString *_inviteeEmail;
    NSString *_inviteeCompositeName;
    NSString *_inviteeShortName;
}

@property (copy, nonatomic) NSString *inviteeEmail;
@property (copy, nonatomic) NSString *inviteeCompositeName;
@property (copy, nonatomic) NSString *inviteeShortName;

- (_Bool)isUserInitiated;
- (id)urlRequest;
- (id)urlString;

@end
