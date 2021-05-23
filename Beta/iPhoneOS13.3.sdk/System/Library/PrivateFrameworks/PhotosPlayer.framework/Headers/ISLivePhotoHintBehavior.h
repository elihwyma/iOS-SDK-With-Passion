/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBehavior.h>

__attribute__((visibility("hidden")))
@interface ISLivePhotoHintBehavior : ISBehavior

{
    _Bool _playDuringHint;
    _Bool __didFinishPreparing;
    _Bool __preparing;
    float _prerollRate;
    double __lastProgress;
    CDStruct_1b6d18a9 _seekTime;
}

@property (nonatomic, setter=_setDidFinishPreparing:) _Bool _didFinishPreparing;
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool _preparing;
@property (nonatomic, setter=_setLastProgress:) double _lastProgress;
@property (nonatomic, readonly) CDStruct_1b6d18a9 seekTime;
@property (nonatomic, readonly) float prerollRate;
@property (nonatomic, readonly) _Bool playDuringHint;

- (long long)behaviorType;
- (void)_prepareIfNeeded;
- (void)_seekToBeginning;
- (void)activeDidChange;
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2 prerollRate:(float)arg3 playDuringHint:(_Bool)arg4;
- (void)hintWithProgress:(float)arg1;
- (void)_handleDidSeekToBeginning;
- (void)_preroll;
- (void)_handleDidPreroll;
- (void)_handleDidFinishPreparing;

@end
