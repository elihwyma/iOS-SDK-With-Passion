/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <AVFoundation/AVPlayerItem.h>

@class AVMediaSelectionOption, TVImageProxy, TVPMediaItemLoader;

@interface TVPPlayerItem : AVPlayerItem

{
    _Bool _muted;
    _Bool _audioSelectionIsAutomatic;
    TVPMediaItemLoader *_mediaItemLoader;
    long long _previousStatus;
    TVImageProxy *_posterProxy;
    id _scrubImageLoader;
    AVMediaSelectionOption *_savedManualAudioSelection;
}

@property (nonatomic) _Bool audioSelectionIsAutomatic;
@property (retain, nonatomic) AVMediaSelectionOption *savedManualAudioSelection;
@property (weak, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (nonatomic) _Bool muted;
@property (nonatomic) long long previousStatus;
@property (retain, nonatomic) TVImageProxy *posterProxy;
@property (retain, nonatomic) id scrubImageLoader;

- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;

@end
