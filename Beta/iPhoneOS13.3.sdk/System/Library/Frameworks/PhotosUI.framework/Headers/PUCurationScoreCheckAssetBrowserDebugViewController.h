/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface PUCurationScoreCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController

{
    double _minimumValue;
    double _maximumValue;
    NSString *_scoreName;
    _Bool _sortAscending;
    _Bool _showsVideos;
    UIPickerView *_scorePickerView;
    UIPickerView *_sortPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_update;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_editSettings:(id)arg1;
- (void)_doneEditingSettings:(id)arg1;
- (_Bool)shouldShowToolbar;
- (id)newToolbarItems;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)_setMinimum:(id)arg1;
- (void)_setMaximum:(id)arg1;
- (void)_setShowsVideos:(id)arg1;
- (void)_presentTapToRadar;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (id)scoreNames;
- (id)plScoreKeyPathByScoreName;
- (id)phScoreKeyPathByScoreName;

@end
