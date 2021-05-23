/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UISplitViewController.h>

@class NSIndexPath, NSString, UINavigationController, VUICategoryMenuViewController, VUILibraryAlertView, VUILibraryCategoryMenuViewModel, VUILibraryGridCollectionViewController, VUIMediaLibrary;

@protocol VUILibrarySplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibrarySplitViewController : UISplitViewController

{
    _Bool _shouldShowBackButton;
    _Bool _hasLoaded;
    id <VUILibrarySplitViewControllerDelegate> _librarySplitViewControllerDelegate;
    VUICategoryMenuViewController *_menuViewController;
    VUIMediaLibrary *_mediaLibrary;
    UINavigationController *_masterNavigationController;
    UINavigationController *_detailNavigationController;
    VUILibraryCategoryMenuViewModel *_categoryViewModel;
    VUILibraryGridCollectionViewController *_currentGridCollectionViewController;
    NSIndexPath *_currentlySelectedIndexPath;
    VUILibraryAlertView *_alertView;
    VUIMediaLibrary *_currentHomeShareMediaLibrary;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) UINavigationController *masterNavigationController;
@property (retain, nonatomic) UINavigationController *detailNavigationController;
@property (retain, nonatomic) VUILibraryCategoryMenuViewModel *categoryViewModel;
@property (retain, nonatomic) VUILibraryGridCollectionViewController *currentGridCollectionViewController;
@property (retain, nonatomic) NSIndexPath *currentlySelectedIndexPath;
@property (retain, nonatomic) VUILibraryAlertView *alertView;
@property (nonatomic) _Bool shouldShowBackButton;
@property (retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (nonatomic) _Bool hasLoaded;
@property (weak, nonatomic) id <VUILibrarySplitViewControllerDelegate> librarySplitViewControllerDelegate;
@property (retain, nonatomic) VUICategoryMenuViewController *menuViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (void)_addMediaLibraryNotificationObservers;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (_Bool)vui_ppt_isLoading;
- (void)categoryMenuViewController:(id)arg1 didSelectMenuItemAtIndexPath:(id)arg2;
- (void)categoryMenuViewControllerShouldDismiss:(id)arg1;
- (void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2;
- (void)updateForViewModel:(id)arg1;
- (void)fetchDidCompleteForViewModel:(id)arg1;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_setDisplayModeForLayoutType:(long long)arg1;
- (void)_addRentalsUpdateNotificationObserver;
- (void)_showOrHideNoContentView;
- (id)_getMediaEntitiesForIndexPath:(id)arg1;
- (void)setPageMetricsForCategory:(id)arg1 onLibraryGridCollectionViewController:(id)arg2;
- (id)_viewControllerForIndexPath:(id)arg1;
- (void)_updateRentals;
- (void)gridCollectionViewController:(id)arg1 didSelectMediaEntity:(id)arg2;
- (id)_createDetailNavigationViewControllerWithRootViewController:(id)arg1;

@end
