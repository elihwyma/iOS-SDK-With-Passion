/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface TVPPlayerBookmarkMonitor : NSObject

{
    _Bool _playerHasFinishedLoading;
    NSTimer *_bookmarkPeriodicSaveTimer;
    NSObject<TVPPlayback> *_player;
}

@property (retain, nonatomic) NSTimer *bookmarkPeriodicSaveTimer;
@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (nonatomic) _Bool playerHasFinishedLoading;

- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_playerErrorDidOccur:(id)arg1;
- (void)_updateBookmarkTimeForMediaItem:(id)arg1 player:(id)arg2 playbackOfMediaItemIsEnding:(_Bool)arg3;
- (void)_updatePlayCountForMediaItem:(id)arg1 player:(id)arg2;
- (void)_bookmarkPeriodicSaveTimerFired:(id)arg1;

@end
