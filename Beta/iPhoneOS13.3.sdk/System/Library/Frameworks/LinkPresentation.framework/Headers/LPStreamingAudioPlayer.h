/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, LPAudio, NSHashTable, NSString;

@interface LPStreamingAudioPlayer : NSObject

{
    LPAudio *_audio;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    NSHashTable *_clients;
    unsigned long long _state;
}

@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isMuted) _Bool muted;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly, getter=isFullScreen) _Bool fullScreen;
@property (nonatomic, readonly) _Bool usesSharedAudioSession;
@property (nonatomic, readonly) _Bool shouldUnmuteWhenUserAdjustsVolume;
@property (nonatomic, readonly) unsigned long long lastInteractionTimestamp;
@property (nonatomic, readonly) double unobscuredAreaFraction;

+ (id)playerWithAudio:(id)arg1;

- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)play;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1;
- (id)initWithAudio:(id)arg1;
- (void)dispatchDidChangeProgressToAllClients:(float)arg1;
- (void)dispatchDidFailToPlayToAllClients;
- (void)dispatchDidTransitionToStateToAllClients:(unsigned long long)arg1;

@end
