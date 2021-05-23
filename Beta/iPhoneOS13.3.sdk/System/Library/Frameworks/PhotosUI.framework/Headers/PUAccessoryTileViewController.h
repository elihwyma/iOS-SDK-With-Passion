/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PUAssetReference, PUAssetViewModel, UIView, UIViewController;

@protocol PUAccessoryContentViewController, PUAccessoryTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryTileViewController : PUTileViewController

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    _Bool _isUpdateScheduled;
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToWillHideToolbarWhenShowingAccessoryView;
    } _delegateFlags;
    struct {
        _Bool contentViewController;
        _Bool loadedContentViewController;
        _Bool contentViewMetrics;
        _Bool contentBounds;
        _Bool masterContentOffset;
    } _needsUpdateFlags;
    _Bool __wasActiveOnLastMasterContentOffsetChange;
    id <PUAccessoryTileViewControllerDelegate> _delegate;
    PUAssetViewModel *_assetViewModel;
    PUAssetReference *_assetReference;
    UIViewController<PUAccessoryContentViewController> *__contentViewController;
    UIViewController<PUAccessoryContentViewController> *__loadedContentViewController;
    UIView *__contentView;
    long long __contentInsetsChangeReason;
    double __minimumVisibleHeight;
    struct CGRect __contentBounds;
    struct CGRect __untransformedMasterContentFrame;
    struct UIEdgeInsets __contentInsets;
    struct CGRect __keyboardFrame;
}

@property (retain, nonatomic, setter=_setContentViewController:) UIViewController<PUAccessoryContentViewController> *_contentViewController;
@property (retain, nonatomic, setter=_setLoadedContentViewController:) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController;
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (nonatomic, setter=_setContentBounds:) struct CGRect _contentBounds;
@property (nonatomic, setter=_setUntransformedMasterContentFrame:) struct CGRect _untransformedMasterContentFrame;
@property (nonatomic, setter=_setContentInsets:) struct UIEdgeInsets _contentInsets;
@property (nonatomic, setter=_setKeyboardFrame:) struct CGRect _keyboardFrame;
@property (nonatomic, setter=_setContentInsetsChangeReason:) long long _contentInsetsChangeReason;
@property (nonatomic, setter=_setMinimumVisibleHeight:) double _minimumVisibleHeight;
@property (nonatomic, setter=_setWasActiveOnLastMasterContentOffsetChange:) _Bool _wasActiveOnLastMasterContentOffsetChange;
@property (weak, nonatomic) id <PUAccessoryTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (_Bool)_needsUpdate;
- (void)_invalidateContentBounds;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1;
- (void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)didChangeActive;
- (_Bool)isLocationFromProviderInContentArea:(id)arg1;
- (void)_handleScheduledUpdate;
- (void)_invalidateContentViewController;
- (void)_updateContentViewControllerIfNeeded;
- (void)_invalidateLoadedContentViewController;
- (void)_updateLoadedContentViewControllerIfNeeded;
- (void)_invalidateContentViewMetrics;
- (void)_updateContentViewMetricsIfNeeded;
- (void)_updateContentBoundsIfNeeded;
- (void)_invalidateMasterContentOffset;
- (void)_updateMasterContentOffsetIfNeeded;

@end
