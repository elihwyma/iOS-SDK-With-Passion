/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCThreadSafeMutableDictionary, FCThreadSafeMutableSet, NSString;

@protocol FCAssetKeyCacheType, FCAssetKeyManagerDelegate, FCAssetKeyServiceType, FCOperationThrottler;

@interface FCAssetKeyManager : NSObject <Swift>

{
    id <FCAssetKeyServiceType> _service;
    id <FCAssetKeyCacheType> _cache;
    id <FCAssetKeyManagerDelegate> _delegate;
    id <FCOperationThrottler> _throttler;
    FCThreadSafeMutableSet *_pendingWrappingKeyIDs;
    FCThreadSafeMutableDictionary *_errorsByKey;
}

@property (nonatomic, readonly) id <FCAssetKeyServiceType> service;
@property (nonatomic, readonly) id <FCAssetKeyCacheType> cache;
@property (weak, nonatomic, readonly) id <FCAssetKeyManagerDelegate> delegate;
@property (nonatomic, readonly) id <FCOperationThrottler> throttler;
@property (nonatomic, readonly) FCThreadSafeMutableSet *pendingWrappingKeyIDs;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *errorsByKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)clearUnauthorizedAssetKeys;
- (_Bool)_canRetryAfterNetworkError:(id)arg1;
- (id)cachedWrappingKeyWithID:(id)arg1;
- (void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eraseAllKeys;
- (id)initWithService:(id)arg1 cache:(id)arg2 delegate:(id)arg3;

@end
