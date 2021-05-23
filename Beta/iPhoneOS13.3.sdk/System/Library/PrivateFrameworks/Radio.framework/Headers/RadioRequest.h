/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Foundation/NSObject.h>

@class NSDictionary, RadioRequestContext;

@protocol OS_dispatch_queue;

@interface RadioRequest : NSObject

{
    _Bool _cachedResponse;
    long long _errorCode;
    NSObject<OS_dispatch_queue> *_queue;
    RadioRequestContext *_requestContext;
    double _retryInterval;
    long long _status;
    NSDictionary *_unparsedResponseDictionary;
    _Bool _asynchronousBackgroundRequest;
}

@property (nonatomic, getter=isAsynchronousBackgroundRequest) _Bool asynchronousBackgroundRequest;
@property (readonly, getter=isCachedResponse) _Bool cachedResponse;
@property (copy) RadioRequestContext *requestContext;
@property (readonly) long long status;
@property (readonly) long long errorCode;
@property (readonly) double retryInterval;
@property (copy, readonly) NSDictionary *unparsedResponseDictionary;

+ (id)defaultURLCache;
+ (void)loadServiceConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)setStatus:(long long)arg1;
- (void)setCachedResponse:(_Bool)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setRetryInterval:(double)arg1;
- (void)_loadRadioStoreBagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_loadRadioStoreBagAndAllowRetry:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setUnparsedResponseDictionary:(id)arg1;

@end
