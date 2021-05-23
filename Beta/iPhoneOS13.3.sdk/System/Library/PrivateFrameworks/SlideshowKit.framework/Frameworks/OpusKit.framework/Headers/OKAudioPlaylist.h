/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class AVPlayer, NSArray, NSMutableDictionary, NSOperationQueue, NSString, OKAudioDucker, OKMediaItem, OKPresentation;

@protocol OKAudioPlaylistDelegate, OS_dispatch_queue;

@interface OKAudioPlaylist : NSObject

{
    NSArray *_mediaItems;
    NSMutableDictionary *_players;
    _Bool _playing;
    _Bool _loops;
    long long _currentPlayerIndex;
    AVPlayer *_currentMedia;
    OKAudioDucker *_ducker;
    OKPresentation *_presentation;
    id <OKAudioPlaylistDelegate> _delegate;
    NSOperationQueue *_mediaItemOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _playingMusicCurrentTime;
    double _playingMusicDuration;
}

@property (nonatomic) float volume;
@property (nonatomic) _Bool loops;
@property (nonatomic) double playingMusicCurrentTime;
@property (nonatomic, readonly) double playingMusicDuration;
@property (nonatomic, readonly) OKMediaItem *playingItem;
@property (nonatomic) id <OKAudioPlaylistDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)next;
- (void)prev;
- (void)play;
- (_Bool)isPlaying;
- (void)setPlaying:(_Bool)arg1;
- (void)rewind;
- (void)beginFadingWithDuration:(double)arg1;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)endDucking;
- (id)initWithAudioItems:(id)arg1 presentation:(id)arg2;
- (id)initWithAudioURLs:(id)arg1 presentation:(id)arg2;
- (void)endFading;
- (id)currentMedia;
- (void)audioFinishedPlaying:(id)arg1;
- (void)_playMediaItem:(id)arg1 forMediaItem:(id)arg2;
- (void)setCurrentMedia:(id)arg1;

@end
