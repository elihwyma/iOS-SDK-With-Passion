/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter

{
    _Bool _touchActive;
    long long __playbackRequestID;
    ISDisplayLink *__displayLink;
    NSDate *__playbackStartDate;
}

@property (nonatomic, setter=_setPlaybackReaquestID:) long long _playbackRequestID;
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink;
@property (retain, nonatomic, setter=_setPlaybackStartDate:) NSDate *_playbackStartDate;
@property (nonatomic, getter=isTouchActive) _Bool touchActive;

- (void)reset;
- (void)didPerformChanges;
- (long long)_nextPlaybackRequestID;
- (void)_handleDisplayLink;

@end
