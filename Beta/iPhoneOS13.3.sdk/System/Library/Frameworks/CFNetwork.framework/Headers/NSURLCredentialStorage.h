/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject

{
    NSURLCredentialStorageInternal *_internal;
}

@property (nonatomic) _Bool _useSystemKeychain;
@property (copy, readonly) NSDictionary *allCredentials;

+ (id)sharedCredentialStorage;

- (id)init;
- (void)dealloc;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)credentialsForProtectionSpace:(id)arg1;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage *)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;
- (struct _CFURLCredentialStorage *)_CFURLCredentialStorage;
- (id)__allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(_Bool)arg2;
- (id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(_Bool)arg2;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;

@end
