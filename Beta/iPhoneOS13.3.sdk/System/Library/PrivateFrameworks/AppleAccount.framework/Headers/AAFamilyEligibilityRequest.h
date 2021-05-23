/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAFamilyRequest.h>

@class SSAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest

{
    SSAccount *_iTunesAccount;
}

@property (retain, nonatomic) SSAccount *iTunesAccount;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;

@end
