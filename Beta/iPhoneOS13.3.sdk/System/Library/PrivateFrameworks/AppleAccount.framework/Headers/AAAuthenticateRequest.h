/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAAuthenticateRequest : AARequest

{
    NSString *_username;
    NSString *_password;
    NSString *_authToken;
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *authToken;
@property (retain, nonatomic) ACAccount *account;

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)urlRequest;
- (id)urlString;
- (id)urlCredential;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;

@end
