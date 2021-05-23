/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoPeriodicTimeObserving, SVVideoPlaybackStateObserving, SVVideoTimeJumpObserving, SVVideoTimeProviding;

@interface SVVideoTimePlayedTracker : NSObject

{
    CDUnknownBlockType changeBlock;
    id <SVVideoPeriodicTimeObserving> _timeObserver;
    id <SVVideoTimeProviding> _timeProvider;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVVideoTimeJumpObserving> _timeJumpObserver;
    double _timePlayed;
}

@property (nonatomic, readonly) id <SVVideoPeriodicTimeObserving> timeObserver;
@property (nonatomic, readonly) id <SVVideoTimeProviding> timeProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackStateObserving> playbackStateObserver;
@property (nonatomic, readonly) id <SVVideoTimeJumpObserving> timeJumpObserver;
@property (nonatomic) double timePlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithTimeObserver:(id)arg1 timeProvider:(id)arg2 playbackStateObserver:(id)arg3 timeJumpObserver:(id)arg4;

@end
