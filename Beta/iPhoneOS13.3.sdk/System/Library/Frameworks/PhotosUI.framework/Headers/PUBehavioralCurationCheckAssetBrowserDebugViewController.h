/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSPredicate, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController

{
    NSPredicate *_predicate;
    NSString *_selectionName;
    _Bool _sortAscending;
    UIPickerView *_scorePickerView;
    UIPickerView *_sortPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_update;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_editSettings:(id)arg1;
- (void)_doneEditingSettings:(id)arg1;
- (_Bool)shouldShowToolbar;
- (id)newToolbarItems;
- (id)selectionNames;
- (id)_goldAssetUUIDs;
- (id)predicateForSelectionName:(id)arg1;
- (id)sortDescriptorForSelectionName:(id)arg1;
- (id)phScoreKeyPathsForSelectionName:(id)arg1;
- (double)semanticScoreFromBehavioralScore:(double)arg1;

@end
