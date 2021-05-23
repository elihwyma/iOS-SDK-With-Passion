/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <MediaPlayer/MPMoviePlayerViewController.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSMutableArray, NSString, SUClientInterface, SUMediaPlayerItem, UIView;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <Swift>

{
    UIView *_backgroundContainerView;
    SUClientInterface *_clientInterface;
    SUMediaPlayerItem *_mediaItem;
    NSMutableArray *_operations;
    long long _playerState;
}

@property (copy, nonatomic, readonly) SUMediaPlayerItem *mediaPlayerItem;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;
+ (_Bool)_URLIsITunesU:(id)arg1;
+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_enqueueOperation:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)copyScriptViewController;
- (id)initWithMediaPlayerItem:(id)arg1;
- (void)_mediaTypesAvailableNotification:(id)arg1;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)_bookmarkCurrentTime;
- (void)_insertBackgroundContainerView;
- (void)_prepareMediaItem;
- (void)_loadBackgroundImage;
- (void)_setIsActivePlayer:(_Bool)arg1;
- (void)_dequeueOperation:(id)arg1;
- (void)_showBackgroundImage:(id)arg1;
- (id)_backgroundContainerView;

@end
