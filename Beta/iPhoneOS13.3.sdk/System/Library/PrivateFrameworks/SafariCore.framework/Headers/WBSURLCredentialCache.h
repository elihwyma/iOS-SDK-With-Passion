/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol OS_dispatch_queue;

@interface WBSURLCredentialCache : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_credentialCache;
    CDUnknownBlockType _credentialFetchBlock;
}

@property (copy, readonly) NSDictionary *credentials;

- (void)invalidate;
- (id)initWithCredentialFetchBlock:(CDUnknownBlockType)arg1;
- (id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(CDUnknownBlockType)arg2;
- (void)getCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
