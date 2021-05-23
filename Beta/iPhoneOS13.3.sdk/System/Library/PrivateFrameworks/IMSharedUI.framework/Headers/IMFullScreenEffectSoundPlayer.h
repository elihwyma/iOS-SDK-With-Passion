/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class IMAudioController, NSString, NSURL;

@protocol IMFullScreenEffectSoundPlayerDelegate;

@interface IMFullScreenEffectSoundPlayer : NSObject

{
    _Bool _started;
    _Bool _hasHapticTrack;
    float _currentVolume;
    id <IMFullScreenEffectSoundPlayerDelegate> _delegate;
    IMAudioController *_audioController;
    NSURL *_soundURL;
}

@property (retain, nonatomic) IMAudioController *audioController;
@property (nonatomic) _Bool started;
@property (nonatomic, readonly) NSURL *soundURL;
@property (nonatomic, readonly) _Bool hasHapticTrack;
@property (nonatomic) float currentVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <IMFullScreenEffectSoundPlayerDelegate> delegate;

- (void)_didStart;
- (void)_didPrepare;
- (_Bool)_supportsSoundEffects;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (id)_ensureAudioPlayer;
- (void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(_Bool)arg3;
- (void)_didStop;
- (void)stopPlayingSound;
- (id)initWithSoundURL:(id)arg1 hasHapticTrack:(_Bool)arg2;
- (void)prepareToPlaySound;
- (void)startPlayingSound;

@end
