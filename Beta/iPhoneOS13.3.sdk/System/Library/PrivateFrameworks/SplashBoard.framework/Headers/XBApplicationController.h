/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject

{
    FBSDisplayConfiguration *_mainDisplayConfiguration;
    long long _statusBarOrientation;
}

@property (getter=_statusBarOrientation, setter=_setStatusBarOrientation:) long long statusBarOrientation;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_deleteLegacyCachesSnapshotPathsIfNeeded;
- (void)_migrateDataIfNeeded;
- (void)_updateStatusBarOrientation;
- (void)removeAllGeneratedLaunchImages;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (id)allSplashBoardApplications;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(_Bool)arg3;
- (id)_allApplications;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(_Bool)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (id)allSplashBoardSystemApplications;
- (void)resetEverything;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2;

@end
