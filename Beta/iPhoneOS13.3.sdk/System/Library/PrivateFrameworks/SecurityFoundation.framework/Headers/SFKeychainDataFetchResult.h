/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class SFKeychainData;

@interface SFKeychainDataFetchResult : _SFKeychainFetchResult

{
    id _dataFetchResult;
}

@property (readonly) SFKeychainData *value;

- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
