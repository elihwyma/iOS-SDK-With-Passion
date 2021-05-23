/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class IMAudioPlayer, NSArray, NSMutableArray, NSString, NSURL;

@protocol IMAudioControllerDelegate;

@interface IMAudioController : NSObject

{
    unsigned long long _currentIndex;
    IMAudioPlayer *_listenAudioPlayer;
    NSMutableArray *_audioURLs;
    _Bool _shouldUseSpeaker;
    _Bool _shouldStopPlayingWhenSilent;
    _Bool _shouldDuckOthers;
    _Bool _shouldUseAVPlayer;
    _Bool _playing;
    _Bool _paused;
    _Bool _interrupted;
    NSURL *_currentURL;
    id <IMAudioControllerDelegate> _delegate;
    IMAudioPlayer *_audioPlayer;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (retain, nonatomic) IMAudioPlayer *audioPlayer;
@property (nonatomic) _Bool interrupted;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (retain, nonatomic) IMAudioPlayer *listenAudioPlayer;
@property (nonatomic) _Bool shouldUseSpeaker;
@property (nonatomic) _Bool shouldStopPlayingWhenSilent;
@property (nonatomic) _Bool shouldDuckOthers;
@property (nonatomic) _Bool shouldUseAVPlayer;
@property (nonatomic, readonly) NSURL *currentURL;
@property (nonatomic, readonly) double currentMediaObjectTime;
@property (nonatomic, readonly) double currentMediaObjectDuration;
@property (nonatomic) float volume;
@property (copy, nonatomic, readonly) NSArray *audioURLs;
@property (weak, nonatomic) id <IMAudioControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)audioControllerClass;
+ (id)audioControllerWithContentsOfURLs:(id)arg1;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)play;
- (void)prepareToPlay;
- (void)playAfterDelay:(double)arg1;
- (id)currentMediaObject;
- (unsigned long long)audioSessionControllerOptions;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)playListenSound:(CDUnknownBlockType)arg1;
- (void)playListenEndSound:(CDUnknownBlockType)arg1;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
- (void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(_Bool)arg2;
- (id)initWithContentsOfURLs:(id)arg1;
- (void)_notifyPlayerDidPrepareAudioURL:(id)arg1 successfully:(_Bool)arg2;
- (void)_playSoundWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addContentsOfURL:(id)arg1;
- (void)addContentsOfURLs:(id)arg1;

@end
