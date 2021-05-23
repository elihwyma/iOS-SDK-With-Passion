/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITabBarController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, PUImportViewController, PUMomentsZoomLevelManager, PUSessionInfo, PUTabbedLibraryViewControllerSpec, PUTabbedLibraryViewModel, PXForYouBadgeManager, PXProgrammaticNavigationRequest, UINavigationController;

@protocol OS_os_log, PUTabbedLibraryViewControllerContainerDelegate;

@interface PUTabbedLibraryViewController : UITabBarController <Swift>

{
    PUTabbedLibraryViewControllerSpec *_spec;
    PUSessionInfo *_sessionInfo;
    int _pendingSelectedContentMode;
    _Bool _sharedTabBadgeIsDirty;
    NSMutableDictionary *_filteredAlbumListsByContentMode;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    NSMutableIndexSet *_everDisplayedContentModes;
    PUTabbedLibraryViewModel *_viewModel;
    _Bool _px_hidesTabBarForRegularHorizontalSizeClass;
    _Bool _shouldNavigateToAllPhotosAlbum;
    PUImportViewController *_importViewController;
    id <PUTabbedLibraryViewControllerContainerDelegate> _containerDelegate;
    NSArray *_excludedContentModes;
    PXForYouBadgeManager *_badgeManager;
    PXProgrammaticNavigationRequest *_pendingNavigationRequest;
}

@property (nonatomic) _Bool shouldNavigateToAllPhotosAlbum;
@property (retain, nonatomic) PXForYouBadgeManager *badgeManager;
@property (nonatomic, readonly) NSObject<OS_os_log> *tabbedLibraryLog;
@property (retain, nonatomic) PXProgrammaticNavigationRequest *pendingNavigationRequest;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (retain, nonatomic) PUImportViewController *importViewController;
@property (nonatomic, setter=px_setHidesTabBarForRegularHorizontalSizeClass:) _Bool px_hidesTabBarForRegularHorizontalSizeClass;
@property (weak, nonatomic) id <PUTabbedLibraryViewControllerContainerDelegate> containerDelegate;
@property (nonatomic) int selectedContentMode;
@property (copy, nonatomic) NSArray *excludedContentModes;
@property (nonatomic, readonly) UINavigationController *selectedNavigationController;
@property (nonatomic, readonly) NSArray *rootViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setSelectedViewController:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (Class)_navigationControllerLayoutTransitioningClass:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)prepareForDefaultImageSnapshot;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;
- (id)px_navigateToMemoryWithLocalIdentifier:(id)arg1;
- (id)px_gridPresentation;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(_Bool)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (id)initWithSpec:(id)arg1;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (void)px_switchToTabForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)navigateToRevealAlbum:(struct NSObject *)arg1 initiallyHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)navigateToContentMode:(int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToAsset:(id)arg1 openOneUp:(_Bool)arg2 animated:(_Bool)arg3;
- (void)navigateToPhotosContentBottomAnimated:(_Bool)arg1;
- (void)navigateToOneYearAgoSearch;
- (void)navigateToCloudFeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToAsset:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(_Bool)arg3;
- (void)navigateToRevealAsset:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(_Bool)arg3;
- (void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(_Bool)arg3;
- (_Bool)contentModeIsAvailableForNavigation:(int)arg1;
- (_Bool)albumIsAvailableForNavigation:(struct NSObject *)arg1;
- (_Bool)assetIsAvailableForNavigation:(id)arg1 inAlbum:(struct NSObject *)arg2;
- (_Bool)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
- (_Bool)cloudFeedIsAvailableForNavigation;
- (_Bool)assetIsAvailableForNavigationInMoments:(id)arg1;
- (_Bool)assetIsAvailableForNavigationInMoments:(id)arg1 refetchSectionsIfNeeded:(_Bool)arg2;
- (void)navigateToMemoryWithLocalIdentifier:(id)arg1;
- (void)navigateToSuggestedCMMWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToInvitationCMMWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToMomentShareWithURL:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToPeopleAlbumAnimated:(_Bool)arg1 revealPersonWithLocalIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_navigateToMemories;
- (id)_nextCloudFeedNavigatingObject;
- (void)setImportViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)pu_shouldSelectViewController:(id)arg1;
- (struct NSObject *)_albumListForContentMode:(int)arg1 library:(id)arg2;
- (int)_contentModeForAlbum:(struct NSObject *)arg1;
- (int)_contentModeForNavigationController:(id)arg1;
- (unsigned long long)tabIdentifierForContentMode:(int)arg1;
- (int)contentModeForTabIdentifier:(unsigned long long)arg1;
- (id)_existingNavigationControllerForContentMode:(int)arg1;
- (id)_newNavigationControllerWithRootController:(id)arg1;
- (id)newRootViewControllerForContentMode:(int)arg1;
- (id)_navigationControllerForContentMode:(int)arg1;
- (_Bool)_isNavigationControllerBadged:(id)arg1;
- (void)updateDisplayedTabsAnimated:(_Bool)arg1;
- (void)_updateSharedAlbumBadges;
- (void)_enumerateViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateRootViewControllersInNavigationControllers:(id)arg1 tabBarHidden:(_Bool)arg2;
- (void)_updateTabBarVisibilityForHorizontalSizeClass:(long long)arg1;
- (void)navigateToInitialLocationInNavigationController:(id)arg1;
- (_Bool)_navigateToDefaultLocationInNavigationController:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToInitialLocationInCurrentNavigationController;
- (void)_navigateToAlbum:(struct NSObject *)arg1 andPerformAction:(int)arg2 initiallyHidden:(_Bool)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_navigateToAsset:(id)arg1 andPerformAction:(int)arg2 inAlbum:(struct NSObject *)arg3 animated:(_Bool)arg4;
- (void)_navigateToContentMode:(int)arg1 defaultLocationIfNeverDisplayed:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)_navigateToRootOfCurrentTabAnimated:(_Bool)arg1;
- (struct NSObject *)_availableAlbumToNavigateToAsset:(id)arg1 preferredAlbum:(struct NSObject *)arg2;
- (id)_navigateToForYou;
- (void)_handleFetchedMomentShare:(id)arg1 atURL:(id)arg2 error:(id)arg3 timedOut:(_Bool)arg4;
- (id)_snapBackRootViewControllerInNavigationController:(id)arg1;
- (id)_tabRootViewControllerInNavigationController:(id)arg1;
- (int)_contentModeForDestination:(id)arg1;
- (id)ppt_navigationControllerForContentMode:(int)arg1;

@end
