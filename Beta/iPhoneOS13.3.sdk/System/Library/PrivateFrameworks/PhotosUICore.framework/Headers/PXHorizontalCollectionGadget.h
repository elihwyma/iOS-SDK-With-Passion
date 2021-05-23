/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetUIViewController.h>

@class NSDictionary, NSString, PXGadgetOrbContext, PXGadgetSpec;

@protocol PXGadgetDelegate, PXHorizontalCollectionGadgetDelegate;

@interface PXHorizontalCollectionGadget : PXGadgetUIViewController

{
    _Bool _isFixedHeight;
    _Bool _visibleGadgetsLoaded;
    _Bool _isPerformingChanges;
    _Bool _isResourceLoaded;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    id <PXHorizontalCollectionGadgetDelegate> _horizontalGadgetDelegate;
    NSString *_collectionTitle;
    unsigned long long _collectionAccessoryButtonType;
    NSString *_collectionAccessoryButtonTitle;
    double _collectionHeight;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpans;
    unsigned long long _gadgetType;
    unsigned long long _headerStyle;
    CDUnknownBlockType _accessoryButtonAction;
    PXGadgetOrbContext *_previewOrbContext;
    long long _currentColumnSpan;
    struct CGSize _cachedMaxHeightForColumnWidth;
    struct CGRect _visibleContentRect;
}

@property (nonatomic) _Bool visibleGadgetsLoaded;
@property (nonatomic) _Bool isPerformingChanges;
@property (nonatomic) _Bool isResourceLoaded;
@property (retain, nonatomic) PXGadgetOrbContext *previewOrbContext;
@property (nonatomic) long long currentColumnSpan;
@property (nonatomic) struct CGSize cachedMaxHeightForColumnWidth;
@property (weak, nonatomic) id <PXHorizontalCollectionGadgetDelegate> horizontalGadgetDelegate;
@property (copy, nonatomic, readonly) NSString *collectionTitle;
@property (nonatomic, readonly) unsigned long long collectionAccessoryButtonType;
@property (copy, nonatomic, readonly) NSString *collectionAccessoryButtonTitle;
@property (nonatomic, readonly) double collectionHeight;
@property (nonatomic) _Bool isFixedHeight;
@property (nonatomic) long long defaultColumnSpan;
@property (copy, nonatomic) NSDictionary *columnSpans;
@property (nonatomic) unsigned long long gadgetType;
@property (nonatomic) unsigned long long headerStyle;
@property (copy, nonatomic) CDUnknownBlockType accessoryButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

- (void)setLayout:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)visibleBounds;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct NSObject *)contentViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)gadgetTransition;
- (id)rootNavigationHelper;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2;
- (void)contentViewWillAppear;
- (void)contentViewDidDisappear;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (struct NSObject *)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1;
- (id)initWithProviders:(id)arg1;
- (void)setCollectionTitle:(id)arg1;
- (_Bool)navigateToGadget:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isRootGadgetViewController;
- (void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
- (void)setCollectionAccessoryButtonTitle:(id)arg1;
- (void)setCollectionHeight:(double)arg1;
- (void)_updateCollectionViewPaging;
- (void)_extendedTraitCollectionDidChange:(unsigned long long)arg1;
- (struct CGSize)_ensureCachedHeightForColumnWidth:(double)arg1;
- (long long)_columnSpanForTraitCollection:(id)arg1;
- (void)_updateColumnSettings;

@end
