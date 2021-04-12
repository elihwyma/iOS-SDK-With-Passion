//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAAuthenticateRequest : AARequest
{
    NSString *_username;
    NSString *_password;
    NSString *_authToken;
    ACAccount *_account;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)urlCredential;
- (id)urlString;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

