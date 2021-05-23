/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPResponse.h>

@class MPCMediaRemoteController, MPCPlayerPath, MPCPlayerResponseTracklist, UIView;

@protocol MPCPlayerResponseBuilder, MPCVideoView;

@interface MPCPlayerResponse : MPResponse

{
    MPCPlayerResponseTracklist *_tracklist;
    long long _state;
    MPCMediaRemoteController *_controller;
    MPCPlayerPath *_playerPath;
    UIView<MPCVideoView> *_videoView;
}

@property (nonatomic, readonly) id <MPCPlayerResponseBuilder> builder;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) UIView<MPCVideoView> *videoView;
@property (nonatomic, readonly) MPCPlayerResponseTracklist *tracklist;
@property (nonatomic, readonly) long long state;

+ (id)builderProtocol;

- (id)description;
- (id)pause;
- (id)stop;
- (id)play;
- (id)_stateDumpObject;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)arg1;

@end
