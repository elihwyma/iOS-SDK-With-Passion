/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest

{
    ACAccount *_account;
    NSString *_authToken;
}

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authToken;

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;
- (id)urlCredential;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1 token:(id)arg2;

@end
