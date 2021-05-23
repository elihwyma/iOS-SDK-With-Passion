/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSString;

@interface FMOwnerAccount : NSObject

{
    _Bool _legacyBehavior;
    NSString *_authToken;
    NSString *_hostName;
    ACAccount *_account;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_personId;
}

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *personId;
@property (nonatomic) _Bool legacyBehavior;
@property (copy, nonatomic, readonly) NSString *authToken;

+ (id)sharedInstance;
+ (id)primaryAccountWithStore:(id)arg1 error:(id *)arg2;
+ (id)personIdForAccount:(id)arg1 error:(id *)arg2;
+ (id)subAccountForAccount:(id)arg1 type:(long long)arg2;
+ (id)authTokenForSubAccount:(id)arg1 type:(long long)arg2 error:(id *)arg3;
+ (id)hostNameForAccount:(id)arg1 type:(long long)arg2;
+ (id)ownerAccount;
+ (id)ownerAccountWithType:(long long)arg1;
+ (void)renewCredentialsWithBundleId:(id)arg1 force:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)accountChanged;
- (void)initializeAccount;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2;
- (id)tokenOfType:(long long)arg1;
- (id)hostNameOfType:(long long)arg1;

@end
