/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAppAssertionManager, HDProfile, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDAppAssertion : NSObject

{
    _Bool _invalidated;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_pendingDataTypeCodesToAnchors;
    double _lastLaunchAttempt;
    long long _launchErrorCount;
    HDProfile *_profile;
    HDAppAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingLaunchCompletions;
    NSMutableSet *_processAssertions;
    NSObject<OS_dispatch_source> *_processDeathSource;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) HDAppAssertionManager *assertionManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *pendingLaunchCompletions;
@property (retain, nonatomic) NSMutableSet *processAssertions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processDeathSource;
@property (nonatomic) _Bool invalidated;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *pendingDataTypeCodesToAnchors;
@property (nonatomic, readonly) double lastLaunchAttempt;
@property (nonatomic, readonly) double nextLaunchAttempt;
@property (nonatomic, readonly) long long launchErrorCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_queue_invalidate;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3 queue:(id)arg4;
- (void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateForDataType:(long long)arg1 anchor:(id)arg2;
- (void)launchWithCompletion:(CDUnknownBlockType)arg1;
- (id)launchBundleIdentifier;
- (void)_queue_acquireAssertionWithCompletion:(CDUnknownBlockType)arg1;

@end
