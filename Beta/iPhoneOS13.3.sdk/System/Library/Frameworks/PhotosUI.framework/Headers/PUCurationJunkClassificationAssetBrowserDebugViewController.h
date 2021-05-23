/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSDictionary, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface PUCurationJunkClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController

{
    NSString *_junkClassificationName;
    double _junkClassificationThreshold;
    NSDictionary *_junkConfidenceByAssetUUID;
    double _minimumValue;
    double _maximumValue;
    _Bool _sortsAscending;
    _Bool _showsVideos;
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
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_editSettings:(id)arg1;
- (void)_doneEditingSettings:(id)arg1;
- (_Bool)shouldShowToolbar;
- (id)newToolbarItems;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)_setMinimum:(id)arg1;
- (void)_setMaximum:(id)arg1;
- (void)_setShowsVideos:(id)arg1;
- (void)setJunkConfidenceByAssetUUID:(id)arg1 withJunkClassificationName:(id)arg2 threshold:(double)arg3;
- (void)_presentTapToRadar;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;

@end
