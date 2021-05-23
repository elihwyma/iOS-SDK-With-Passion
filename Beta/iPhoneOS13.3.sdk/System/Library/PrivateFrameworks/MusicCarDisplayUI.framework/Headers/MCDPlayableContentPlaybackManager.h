/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <MusicCarDisplayUI/_MCDNowPlayingContentManager.h>

@class MCDPCModel, NSString;

@interface MCDPlayableContentPlaybackManager : _MCDNowPlayingContentManager

{
    _Bool _seeking;
    MCDPCModel *_model;
    long long _playingItemIndex;
    long long _totalItemCount;
}

@property (nonatomic, getter=isSeeking) _Bool seeking;
@property (retain, nonatomic) MCDPCModel *model;
@property (nonatomic) long long playingItemIndex;
@property (nonatomic) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_itemAtIndexPath:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 bundleID:(id)arg3;
- (void)_processResponse:(id)arg1 error:(id)arg2;
- (_Bool)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id *)arg3 existingIdentifier:(id)arg4 tinted:(out _Bool *)arg5;
- (_Bool)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (_Bool)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
- (void)nowPlayingViewControllerAddToLibrary:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShowMore:(id)arg1;
- (void)nowPlayingViewControllerMore:(id)arg1;
- (long long)_numberOfItemsInPlaybackQueue;
- (void)_updateTrackQueueIndex;
- (id)_adjustedIndexPathForPlaybackQueue:(id)arg1;
- (double)_jumpBackwardInterval;
- (id)_skipIntervalButtonImageForInterval:(double)arg1 size:(long long)arg2;
- (double)_jumpForwardInterval;
- (void)_handleHamburgerActionSheet;
- (id)_alertActionForFeedbackCommand:(id)arg1 fallbackTitle:(id)arg2;

@end
