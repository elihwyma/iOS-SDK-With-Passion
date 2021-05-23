/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCAccountUtilities : NSObject

{
    NSObject<OS_dispatch_queue> *_signInQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue;

+ (id)accountDataclassesForBundleID:(id)arg1;
+ (id)appStoreAccountIdentifierForPersona:(id)arg1;
+ (_Bool)hasManagedAccountOfDataclasses:(id)arg1;

- (id)init;
- (_Bool)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id *)arg4;
- (_Bool)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id *)arg4;
- (void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 baseViewController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
