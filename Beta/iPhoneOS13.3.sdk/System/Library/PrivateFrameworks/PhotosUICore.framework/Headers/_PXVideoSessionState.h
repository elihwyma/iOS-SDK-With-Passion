/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PXVideoSessionState : NSObject

{
    _Bool _loopingEnabled;
    _Bool _seekToBeginningAtEnd;
    _Bool _preventsSleepDuringVideoPlayback;
    _Bool _allowsExternalPlayback;
    _Bool _shouldFadeVolumeChange;
    float _volume;
    long long _desiredPlayState;
    NSString *_audioSessionCategory;
    unsigned long long _audioSessionCategoryOptions;
    CDStruct_e83c9415 _playbackTimeRange;
}

@property (copy, nonatomic, readonly) NSString *audioSessionCategory;
@property (nonatomic, readonly) unsigned long long audioSessionCategoryOptions;
@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) _Bool shouldFadeVolumeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_e83c9415 playbackTimeRange;
@property (nonatomic) _Bool seekToBeginningAtEnd;
@property (nonatomic, getter=isLoopingEnabled) _Bool loopingEnabled;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic) _Bool preventsSleepDuringVideoPlayback;
@property (nonatomic) _Bool allowsExternalPlayback;

- (void)setAudioSessionCategory:(id)arg1 options:(unsigned long long)arg2;
- (void)setVolume:(float)arg1 withFade:(_Bool)arg2;

@end
