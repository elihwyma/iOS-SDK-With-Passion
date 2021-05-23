/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NSError, NSString;

@protocol SVVideoLoadingStateObserving, SVVideoPlaybackStateObserving;

@interface SVVideoPlaybackEventTracker : NSObject

{
    CDUnknownBlockType playbackStartBlock;
    CDUnknownBlockType playbackPausedBlock;
    CDUnknownBlockType playbackResumedBlock;
    CDUnknownBlockType playbackFinishedBlock;
    CDUnknownBlockType playbackFailedBlock;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    NFStateMachine *_stateMachine;
    NSError *_error;
}

@property (nonatomic, readonly) id <SVVideoPlaybackStateObserving> playbackStateObserver;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onPlaybackStart:) CDUnknownBlockType playbackStartBlock;
@property (copy, nonatomic, setter=onPlaybackPaused:) CDUnknownBlockType playbackPausedBlock;
@property (copy, nonatomic, setter=onPlaybackResumed:) CDUnknownBlockType playbackResumedBlock;
@property (copy, nonatomic, setter=onPlaybackFinished:) CDUnknownBlockType playbackFinishedBlock;
@property (copy, nonatomic, setter=onPlaybackFailed:) CDUnknownBlockType playbackFailedBlock;

- (id)initWithPlaybackStateObserver:(id)arg1 loadingStateObserver:(id)arg2;

@end
