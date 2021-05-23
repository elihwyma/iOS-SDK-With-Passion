/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class AAFamilyMember, NSArray, NSString;

@interface AAFamilyDetailsResponse : AAResponse

{
    NSArray *_members;
    _Bool _canAddMembers;
    _Bool _canAddChildMembers;
    AAFamilyMember *_organizer;
    AAFamilyMember *_me;
    NSArray *_invites;
    NSArray *_pendingMembers;
    NSString *_addMemberInstructions;
    NSString *_childAccountPrompt;
    NSString *_childAccountButtonTitle;
}

@property (nonatomic, readonly) NSArray *members;
@property (nonatomic, readonly) AAFamilyMember *organizer;
@property (nonatomic, readonly) AAFamilyMember *me;
@property (nonatomic, readonly) NSArray *invites;
@property (nonatomic, readonly) NSArray *pendingMembers;
@property (nonatomic, readonly) long long memberCount;
@property (nonatomic, readonly) long long pendingMemberCount;
@property (nonatomic, readonly) long long pendingInviteCount;
@property (nonatomic, readonly) _Bool canAddMembers;
@property (nonatomic, readonly) _Bool canAddChildMembers;
@property (nonatomic, readonly) NSString *addMemberInstructions;
@property (nonatomic, readonly) NSString *childAccountPrompt;
@property (nonatomic, readonly) NSString *childAccountButtonTitle;
@property (nonatomic, readonly) NSArray *firstNames;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
