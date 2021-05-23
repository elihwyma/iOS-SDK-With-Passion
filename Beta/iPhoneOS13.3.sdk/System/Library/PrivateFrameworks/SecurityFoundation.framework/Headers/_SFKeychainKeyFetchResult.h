/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class _SFSymmetricKey;

@interface _SFKeychainKeyFetchResult : _SFKeychainFetchResult

{
    id _keyFetchResult;
}

@property (readonly) _SFSymmetricKey *value;

- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
