/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class _SFIdentity;

@interface _SFKeychainIdentityFetchResult : _SFKeychainFetchResult

{
    id _identityFetchResult;
}

@property (readonly) _SFIdentity *value;

- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
