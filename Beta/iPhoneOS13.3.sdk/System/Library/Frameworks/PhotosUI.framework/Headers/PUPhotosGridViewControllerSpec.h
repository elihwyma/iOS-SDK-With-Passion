/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUAlbumPickerViewControllerSpec, PUPhotosPickerViewControllerSpec;

@interface PUPhotosGridViewControllerSpec : NSObject

{
    _Bool _canDisplayOptionsInPopover;
    _Bool _canDisplaySlideshowButton;
    _Bool _canDisplayEditActionsInNavigationBar;
    _Bool _usesStackPopTransition;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    PUAlbumPickerViewControllerSpec *_albumPickerViewControllerSpec;
    long long _sizeSubclass;
    struct CGSize _baseInterItemSpacing;
    struct UIEdgeInsets _safeAreaInsets;
    struct UIEdgeInsets _layoutMargins;
}

@property (nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic, readonly) struct UIEdgeInsets layoutMargins;
@property (nonatomic, readonly) long long sizeSubclass;
@property (nonatomic, readonly) struct CGSize contentSizeForViewInPopover;
@property (nonatomic, readonly) struct CGSize baseInterItemSpacing;
@property (nonatomic, readonly) unsigned short thumbnailImageFormat;
@property (nonatomic, readonly) long long cellFillMode;
@property (nonatomic, readonly) long long cellBannerTextAlignment;
@property (nonatomic, readonly) _Bool canDisplayOptionsInPopover;
@property (nonatomic, readonly) _Bool canDisplaySlideshowButton;
@property (nonatomic, readonly) _Bool shouldPlaceSelectAllButtonInRightNavigationBar;
@property (nonatomic, readonly) _Bool shouldPlaceDeleteInCenterToolbarPosition;
@property (nonatomic, readonly) _Bool canDisplayEditActionsInNavigationBar;
@property (nonatomic, readonly) _Bool canCommitPreview;
@property (nonatomic, readonly) _Bool usesStackPopTransition;
@property (nonatomic, readonly) _Bool displaysAvalancheStacks;
@property (nonatomic, readonly) _Bool wantsBackButtonTitleForPhotoBrowser;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec;
@property (nonatomic, readonly) PUAlbumPickerViewControllerSpec *albumPickerViewControllerSpec;
@property (nonatomic, readonly) _Bool wantsCustomNavigationTransition;
@property (nonatomic, readonly) long long forceLoadInitialSectionCount;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic, readonly) long long sectionHeaderStyle;
@property (nonatomic, readonly) struct UIEdgeInsets sectionHeaderInsets;
@property (nonatomic, readonly) struct UIEdgeInsets gridContentInsets;

- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;

@end
