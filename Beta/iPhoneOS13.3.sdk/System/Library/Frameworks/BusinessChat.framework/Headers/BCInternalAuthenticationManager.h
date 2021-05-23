/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, BCInternalAuthenticationRequest, NSString;

@interface BCInternalAuthenticationManager : NSObject

{
    BCInternalAuthenticationRequest *_authenticationRequest;
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) BCInternalAuthenticationRequest *authenticationRequest;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *middleName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) _Bool isUserSignedIn;

- (id)personIdentifier;
- (id)deviceSerialNumber;
- (id)initWithAuthenticationRequest:(id)arg1;
- (id)altPersonIdentifier;
- (id)globalAuthToken;
- (id)labelCategory;
- (void)fetchCredentials:(CDUnknownBlockType)arg1;

@end
