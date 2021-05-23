/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <SafariCore/WBSURLCredentialCache.h>

@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache

- (void)invalidate;
- (id)credentials;
- (id)initWithCredentialFetchBlock:(CDUnknownBlockType)arg1;
- (void)getCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
