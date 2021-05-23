/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLForegroundMonitor, PLPhotoAnalysisServiceClient;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLConstraintsDirector : NSObject

{
    _Bool _didTransitionToOpportunisticDisallowed;
    _Bool _photosAppInForeground;
    _Bool _cameraAppInForeground;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_bonusTimer;
    PLForegroundMonitor *_foregroundMonitor;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_photoanalysisdIsRunning;
+ (_Bool)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;

- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;
- (void)_disableAutoFGAndUserFGConstraints;
- (void)_addBonusTime;
- (id)initWithPhotoAnalysisClient:(id)arg1;
- (void)informOpportunisticTasksAllowed:(_Bool)arg1;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(_Bool)arg1;
- (void)informCameraAppForegroundState:(_Bool)arg1;
- (_Bool)shouldScheduleUserInitiatedAnalysisForAssets;

@end
