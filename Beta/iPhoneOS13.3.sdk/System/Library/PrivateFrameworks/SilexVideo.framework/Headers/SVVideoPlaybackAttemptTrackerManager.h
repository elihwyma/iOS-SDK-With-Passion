/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoEventTracker, SVVideoEventTrackerProviding, SVVideoPlaybackAttemptTrackerFactory, SVVideoPlaybackAttemptTracking;

@interface SVVideoPlaybackAttemptTrackerManager : NSObject

{
    id <SVVideoPlaybackAttemptTrackerFactory> _playbackAttemptTrackerFactory;
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
    id <SVVideoPlaybackAttemptTracking> _playbackAttemptTracker;
    id <SVVideoEventTracker> _eventTracker;
}

@property (nonatomic, readonly) id <SVVideoPlaybackAttemptTrackerFactory> playbackAttemptTrackerFactory;
@property (nonatomic, readonly) id <SVVideoEventTrackerProviding> eventTrackerProvider;
@property (retain, nonatomic) id <SVVideoPlaybackAttemptTracking> playbackAttemptTracker;
@property (retain, nonatomic) id <SVVideoEventTracker> eventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPlaybackAttemptTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2;

@end
