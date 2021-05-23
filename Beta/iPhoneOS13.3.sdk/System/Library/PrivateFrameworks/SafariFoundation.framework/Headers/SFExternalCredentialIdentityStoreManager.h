/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStoreManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (id)init;
- (id)_credentialIdentityStoreForBundleIdentifier:(id)arg1;
- (void)getPrimaryCredentialIdentityStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
