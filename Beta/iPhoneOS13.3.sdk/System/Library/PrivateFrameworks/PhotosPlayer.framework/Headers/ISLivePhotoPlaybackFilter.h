/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISObservable.h>

@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable

{
    _Bool _playIsSticky;
    _Bool _isPerformingInputChanges;
    _Bool _playbackDisabled;
    double _hintProgress;
    long long _state;
    NSMutableSet *__playbackDisabledReasons;
}

@property (nonatomic, setter=_setPerformingInputChanges:) _Bool isPerformingInputChanges;
@property (nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) _Bool playbackDisabled;
@property (nonatomic, readonly) NSMutableSet *_playbackDisabledReasons;
@property (nonatomic, readonly) double hintProgress;
@property (nonatomic, readonly) long long state;
@property (nonatomic) _Bool playIsSticky;

- (id)init;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)_setState:(long long)arg1;
- (id)mutableChangeObject;
- (void)setPlaybackDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setHintProgress:(double)arg1;

@end
