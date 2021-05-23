/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewController.h>

@class AVPlayer, NSObject, NSString, PMMusicProvider, Reachability, VEKSong;

@protocol OS_dispatch_queue, PMEditProviderDelegate, PMEditorToolbarOwner;

@interface MiroSmartMusicMenuViewController : UITableViewController

{
    NSObject<OS_dispatch_queue> *_downloadQueue;
    _Bool _observingAppWillResign;
    PMMusicProvider *_musicProvider;
    id <PMEditorToolbarOwner> _toolbarOwner;
    id <PMEditProviderDelegate> _delegate;
    long long _selectedSection;
    long long _selectedRow;
    NSString *_moodID;
    Reachability *_reachability;
    AVPlayer *_player;
    id _timeObserver;
    id _playbackObserver;
    VEKSong *_productionSong;
    VEKSong *_playingSong;
    long long _playingSongRow;
}

@property (nonatomic) long long selectedSection;
@property (nonatomic) long long selectedRow;
@property (nonatomic, readonly) NSString *moodID;
@property (retain, nonatomic) Reachability *reachability;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) id playbackObserver;
@property (retain, nonatomic) VEKSong *productionSong;
@property (retain, nonatomic) VEKSong *playingSong;
@property (nonatomic) long long playingSongRow;
@property (nonatomic) _Bool observingAppWillResign;
@property (retain, nonatomic) PMMusicProvider *musicProvider;
@property (weak, nonatomic) id <PMEditorToolbarOwner> toolbarOwner;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)setup;
- (long long)networkStatus;
- (void)_addObserverForTextSizeDidChange;
- (void)userTextSizeDidChange;
- (_Bool)_setSelectedSection:(long long)arg1 andRow:(long long)arg2;
- (void)_setupReachabiliy;
- (void)_pausePreview;
- (void)scrollToSelectedIndexPath;
- (void)networkStatusChanged:(id)arg1;
- (void)toggleDownloadInCell:(id)arg1;
- (void)_updateProductionWithSong:(id)arg1;
- (id)_getPlayingCell;
- (void)_removeObserverForPlaybackEnded;
- (void)_removeObserverForAppWillResign;
- (void)_addObserverForPlaybackEnded;
- (void)_addObserverForAppWillResign;
- (void)_postProgressUpdate:(CDStruct_1b6d18a9)arg1;
- (void)_applicationWillResign;
- (unsigned long long)statusForSong:(id)arg1;
- (void)resetPlayingCell;
- (void)_previewSong:(id)arg1;
- (id)_selectedTableViewCell;
- (void)shouldPreviewSong:(id)arg1;

@end
