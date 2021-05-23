/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PHPhotosPickerOptions, PUPhotosPickerSessionInfo, PUPhotosPickerViewControllerSpec, PUTabbedLibraryViewController;

@interface PUPhotosPickerViewController : UIViewController

{
    PUPhotosPickerViewControllerSpec *_spec;
    PUPhotosPickerSessionInfo *_photosPickerSessionInfo;
    _Bool _needsToSetupOptions;
    int _currentContentMode;
    CDUnknownBlockType _completionHandler;
    PUTabbedLibraryViewController *__tabbedLibraryViewController;
    PHPhotosPickerOptions *_photosPickerOptions;
}

@property (retain, nonatomic, setter=_setTabbedLibraryViewController:) PUTabbedLibraryViewController *_tabbedLibraryViewController;
@property (retain, nonatomic) PHPhotosPickerOptions *photosPickerOptions;
@property (nonatomic) int currentContentMode;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)assetContainerListDidChange:(id)arg1;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (id)initWithSpec:(id)arg1 targetAlbum:(struct NSObject *)arg2;
- (id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2;
- (id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 options:(id)arg3;
- (id)_initWithSpec:(id)arg1 targetAlbum:(struct NSObject *)arg2 orTargetAlbumName:(id)arg3 options:(id)arg4;

@end
