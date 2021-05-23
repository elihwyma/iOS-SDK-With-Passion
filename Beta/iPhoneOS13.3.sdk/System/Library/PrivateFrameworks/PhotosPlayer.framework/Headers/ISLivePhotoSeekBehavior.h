/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBehavior.h>

__attribute__((visibility("hidden")))
@interface ISLivePhotoSeekBehavior : ISBehavior

{
    _Bool _isSeeking;
    _Bool _needsSeek;
    _Bool _needsTransitionToVideo;
    CDUnknownBlockType _seekCompletionHandler;
    CDStruct_1b6d18a9 _seekTime;
}

@property (nonatomic) CDStruct_1b6d18a9 seekTime;
@property (copy, nonatomic) CDUnknownBlockType seekCompletionHandler;

- (long long)behaviorType;
- (void)activeDidChange;
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2;
- (void)_seekIfNeeded;
- (void)_callSeekCompletionHandler:(_Bool)arg1;
- (void)_handleDidSeekToSeekTime:(_Bool)arg1;

@end
