/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSArray, NSString, PLCloudSharedAlbum, PUPhotoStreamComposeServiceViewController, PUPhotosPickerViewController, PUVideoTrimQueueController, UIBarButtonItem, UISegmentedControl, UIViewController;

@protocol PUCloudSharedAlbumViewControllerDelegate;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController

{
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    PUVideoTrimQueueController *_trimController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
    _Bool _displayingOptions;
    _Bool __canContributeToCloudSharedAlbum;
    id <PUCloudSharedAlbumViewControllerDelegate> _delegate;
    UIViewController *__optionsViewController;
    UIViewController *__optionsPopoverRootViewController;
    NSArray *__transitioningOptionsViewControllers;
    UIBarButtonItem *__optionsBarButtonItem;
    UIBarButtonItem *__optionsBarButtonSpacerItem;
    UISegmentedControl *__switcherSegmentedControl;
    UIBarButtonItem *__switcherBarButtonItem;
    long long __selectedItemIndex;
}

@property (retain, nonatomic, setter=_setOptionsViewController:) UIViewController *_optionsViewController;
@property (retain, nonatomic, setter=_setOptionsPopoverRootViewController:) UIViewController *_optionsPopoverRootViewController;
@property (retain, nonatomic, setter=_setTransitioningOptionsViewControllers:) NSArray *_transitioningOptionsViewControllers;
@property (retain, nonatomic, setter=_setOptionsBarButtonItem:) UIBarButtonItem *_optionsBarButtonItem;
@property (retain, nonatomic, setter=_setOptionsBarButtonSpacerItem:) UIBarButtonItem *_optionsBarButtonSpacerItem;
@property (nonatomic, setter=_setCanContributeToCloudSharedAlbum:) _Bool _canContributeToCloudSharedAlbum;
@property (retain, nonatomic, setter=_setSwitcherSegmentedControl:) UISegmentedControl *_switcherSegmentedControl;
@property (retain, nonatomic, setter=_setSwitcherBarButtonItem:) UIBarButtonItem *_switcherBarButtonItem;
@property (nonatomic, setter=_setSelectedItemIndex:) long long _selectedItemIndex;
@property (weak, nonatomic) id <PUCloudSharedAlbumViewControllerDelegate> delegate;
@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (nonatomic, getter=isDisplayingOptions, setter=setDisplayingOptions:) _Bool displayingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (_Bool)canDeleteContent;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (id)_suppressionContexts;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (_Bool)shouldShowToolbar;
- (id)newToolbarItems;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)setAlbum:(struct NSObject *)arg1 existingFetchResult:(id)arg2;
- (_Bool)canAddToOtherAlbumContent;
- (_Bool)wantsAddContentInToolbar;
- (_Bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (_Bool)shouldShowTabBar;
- (_Bool)wantsGlobalFooter;
- (id)globalFooterSubtitle;
- (_Bool)_shouldShowOptionsSwitcherInToolbar;
- (_Bool)_canDisplayOptions;
- (void)updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (void)_updateOptionsView;
- (void)_updateOptionsViewInsets;
- (void)_optionsBarButtonItemPressed:(id)arg1;
- (void)_presentOptionsPopoverFromBarButtonItem:(id)arg1;
- (void)_dismissOptionsPopoverAnimated:(_Bool)arg1;
- (void)_handleSwitcherSegmentedControl:(id)arg1;
- (id)_newOptionsViewController;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;

@end
