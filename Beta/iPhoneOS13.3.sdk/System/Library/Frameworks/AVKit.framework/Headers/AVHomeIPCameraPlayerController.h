/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVPlayerController.h>

@protocol AVHomeIPCameraActionButtonHandling;

__attribute__((visibility("hidden")))
@interface AVHomeIPCameraPlayerController : AVPlayerController

{
    _Bool _muted;
    id <AVHomeIPCameraActionButtonHandling> _delegate;
    struct CGSize _presentationSize;
}

@property (weak, nonatomic) id <AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) struct CGSize presentationSize;
@property (nonatomic, getter=isMuted) _Bool muted;

- (long long)status;
- (void)setVolume:(double)arg1;
- (_Bool)isPlaying;
- (_Bool)hasContent;
- (long long)timeControlStatus;
- (_Bool)hasSeekableLiveStreamingContent;
- (_Bool)hasLiveStreamingContent;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (_Bool)hasEnabledVideo;
- (_Bool)isPictureInPicturePossible;

@end
