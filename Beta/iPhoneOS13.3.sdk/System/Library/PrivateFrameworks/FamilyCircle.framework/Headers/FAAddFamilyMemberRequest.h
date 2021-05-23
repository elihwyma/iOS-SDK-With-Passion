/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest

{
    _Bool _memberIsUnder13;
    NSString *_memberAppleID;
    NSString *_memberPassword;
}

@property (copy, readonly) NSString *memberAppleID;
@property (copy, readonly) NSString *memberPassword;
@property (readonly) _Bool memberIsUnder13;

- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(_Bool)arg3;

@end
