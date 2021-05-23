/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSString, PMMusicNavigationController, PMMusicProvider, UITableView, VEKBlueprint;

@protocol NSObject, PMEditProviderDelegate;

@interface MiroMusicMenuViewController : UIViewController

{
    _Bool _observingAppWillResignActive;
    UITableView *_tableView;
    id <PMEditProviderDelegate> _delegate;
    PMMusicProvider *_musicProvider;
    VEKBlueprint *_previousBlueprint;
    PMMusicNavigationController *_soundtrackNavigationController;
    id <NSObject> _artworkDownloadObserver;
}

@property (nonatomic) _Bool observingAppWillResignActive;
@property (retain, nonatomic) VEKBlueprint *previousBlueprint;
@property (retain, nonatomic) PMMusicNavigationController *soundtrackNavigationController;
@property (retain, nonatomic) id <NSObject> artworkDownloadObserver;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;
@property (retain, nonatomic) PMMusicProvider *musicProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)popFromNavigationController;
- (void)_addObserverForTextSizeDidChange;
- (void)_removeObserverForTextSizeDidChange;
- (void)didChangeMusicSwitch:(id)arg1;
- (id)fetchAlbumArtworkFromMediaIdentifier:(id)arg1;
- (void)didTapEditMusic:(id)arg1;
- (void)userTextSizeDidChange;
- (_Bool)_has_iTunesMusic;
- (void)presentCategoryViewController;
- (void)musicDidChange;
- (id)albumArtworkForSong:(id)arg1;

@end
