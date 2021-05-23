/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVPlayer;

@protocol SVTimeConverting, SVVideoPlaybackStateObserving;

@interface SVVideoPeriodicTimeObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    SVPlayer *_player;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVTimeConverting> _timeConverter;
    id _timeObserverToken;
    double _time;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (nonatomic, readonly) id <SVVideoPlaybackStateObserving> playbackStateObserver;
@property (nonatomic, readonly) id <SVTimeConverting> timeConverter;
@property (retain, nonatomic) id timeObserverToken;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (void)dealloc;
- (void)updateTime:(CDStruct_198678f7)arg1;
- (void)startPeriodicTimeObserverForPlayer:(id)arg1;
- (void)stopPeriodicTimeObserverForPlayer:(id)arg1;
- (id)initWithPlayer:(id)arg1 playbackStateObserver:(id)arg2 timeConverter:(id)arg3;

@end
