/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, ACAccount;

@interface AAFamilyRequest : AARequest

{
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
}

@property (nonatomic, readonly) _Bool isUserInitiated;

- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;
- (id)_familyGrandSlamSigner;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithGrandSlamSigner:(id)arg1;

@end
