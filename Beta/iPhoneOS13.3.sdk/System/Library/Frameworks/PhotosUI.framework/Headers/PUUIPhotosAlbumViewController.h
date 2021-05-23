/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSArray, NSString, PUPhotoPickerFileSizeToolbarProvider, PUPhotoPickerResizeTaskDescriptor, PUSessionInfo, PUUIImagePickerControllerHelper, UIBarButtonItem;

@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController

{
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    PUPhotoPickerFileSizeToolbarProvider *_fileSizePickerToolbarProvider;
    _Bool _didDisappear;
    int __albumFilter;
    id <PUPhotoPicker> _photoPicker;
    NSArray *__imagePickerMediaTypes;
    double _lastKnownWidth;
    PUPhotoPickerResizeTaskDescriptor *_resizeTaskDescriptor;
    struct UIEdgeInsets _lastKnownSafeAreaInsets;
}

@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes;
@property (nonatomic, setter=_setAlbumFilter:) int _albumFilter;
@property (nonatomic, readonly) _Bool referenceValuesDidChange;
@property (nonatomic) _Bool didDisappear;
@property (nonatomic) double lastKnownWidth;
@property (nonatomic) struct UIEdgeInsets lastKnownSafeAreaInsets;
@property (retain, nonatomic) PUPhotoPickerResizeTaskDescriptor *resizeTaskDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isAnyAssetSelected) _Bool anyAssetSelected;
@property (nonatomic, readonly) NSArray *selectedAssets;
@property (nonatomic, readonly) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly, getter=isAnyAssetDownloading) _Bool anyAssetDownloading;
@property (weak, nonatomic) id <PUPhotoPicker> photoPicker;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canDragOut;
- (_Bool)canDragIn;
- (id)initWithSpec:(id)arg1;
- (double)topMarginForPhotosGlobalFooterView:(id)arg1;
- (_Bool)shouldShowSectionHeaders;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)setAlbum:(id)arg1 existingFetchResult:(id)arg2;
- (_Bool)wantsGlobalFooter;
- (void)performPhotoPickerSelection;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject *)arg1;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (_Bool)shouldShowMenu;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)photoPickerFileSizeToolbarProvider:(id)arg1 presentSizePickerViewController:(id)arg2;
- (void)photoPickerFileSizeToolbarProvider:(id)arg1 didSelectResizeTaskDescriptor:(id)arg2;
- (_Bool)allowsPeeking;
- (void)_scrollToBottomIfNeeded;
- (void)_handleImagePickerSelectionDone:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone;
- (void)_handleImagePickerSingleSelectionDone;

@end
