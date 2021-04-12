//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSObject;
@protocol PXAnonymousTraitCollection, PXAnonymousViewController;

@interface PXExtendedTraitCollection : PXObservable
{
    struct {
        BOOL viewSize;
        BOOL layoutReferenceSize;
        BOOL traitCollection;
        BOOL layoutSizeClass;
        BOOL layoutDirection;
        BOOL layoutOrientation;
        BOOL contentSizeCategory;
        BOOL displayScale;
        BOOL safeAreaInsets;
        BOOL layoutMargins;
        BOOL userInterfaceIdiom;
        BOOL userInterfaceFeature;
        BOOL userInterfaceStyle;
        BOOL userInterfaceLevel;
    } _needsUpdateFlags;
    BOOL _enabled;
    NSObject _traitCollection;
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
    NSObject _viewController;
    CGSize _layoutReferenceSize;
    CGSize __viewSize;
    CGSize __pendingViewTransitionSize;
    UIEdgeInsets _safeAreaInsets;
    UIEdgeInsets _layoutMargins;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak NSObject<PXAnonymousViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, setter=_setPendingViewTransitionSize:) CGSize _pendingViewTransitionSize; // @synthesize _pendingViewTransitionSize=__pendingViewTransitionSize;
@property(nonatomic, setter=_setViewSize:) CGSize _viewSize; // @synthesize _viewSize=__viewSize;
@property(nonatomic, setter=_setUserInterfaceLevel:) long long userInterfaceLevel; // @synthesize userInterfaceLevel=_userInterfaceLevel;
@property(nonatomic, setter=_setUserInterfaceStyle:) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic, setter=_setDisplayScale:) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic, setter=_setLayoutReferenceSize:) CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property(nonatomic, setter=_setUserInterfaceFeature:) long long userInterfaceFeature; // @synthesize userInterfaceFeature=_userInterfaceFeature;
@property(nonatomic, setter=_setUserInterfaceIdiom:) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) long long contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic, setter=_setLayoutOrientation:) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic, setter=_setLayoutSizeSubclass:) long long layoutSizeSubclass; // @synthesize layoutSizeSubclass=_layoutSizeSubclass;
@property(nonatomic, setter=_setLayoutSizeClass:) long long layoutSizeClass; // @synthesize layoutSizeClass=_layoutSizeClass;
@property(retain, nonatomic, setter=_setTraitCollection:) NSObject<PXAnonymousTraitCollection> *traitCollection; // @synthesize traitCollection=_traitCollection;
// - (void).cxx_destruct;
- (void)_updateLayoutMarginsIfNeeded;
- (void)invalidateLayoutMargins;
- (void)_updateSafeAreaInsetsIfNeeded;
- (void)invalidateSafeAreaInsets;
- (void)_updateDisplayScaleIfNeeded;
- (void)invalidateDisplayScale;
- (void)_updateContentSizeCategoryIfNeeded;
- (void)_invalidateContentSizeCategory;
- (void)_updateLayoutOrientationIfNeeded;
- (void)_invalidateLayoutOrientation;
- (void)_updateLayoutDirectionIfNeeded;
- (void)_invalidateLayoutDirection;
- (void)_updateUserInterfaceFeatureIfNeeded;
- (long long)userInterfaceFeatureForViewController:(NSObject )arg1;
- (void)_invalidateUserInterfaceFeature;
- (void)_updateUserInterfaceLevelIfNeeded;
- (void)_invalidateUserInterfaceLevel;
- (void)_updateUserInterfaceStyleIfNeeded;
- (void)_invalidateUserInterfaceStyle;
- (void)_updateUserInterfaceIdiomIfNeeded;
- (void)_invalidateUserInterfaceIdiom;
- (void)_updateLayoutSizeClassIfNeeded;
- (void)_invalidateLayoutSizeClass;
- (void)_updateTraitCollectionIfNeeded;
- (void)invalidateTraitCollection;
- (void)_updateLayoutReferenceSizeIfNeeded;
- (void)_invalidateLayoutReferenceSize;
- (void)_updateViewSizeIfNeeded;
- (void)_invalidateViewSize;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)viewControllerDidMoveToParentViewController:(NSObject )arg1;
- (void)viewControllerViewLayoutMarginsDidChange;
- (void)viewControllerViewSafeAreaInsetsDidChange;
- (void)viewControllerLayoutOrientationDidChange;
- (void)viewControllerTraitCollectionDidChange;
- (void)viewControllerViewWillTransitionToSize:(CGSize)arg1;
- (void)_viewWillLayoutSubviews;
- (void)viewControllerViewWillLayoutSubviews;
- (void)viewControllerViewDidAppear;
- (void)viewControllerViewWillAppear;
- (void)viewControllerViewDidLoad;
- (void)dealloc;
- (id)initWithViewController:(NSObject )arg1;
- (id)init;
- (void)unregisterObservations;
- (void)registerObservations;
- (double)displayScaleFromTraitCollection:(NSObject )arg1;
- (void)getContentSizeCategory:(out long long )arg1;
- (void)getSizeClass:(out long long )arg1 sizeSubclass:(out long long )arg2;
- (void)getUserInterfaceLevel:(out long long )arg1;
- (void)getUserInterfaceStyle:(out long long )arg1;
- (void)getLayoutDirection:(out long long )arg1;
- (void)getUserInterfaceIdiom:(out long long )arg1;
- (NSObject )createTraitCollection;

@end

