/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableSet, NSString, PHCachingImageManager, PHImageRequestOptions, PXBasicUIViewTileAnimator, PXMemoriesFeedViewControllerHelper, PXMemoriesFeedWidgetLayoutMetrics, PXMemoriesUITileSource, PXUIScrollViewController, PXUITapGestureRecognizer;

@protocol PXMemoriesFeedWidgetViewControllerDelegate;

@interface PXMemoriesFeedWidgetViewController : UIViewController <Swift>

{
    NSMutableSet *_checkedOutTiles;
    CDUnknownBlockType _refreshMemoriesCompletionHandler;
    long long _waitForDataSourceChangeRequestDismissalID;
    _Bool _hasAppeared;
    _Bool _hasAnyMemories;
    id <PXMemoriesFeedWidgetViewControllerDelegate> _delegate;
    unsigned long long _availableNumberOfRows;
    PXMemoriesFeedViewControllerHelper *__helper;
    PXMemoriesUITileSource *__tileSource;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    PHCachingImageManager *__imageManager;
    PXUITapGestureRecognizer *__tapRecognizer;
    PHImageRequestOptions *__assetImageRequestOptions;
    long long __requestDismissalID;
    PXMemoriesFeedWidgetLayoutMetrics *__metrics;
}

@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) PHCachingImageManager *_imageManager;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PHImageRequestOptions *_assetImageRequestOptions;
@property (nonatomic, setter=_setRequestDismissalID:) long long _requestDismissalID;
@property (nonatomic) _Bool hasAnyMemories;
@property (nonatomic, setter=_setAvailableNumberOfRows:) unsigned long long availableNumberOfRows;
@property (copy, nonatomic, setter=_setMetrics:) PXMemoriesFeedWidgetLayoutMetrics *_metrics;
@property (weak, nonatomic) id <PXMemoriesFeedWidgetViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long userInterfaceFeature;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)_dataSourceManager;
- (void)_handleScrollViewTap:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (void)_handleSpecChange;
- (_Bool)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (void)memoriesFeedViewControllerHelper:(id)arg1 configureMetrics:(id)arg2;
- (void)invalidateReferenceSize;
- (void)invalidateNumberOfRowsVisible;
- (void)refreshMemoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_incrementRequestDismissalID;
- (void)_callRefreshMemoriesCompletionHandlerWithResult:(unsigned long long)arg1;
- (void)_handleNewMemoriesRequestTimeoutWithRequestDismissalID:(long long)arg1;
- (void)_handleNewMemoriesRequestFinishedWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_updateAvailableNumberOfRows;
- (void)_handleDataSourceChange;

@end
