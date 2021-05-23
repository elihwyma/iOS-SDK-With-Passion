/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXFetchResultBasedMemoriesDataSourceManager, PXMemoriesFeedUIViewController, PXMemoriesUIViewController, UIBarButtonItem;

@interface PXTogglingMemoriesViewController : UIViewController <Swift>

{
    _Bool _onlyShowFavorites;
    _Bool _hasAnyMemories;
    PXFetchResultBasedMemoriesDataSourceManager *_favoriteMemoriesDataSourceManager;
    PXMemoriesUIViewController *_favoriteMemoriesViewController;
    UIBarButtonItem *_toggleButton;
    PXMemoriesFeedUIViewController *_memoriesViewController;
}

@property (retain, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (retain, nonatomic) PXMemoriesUIViewController *favoriteMemoriesViewController;
@property (nonatomic, readonly) PXMemoriesFeedUIViewController *currentViewController;
@property (nonatomic, readonly) NSString *currentBarButtonTitle;
@property (nonatomic, setter=setShouldOnlyShowFavorites:) _Bool onlyShowFavorites;
@property (nonatomic, readonly) UIBarButtonItem *toggleButton;
@property (nonatomic) _Bool hasAnyMemories;
@property (nonatomic, readonly) PXMemoriesFeedUIViewController *memoriesViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;

- (id)init;
- (void)viewDidLoad;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)toggle;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)prepareForInteractiveTransition:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)_configureMemoryViewControllers;
- (void)_configureBarButton;
- (void)_configureTitle;
- (void)_configureTitleInset;
- (void)_reloadCurrentViewController;

@end
