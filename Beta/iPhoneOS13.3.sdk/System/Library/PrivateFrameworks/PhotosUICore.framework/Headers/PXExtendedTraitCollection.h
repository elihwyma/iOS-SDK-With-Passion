/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSObject;

@protocol PXAnonymousTraitCollection, PXAnonymousViewController;

@interface PXExtendedTraitCollection : PXObservable

{
    struct {
        _Bool viewSize;
        _Bool layoutReferenceSize;
        _Bool traitCollection;
        _Bool layoutSizeClass;
        _Bool layoutDirection;
        _Bool layoutOrientation;
        _Bool contentSizeCategory;
        _Bool displayScale;
        _Bool safeAreaInsets;
        _Bool layoutMargins;
        _Bool userInterfaceIdiom;
        _Bool userInterfaceFeature;
        _Bool userInterfaceStyle;
        _Bool userInterfaceLevel;
    } _needsUpdateFlags;
    _Bool _enabled;
    struct NSObject *_traitCollection;
    long long _layoutSizeClass;
    long long _layoutSizeSubclass;
    long long _layoutOrientation;
    long long _layoutDirection;
    long long _contentSizeCategory;
    long long _userInterfaceIdiom;
    long long _userInterfaceFeature;
    double _displayScale;
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
    struct NSObject *_viewController;
    struct CGSize _layoutReferenceSize;
    struct CGSize __viewSize;
    struct CGSize __pendingViewTransitionSize;
    struct UIEdgeInsets _safeAreaInsets;
    struct UIEdgeInsets _layoutMargins;
}

@property (nonatomic, setter=_setViewSize:) struct CGSize _viewSize;
@property (nonatomic, setter=_setPendingViewTransitionSize:) struct CGSize _pendingViewTransitionSize;
@property (retain, nonatomic, setter=_setTraitCollection:) NSObject<PXAnonymousTraitCollection> *traitCollection;
@property (nonatomic, setter=_setLayoutReferenceSize:) struct CGSize layoutReferenceSize;
@property (nonatomic, setter=_setLayoutSizeClass:) long long layoutSizeClass;
@property (nonatomic, setter=_setLayoutSizeSubclass:) long long layoutSizeSubclass;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, setter=_setLayoutOrientation:) long long layoutOrientation;
@property (nonatomic) long long contentSizeCategory;
@property (nonatomic, setter=_setUserInterfaceIdiom:) long long userInterfaceIdiom;
@property (nonatomic, setter=_setUserInterfaceStyle:) long long userInterfaceStyle;
@property (nonatomic, setter=_setUserInterfaceLevel:) long long userInterfaceLevel;
@property (nonatomic, setter=_setUserInterfaceFeature:) long long userInterfaceFeature;
@property (nonatomic, setter=_setDisplayScale:) double displayScale;
@property (nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic) struct UIEdgeInsets layoutMargins;
@property (weak, nonatomic, readonly) NSObject<PXAnonymousViewController> *viewController;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)init;
- (void)dealloc;
- (id)initWithViewController:(struct NSObject *)arg1;
- (_Bool)_needsUpdate;
- (void)unregisterObservations;
- (void)registerObservations;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (struct NSObject *)createTraitCollection;
- (void)getUserInterfaceIdiom:(out long long *)arg1;
- (void)getLayoutDirection:(out long long *)arg1;
- (void)getUserInterfaceStyle:(out long long *)arg1;
- (void)getUserInterfaceLevel:(out long long *)arg1;
- (void)getSizeClass:(out long long *)arg1 sizeSubclass:(out long long *)arg2;
- (void)getContentSizeCategory:(out long long *)arg1;
- (double)displayScaleFromTraitCollection:(struct NSObject *)arg1;
- (void)viewControllerViewDidLoad;
- (void)viewControllerViewWillAppear;
- (void)viewControllerViewDidAppear;
- (void)viewControllerViewWillLayoutSubviews;
- (void)_viewWillLayoutSubviews;
- (void)viewControllerViewWillTransitionToSize:(struct CGSize)arg1;
- (void)viewControllerTraitCollectionDidChange;
- (void)viewControllerLayoutOrientationDidChange;
- (void)viewControllerViewSafeAreaInsetsDidChange;
- (void)viewControllerViewLayoutMarginsDidChange;
- (void)viewControllerDidMoveToParentViewController:(struct NSObject *)arg1;
- (void)_invalidateViewSize;
- (void)_updateViewSizeIfNeeded;
- (void)_invalidateLayoutReferenceSize;
- (void)_updateLayoutReferenceSizeIfNeeded;
- (void)invalidateTraitCollection;
- (void)_updateTraitCollectionIfNeeded;
- (void)_invalidateLayoutSizeClass;
- (void)_updateLayoutSizeClassIfNeeded;
- (void)_invalidateUserInterfaceIdiom;
- (void)_updateUserInterfaceIdiomIfNeeded;
- (void)_invalidateUserInterfaceStyle;
- (void)_updateUserInterfaceStyleIfNeeded;
- (void)_invalidateUserInterfaceLevel;
- (void)_updateUserInterfaceLevelIfNeeded;
- (void)_invalidateUserInterfaceFeature;
- (long long)userInterfaceFeatureForViewController:(struct NSObject *)arg1;
- (void)_updateUserInterfaceFeatureIfNeeded;
- (void)_invalidateLayoutDirection;
- (void)_updateLayoutDirectionIfNeeded;
- (void)_invalidateLayoutOrientation;
- (void)_updateLayoutOrientationIfNeeded;
- (void)_invalidateContentSizeCategory;
- (void)_updateContentSizeCategoryIfNeeded;
- (void)invalidateDisplayScale;
- (void)_updateDisplayScaleIfNeeded;
- (void)invalidateSafeAreaInsets;
- (void)_updateSafeAreaInsetsIfNeeded;
- (void)invalidateLayoutMargins;
- (void)_updateLayoutMarginsIfNeeded;

@end
