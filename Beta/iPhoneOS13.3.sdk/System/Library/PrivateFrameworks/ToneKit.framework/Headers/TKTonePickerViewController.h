/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableViewController.h>

@class MPMediaPickerController, MPMusicPlayerController, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TKToneClassicsTableViewController, TKTonePickerController, TKTonePickerTableViewCellLayoutManager, TKVibrationPickerViewController, UIBarButtonItem, UIImage;

@protocol TKTonePickerStyleProvider, TKTonePickerViewControllerDelegate;

@interface TKTonePickerViewController : UITableViewController

{
    TKTonePickerController *_tonePickerController;
    UIImage *_checkmarkImage;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManagerForIndentedRows;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManagerForUnindentedRows;
    _Bool _showsToneStoreWasSetExplicitly;
    _Bool _needsScrollPositionReset;
    UIBarButtonItem *_storeBarButtonItem;
    NSMutableDictionary *_toneSectionHeaderViews;
    MPMediaPickerController *_mediaPickerController;
    NSMutableArray *_mediaItems;
    MPMusicPlayerController *_musicPlayer;
    TKToneClassicsTableViewController *_toneClassicsTableViewController;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    _Bool _isHandlingSwitchControlValueChanged;
    NSMutableArray *_switchControlsBeingObserved;
    _Bool _showsToneStore;
    _Bool _showsIgnoreMute;
    _Bool _showsMedia;
    id <TKTonePickerViewControllerDelegate> _delegate;
    id <TKTonePickerStyleProvider> _styleProvider;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) _Bool showsStoreButtonInNavigationBar;
@property (nonatomic, readonly) long long alertType;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) _Bool showsDefault;
@property (copy, nonatomic) NSString *defaultToneIdentifier;
@property (nonatomic) _Bool showsNone;
@property (nonatomic, getter=isNoneAtTop) _Bool noneAtTop;
@property (copy, nonatomic) NSString *noneString;
@property (nonatomic) _Bool showsNothingSelected;
@property (nonatomic) _Bool showsToneStore;
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (weak, nonatomic) id <TKTonePickerViewControllerDelegate> delegate;
@property (nonatomic) _Bool showsIgnoreMute;
@property (nonatomic) _Bool ignoreMute;
@property (nonatomic) _Bool showsMedia;
@property (nonatomic, getter=isMediaAtTop) _Bool mediaAtTop;
@property (copy, nonatomic) NSNumber *selectedMediaIdentifier;
@property (nonatomic) _Bool showsVibrations;
@property (copy, nonatomic) NSString *selectedVibrationIdentifier;
@property (retain, nonatomic) id <TKTonePickerStyleProvider> styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_checkmarkImage;

- (void)dealloc;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationWillSuspend;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)_reloadData;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)addMediaItems:(id)arg1;
- (id)initWithAlertType:(long long)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)separatorColorDidChangeInTonePickerTableView:(id)arg1;
- (void)tonePickerController:(id)arg1 didUpdateIgnoreMute:(_Bool)arg2 forTonePickerItem:(id)arg3 atIndexPath:(id)arg4;
- (id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
- (void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(_Bool)arg3;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
- (void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (void)tonePickerController:(id)arg1 requestsPerformingBatchUpdates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tonePickerController:(id)arg1 didDeletePickerRowItems:(id)arg2;
- (void)tonePickerController:(id)arg1 didDeleteTonePickerSectionItems:(id)arg2;
- (void)tonePickerController:(id)arg1 didInsertPickerRowItems:(id)arg2;
- (void)tonePickerController:(id)arg1 didInsertTonePickerSectionItems:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateHeaderTextOfTonePickerSectionItems:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateFooterTextOfTonePickerSectionItems:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateDownloadProgressOfTonePickerItem:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateTonePickerItem:(id)arg2;
- (void)tonePickerController:(id)arg1 willBeginPlaybackOfToneWithIdentifier:(id)arg2;
- (void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
- (_Bool)tonePickerControllerShouldShowMedia:(id)arg1;
- (unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
- (id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(_Bool)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;
- (id)selectedTonePickerItem;
- (void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1;
- (void)_handleSwitchControlValueChanged:(id)arg1;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (void)loadViewForTonePickerTableViewController:(id)arg1;
- (void)_updateMinimumTextIndentation;
- (double)_minimumTextIndentationForTableView:(id)arg1 withCheckmarkImage:(id)arg2;
- (void)_resetScrollingPosition;
- (void)_handleMediaLibraryDidChangeNotification;
- (id)selectedIdentifier:(_Bool *)arg1;
- (id)_mediaItemForIdentifier:(id)arg1;
- (unsigned long long)_addMediaIdentifierToList:(id)arg1;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (id)_musicPlayer;
- (void)_configureTextColorOfLabelInCell:(id)arg1 shouldTintText:(_Bool)arg2 checked:(_Bool)arg3;
- (void)updateCell:(id)arg1 withCheckedStatus:(_Bool)arg2 forTonePickerItem:(id)arg3;
- (_Bool)_shouldShowCheckmarkOnTrailingEdge;
- (void)_updateCell:(id)arg1 withDownloadProgress:(float)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3;
- (id)_pickerRowItemForIndexPath:(id)arg1;
- (void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3;
- (id)_customHeaderViewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3;
- (void)updateCell:(id)arg1 withDetailText:(id)arg2;
- (void)_togglePlayMediaItemWithIdentifier:(id)arg1;
- (void)_stopMediaItemPlaybackWithFadeOutDuration:(double)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)vibrationPickerViewControllerWasDismissed:(id)arg1;
- (void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3;
- (void)tonePickerTableViewWillDisappear:(_Bool)arg1;
- (void)removeMediaItems:(id)arg1;

@end
