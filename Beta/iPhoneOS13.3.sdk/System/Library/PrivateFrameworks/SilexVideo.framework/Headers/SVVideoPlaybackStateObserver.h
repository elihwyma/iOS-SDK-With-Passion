/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NSError, NSString;

@protocol SVPlayerStatusObserving, SVPlayerTimeControlStatusObserving, SVVideoPlaybackPositionObserving;

@interface SVVideoPlaybackStateObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    id <SVPlayerStatusObserving> _statusObserver;
    id <SVVideoPlaybackPositionObserving> _playbackPositionObserver;
    id <SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
    NFStateMachine *_stateMachine;
    unsigned long long _state;
    NSError *_error;
}

@property (nonatomic, readonly) id <SVPlayerStatusObserving> statusObserver;
@property (nonatomic, readonly) id <SVVideoPlaybackPositionObserving> playbackPositionObserver;
@property (nonatomic, readonly) id <SVPlayerTimeControlStatusObserving> timeControlStatusObserver;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithStatusObserver:(id)arg1 playbackPositionObserver:(id)arg2 timeControlStatusObserver:(id)arg3;

@end
