/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDBackingAccount.h>

@class NSDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDBackingFakeAccount : CKDBackingAccount

{
    NSString *_dsid;
    NSString *_altDsid;
    NSString *_identifier;
    NSString *_primaryEmail;
    NSString *_password;
    NSDictionary *_accountBag;
    NSDictionary *_propertyOverrides;
    NSObject<OS_dispatch_queue> *_fakeAccountInfoQueue;
    NSDictionary *_overridesByDataclass;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *primaryEmail;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSString *altDsid;
@property (retain, nonatomic) NSDictionary *accountBag;
@property (retain, nonatomic) NSDictionary *propertyOverrides;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fakeAccountInfoQueue;
@property (retain, nonatomic) NSDictionary *overridesByDataclass;

+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;
+ (Class)_platformBackingAccountClass;

- (void)dealloc;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)fullName;
- (id)username;
- (id)personaIdentifier;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)displayedHostname;
- (_Bool)isDataclassEnabled:(id)arg1;
- (_Bool)isPrimaryEmailVerified;
- (_Bool)iCloudDriveAllowsCellularAccess;
- (_Bool)isFakeAccount;
- (id)accountPropertiesForDataclass:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_checkAndLogIfAccountError;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2;
- (id)ckAccount;

@end
