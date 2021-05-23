/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBasePlayer.h>

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer

{
    CDStruct_1b6d18a9 _videoDuration;
    double _smoothedVelocity;
    _Bool _touching;
    _Bool __active;
    _Bool __seeking;
    float __playRate;
    double _force;
    ISDisplayLink *__displayLink;
}

@property (nonatomic, setter=_setActive:) _Bool _active;
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink;
@property (nonatomic, getter=_isSeeking, setter=_setSeeking:) _Bool _seeking;
@property (nonatomic, setter=_setPlayRate:) float _playRate;
@property (nonatomic, getter=isTouching) _Bool touching;
@property (nonatomic) double force;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (void)_update;
- (void)statusDidChange;
- (void)setPlayerItem:(id)arg1;
- (void)didPerformChanges;
- (void)_updatePlayer;
- (void)_seekVideoToBeginning;
- (void)_seekVideoToEnd;
- (void)_handleDidFinishSeeking:(_Bool)arg1;

@end
