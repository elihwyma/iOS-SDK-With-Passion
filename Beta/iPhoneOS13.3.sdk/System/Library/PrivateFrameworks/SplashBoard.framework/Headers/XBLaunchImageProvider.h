/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol BSInvalidatable, OS_dispatch_queue;

@interface XBLaunchImageProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_blacklistedBundleIdentifiers;
    id <BSInvalidatable> _stateCaptureAssertion;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_addStateCaptureHandler;
- (void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(CDUnknownBlockType)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)createLaunchImageGeneratorWithContext:(id)arg1;
- (void)preheatServiceWithTimeout:(double)arg1;
- (_Bool)_isAppBlacklisted:(id)arg1;
- (void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 dataProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_blacklistApp:(id)arg1 forError:(id)arg2;
- (void)_clearBlacklistForApp:(id)arg1;

@end
