/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest

{
    NSString *_newFirstName;
    NSString *_newLastName;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;

@end
