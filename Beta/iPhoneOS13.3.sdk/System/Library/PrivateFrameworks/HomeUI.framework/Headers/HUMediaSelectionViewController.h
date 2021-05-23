/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUMediaSelectionItemManager, NSString;

@protocol HUMediaSelectionViewControllerDelegate;

@interface HUMediaSelectionViewController : HUItemTableViewController

{
    id <HUMediaSelectionViewControllerDelegate> _delegate;
    HUMediaSelectionItemManager *_mediaSelectionItemManager;
    unsigned long long _lastTargetOptions;
}

@property (retain, nonatomic) HUMediaSelectionItemManager *mediaSelectionItemManager;
@property (nonatomic) unsigned long long lastTargetOptions;
@property (weak, nonatomic) id <HUMediaSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)_allowRowInteractionForIndexPath:(id)arg1;
- (void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2;
- (void)_presentMediaPickerWithOptionsShowsLibraryContent:(_Bool)arg1 pickingForExternalPlayer:(_Bool)arg2;
- (void)applyAccessory:(long long)arg1 toItem:(id)arg2 onTableView:(id)arg3;
- (id)_musicAppURL;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;

@end
