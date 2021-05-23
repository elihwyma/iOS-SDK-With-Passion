/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerStatusObserverFactory, SVPlayerTimeControlStatusObserverFactory, SVVideoPlaybackPositionObserverFactory;

@interface SVVideoPlaybackStateObserverFactory : NSObject

{
    id <SVPlayerStatusObserverFactory> _statusObserverFactory;
    id <SVVideoPlaybackPositionObserverFactory> _playbackPositionObserverFactory;
    id <SVPlayerTimeControlStatusObserverFactory> _timeControlStatusObserverFactory;
}

@property (nonatomic, readonly) id <SVPlayerStatusObserverFactory> statusObserverFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackPositionObserverFactory> playbackPositionObserverFactory;
@property (nonatomic, readonly) id <SVPlayerTimeControlStatusObserverFactory> timeControlStatusObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlaybackStateObserverForVideo:(id)arg1;
- (id)initWithStatusObserverFactory:(id)arg1 playbackPositionObserverFactory:(id)arg2 timeControlStatusObserverFactory:(id)arg3;

@end
