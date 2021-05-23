/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <SafariCore/WBSURLCredentialCache.h>

@interface WBSLazyURLCredentialCache : WBSURLCredentialCache

- (void)invalidate;
- (id)credentials;
- (void)getCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
