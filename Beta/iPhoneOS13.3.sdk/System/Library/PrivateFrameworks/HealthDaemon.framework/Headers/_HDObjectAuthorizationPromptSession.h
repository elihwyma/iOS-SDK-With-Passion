/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject

{
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    _Bool _didStartTransaction;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
    CDUnknownBlockType _sessionCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType sessionCompletion;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long requestCount;
@property (copy, nonatomic, readonly) NSUUID *sessionIdentifier;

- (void)addRequest:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)sessionDescriptor;
- (void)beginPromptTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (void)endPromptTransactionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2;
- (void)beginPromptSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)timeoutExpired;

@end
