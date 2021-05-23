/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PUSlideshowMediaItem, PUSlideshowSettingsViewControllerSpec, UITableView;

@protocol PUSlideshowMusicDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowMusicViewController : UIViewController

{
    NSArray *_mediaItems;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    _Bool _shouldHideTableViewWhenViewWillDisappear;
    _Bool __needsUpdateSpec;
    _Bool __needsUpdateBackgroundView;
    _Bool __needsUpdateTableView;
    PUSlideshowMediaItem *_currentMediaItem;
    id <PUSlideshowMusicDelegate> _delegate;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) _Bool _needsUpdateBackgroundView;
@property (nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView;
@property (retain, nonatomic) PUSlideshowMediaItem *currentMediaItem;
@property (weak, nonatomic) id <PUSlideshowMusicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)_needsUpdate;
- (void)_didFinish;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateSpecIfNeeded;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)_invalidateSpec;
- (void)_invalidateBackgroundView;
- (void)_invalidateTableView;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)_didPickMediaItem:(id)arg1;

@end
