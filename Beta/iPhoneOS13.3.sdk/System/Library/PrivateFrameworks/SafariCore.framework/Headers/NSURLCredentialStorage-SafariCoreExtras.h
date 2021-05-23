/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <CFNetwork/NSURLCredentialStorage.h>

@class NSDictionary;

@interface NSURLCredentialStorage (SafariCoreExtras)

@property (nonatomic, readonly) NSDictionary *safari_allSafariCredentials;

- (void)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_deleteSynchronizableCredentialWithEmptyServerHost:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;

@end
