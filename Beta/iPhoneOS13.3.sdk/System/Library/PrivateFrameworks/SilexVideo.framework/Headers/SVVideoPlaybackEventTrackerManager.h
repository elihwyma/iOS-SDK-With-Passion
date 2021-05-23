/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol SVVideoEventTracker, SVVideoEventTrackerProviding, SVVideoPlaybackEventTrackerFactory, SVVideoPlaybackEventTracking;

@interface SVVideoPlaybackEventTrackerManager : NSObject

{
    id <SVVideoPlaybackEventTrackerFactory> _playbackEventTrackerFactory;
    id <SVVideoEventTrackerProviding> _videoEventTrackerProvider;
    id <SVVideoPlaybackEventTracking> _playbackEventTracker;
    id <SVVideoEventTracker> _eventTracker;
    NSMapTable *_playbackEventTrackers;
}

@property (nonatomic, readonly) id <SVVideoPlaybackEventTrackerFactory> playbackEventTrackerFactory;
@property (nonatomic, readonly) id <SVVideoEventTrackerProviding> videoEventTrackerProvider;
@property (retain, nonatomic) id <SVVideoPlaybackEventTracking> playbackEventTracker;
@property (retain, nonatomic) id <SVVideoEventTracker> eventTracker;
@property (nonatomic, readonly) NSMapTable *playbackEventTrackers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPlaybackEventTrackerFactory:(id)arg1 videoEventTrackerProvider:(id)arg2;

@end
