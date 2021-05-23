/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerProviding, SVVideoPlaybackSeekerFactory, SVVideoPlaybackSeeking, SVVideoQueueProviding, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoTimeProviderFactory, SVVideoTimeProviding, SVVideoVisiblePercentageManager, SVVisibilityReporting, SVVisiblePercentageReporting;

@interface SVVideoViewControllerContentTransitioningManager : NSObject

{
    id <SVVisibilityReporting> _visibilityReporter;
    id <SVVideoQueueProviding> _queueProvider;
    id <SVPlayerProviding> _playerProvider;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
    id <SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SVVideoTimeProviderFactory> _timeProviderFactory;
    id <SVVideoPlaybackSeekerFactory> _seekerFactory;
    id <SVVideoSkipLockObserving> _skipLockObserver;
    id <SVVideoTimeProviding> _timeProvider;
    id <SVVideoPlaybackSeeking> _seeker;
    id <SVVisiblePercentageReporting> _visibilityReporterForAppearingVideo;
    id <SVVisiblePercentageReporting> _visibilityReporterForDisappearingVideo;
}

@property (weak, nonatomic, readonly) id <SVVisibilityReporting> visibilityReporter;
@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) id <SVPlayerProviding> playerProvider;
@property (nonatomic, readonly) id <SVVideoVisiblePercentageManager> visiblePercentageManager;
@property (nonatomic, readonly) id <SVVideoSkipLockObserverFactory> skipLockObserverFactory;
@property (nonatomic, readonly) id <SVVideoTimeProviderFactory> timeProviderFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackSeekerFactory> seekerFactory;
@property (retain, nonatomic) id <SVVideoSkipLockObserving> skipLockObserver;
@property (retain, nonatomic) id <SVVideoTimeProviding> timeProvider;
@property (retain, nonatomic) id <SVVideoPlaybackSeeking> seeker;
@property (weak, nonatomic) id <SVVisiblePercentageReporting> visibilityReporterForAppearingVideo;
@property (weak, nonatomic) id <SVVisiblePercentageReporting> visibilityReporterForDisappearingVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)playerViewControllerDidCancelContentTransition:(id)arg1;
- (void)playerViewControllerWillCancelContentTransition:(id)arg1;
- (void)playerViewControllerDidCompleteContentTransition:(id)arg1;
- (void)playerViewControllerWillCompleteContentTransition:(id)arg1;
- (void)playerViewController:(id)arg1 didUpdateContentTransitionProgress:(double)arg2;
- (void)playerViewControllerWillBeginContentTransition:(id)arg1;
- (id)playerViewController:(id)arg1 playerForContentTransitionType:(long long)arg2;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)videoForContentTransitionType:(long long)arg1;
- (id)initWithVisiblePercentageManager:(id)arg1 visibilityReporter:(id)arg2 queueProvider:(id)arg3 playerProvider:(id)arg4 skipLockObserverFactory:(id)arg5 timeProviderFactory:(id)arg6 seekerFactory:(id)arg7;

@end
