/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, NSString;

@interface AAFamilyMemberDetailsUIRequest : AAFamilyRequest

{
    NSNumber *_memberDSID;
    NSString *_memberEmail;
}

@property (copy, nonatomic) NSNumber *memberDSID;
@property (copy, nonatomic) NSString *memberEmail;

- (_Bool)isUserInitiated;
- (id)urlRequest;
- (id)urlString;

@end
