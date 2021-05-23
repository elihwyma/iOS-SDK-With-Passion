/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, VSAccount, VSOptional, VSPersistentStorage;

@interface VSIdentityProviderRequest : NSObject

{
    long long _type;
    NSString *_requestingAppDisplayName;
    NSString *_requestingAppAdamID;
    VSAccount *_account;
    VSPersistentStorage *_storage;
    VSOptional *_accountMetadataRequest;
    NSString *_accountProviderAuthenticationToken;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *requestingAppDisplayName;
@property (copy, nonatomic) NSString *requestingAppAdamID;
@property (retain, nonatomic) VSAccount *account;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSOptional *accountMetadataRequest;
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken;
@property (nonatomic, readonly) _Bool forceAuthentication;
@property (nonatomic, readonly) _Bool allowsUI;
@property (nonatomic, readonly) _Bool requiresUI;

+ (id)makeAccountRequestWithStorage:(id)arg1;
+ (id)deleteAccountRequestWithAccount:(id)arg1 storage:(id)arg2;
+ (id)silentMakeAccountRequestWithStorage:(id)arg1;
+ (id)accountMetadataRequestWithAccount:(id)arg1 storage:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4 requestingAppAdamID:(id)arg5 accountProviderAuthenticationToken:(id)arg6;
+ (id)STBOptOutRequestWithStorage:(id)arg1;

- (id)init;
- (id)description;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 storage:(id)arg3;

@end
