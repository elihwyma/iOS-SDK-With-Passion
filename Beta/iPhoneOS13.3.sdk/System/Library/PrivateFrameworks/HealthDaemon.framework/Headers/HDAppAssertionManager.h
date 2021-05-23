/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSMutableArray, NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface HDAppAssertionManager : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appAssertions;
    NSMutableSet *_activeAssertions;
    NSMutableArray *_pendingAssertions;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *appAssertions;
@property (retain, nonatomic) NSMutableSet *activeAssertions;
@property (retain, nonatomic) NSMutableArray *pendingAssertions;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (void)_queue_extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_considerLaunchingApp;
- (void)_queue_invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (id)_queue_pendingAssertionsReadyForLaunch;
- (void)_queue_retryAppLaunchForAssertion:(id)arg1;
- (void)_queue_assertionDidFinish:(id)arg1;

@end
