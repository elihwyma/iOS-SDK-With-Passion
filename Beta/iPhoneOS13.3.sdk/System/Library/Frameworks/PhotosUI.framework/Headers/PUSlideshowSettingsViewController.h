/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, OKProducerPreset, PUSlideshowMediaItem, PUSlideshowSession, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, UITableView;

@protocol PUSlideshowSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewController : UIViewController

{
    PUSlideshowSession *_session;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
    _Bool _shouldHideTableViewWhenViewWillDisappear;
    _Bool __needsUpdateSpec;
    _Bool __needsUpdateTableView;
    _Bool __needsUpdateNavigationBar;
    _Bool __needsUpdatePreset;
    _Bool __needsUpdateMediaItem;
    _Bool __needsUpdateMusicOn;
    id <PUSlideshowSettingsViewControllerDelegate> _delegate;
    OKProducerPreset *__pendingPreset;
    PUSlideshowMediaItem *__pendingMediaItem;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView;
@property (nonatomic, setter=_setNeedsUpdateNavigationBar:) _Bool _needsUpdateNavigationBar;
@property (nonatomic, setter=_setNeedsUpdatePreset:) _Bool _needsUpdatePreset;
@property (nonatomic, setter=_setNeedsUpdateMediaItem:) _Bool _needsUpdateMediaItem;
@property (nonatomic, setter=_setNeedsUpdateMusicOn:) _Bool _needsUpdateMusicOn;
@property (retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset;
@property (retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem;
@property (weak, nonatomic) id <PUSlideshowSettingsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (void)_updateTableViewIfNeeded;
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;
- (void)musicPickerDidFinish:(id)arg1;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;
- (void)themePickerDidFinish:(id)arg1;
- (void)_invalidateNavigationBar;
- (void)_invalidatePreset;
- (void)_invalidateMediaItem;
- (void)_invalidateMusicOn;
- (void)_updateNavigationBarIfNeeded;
- (void)_updatePresetIfNeeded;
- (void)_updateMediaItemIfNeeded;
- (void)_updateMusicOnIfNeeded;
- (void)_synchronizedChangedSettings;
- (void)_didTapDoneButton:(id)arg1;
- (void)_toggleRepeat:(id)arg1;
- (void)_toggleMusic:(id)arg1;

@end
