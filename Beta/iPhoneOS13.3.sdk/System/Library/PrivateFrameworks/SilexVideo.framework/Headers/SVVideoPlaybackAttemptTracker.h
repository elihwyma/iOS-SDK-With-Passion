/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerTimeControlStatusObserving, SVVideoLoadingStateObserving, SVVideoPlaybackPolicyObserving, SVVisibilityMonitoring;

@interface SVVideoPlaybackAttemptTracker : NSObject

{
    _Bool _attemptedPlayback;
    CDUnknownBlockType _playbackAttemptBlock;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    id <SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
    id <SVVideoPlaybackPolicyObserving> _playbackPolicyObserver;
    id <SVVisibilityMonitoring> _visibilityMonitor;
}

@property (nonatomic, readonly) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (nonatomic, readonly) id <SVPlayerTimeControlStatusObserving> timeControlStatusObserver;
@property (nonatomic, readonly) id <SVVideoPlaybackPolicyObserving> playbackPolicyObserver;
@property (nonatomic, readonly) id <SVVisibilityMonitoring> visibilityMonitor;
@property (nonatomic, getter=hasAttemptedPlayback) _Bool attemptedPlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onPlaybackAttempt:) CDUnknownBlockType playbackAttemptBlock;

- (id)initWithLoadingStateObserver:(id)arg1 timeControlStatusObserver:(id)arg2 playbackPolicyObserver:(id)arg3 visibilityMonitor:(id)arg4;

@end
