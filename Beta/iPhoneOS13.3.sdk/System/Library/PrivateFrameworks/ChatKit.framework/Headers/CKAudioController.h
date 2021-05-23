/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKAudioPlayer, CKMediaObject, NSArray, NSMutableArray, NSString;

@protocol CKAudioControllerDelegate;

@interface CKAudioController : NSObject

{
    unsigned long long _currentIndex;
    CKAudioPlayer *_listenAudioPlayer;
    _Bool _shouldUseSpeaker;
    _Bool _shouldStopPlayingWhenSilent;
    _Bool _shouldDuckOthers;
    _Bool _shouldUseAVPlayer;
    _Bool _playing;
    _Bool _paused;
    _Bool _interrupted;
    NSMutableArray *_mediaObjects;
    id <CKAudioControllerDelegate> _delegate;
    CKAudioPlayer *_audioPlayer;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (retain, nonatomic, setter=_setMediaObjects:) NSMutableArray *_mediaObjects;
@property (retain, nonatomic) CKAudioPlayer *audioPlayer;
@property (nonatomic) _Bool interrupted;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (weak, nonatomic) id <CKAudioControllerDelegate> delegate;
@property (nonatomic) _Bool shouldUseSpeaker;
@property (nonatomic) _Bool shouldStopPlayingWhenSilent;
@property (nonatomic) _Bool shouldDuckOthers;
@property (nonatomic) _Bool shouldUseAVPlayer;
@property (nonatomic, readonly) CKMediaObject *currentMediaObject;
@property (nonatomic, readonly) double currentMediaObjectTime;
@property (nonatomic, readonly) double currentMediaObjectDuration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)play;
- (void)applicationWillResignActive;
- (void)prepareToPlay;
- (void)playAfterDelay:(double)arg1;
- (id)initWithMediaObjects:(id)arg1;
- (void)addMediaObject:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (unsigned long long)audioSessionControllerOptions;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)playListenSound:(CDUnknownBlockType)arg1;
- (void)_notifyPlayerDidPrepareMediaObject:(id)arg1 successfully:(_Bool)arg2;
- (void)playListenEndSound:(CDUnknownBlockType)arg1;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
- (void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(_Bool)arg2;
- (void)addMediaObjects:(id)arg1;

@end
