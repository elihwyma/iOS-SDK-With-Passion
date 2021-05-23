/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGSplitLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, PXAssetCollectionReference, PXCuratedLibraryAllPhotosLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibrarySectionHeaderLayout, PXCuratedLibrarySectionedLayout, PXCuratedLibrarySummaryHelper, PXCuratedLibraryViewModel, PXGDiagnosticsSpriteProbe, PXGSpriteReference, PXNumberAnimator;

@protocol PXBrowserVisibleContentSnapshot, PXDisplayAssetCollection;

@interface PXCuratedLibraryLayout : PXGSplitLayout <Swift>

{
    PXCuratedLibrarySectionHeaderLayout *_floatingHeaderLayout;
    PXCuratedLibrarySummaryHelper *_summaryHelper;
    CDStruct_d97c9657 _updateFlags;
    CDStruct_d97c9657 _postUpdateFlags;
    NSMutableDictionary *_lastVisibleAreaAnchorsByZoomLevels;
    NSMutableDictionary *_preferredVisibleAreaAnchorsByZoomLevels;
    PXGDiagnosticsSpriteProbe *_spriteProbe;
    _Bool _wantsStatusBarGradient;
    PXNumberAnimator *_statusBarGradientAnimator;
    unsigned short _statusBarGradientResizableCapInsetsIndex;
    unsigned int _statusBarGradientSpriteIndex;
    double _statusBarGradientAlpha;
    double _statusBarGradientHeight;
    double _statusBarGradientAndStyleFadeDuration;
    _Bool _isPerformingUpdate;
    PXCuratedLibrarySectionedLayout *_libraryBodyLayout;
    PXCuratedLibraryAllPhotosLayout *_allPhotosBodyLayout;
    long long _presentedZoomLevel;
    PXCuratedLibraryViewModel *_viewModel;
    PXGSpriteReference *_lastHitSpriteReference;
    double _lateralMargin;
    id _lastVisibleDominantObjectReference;
    PXAssetCollectionReference *_lastPresentedDayAssetCollectionReference;
    id _dominantHeroPreferencesBeforeTransition;
    PXCuratedLibraryLayoutSpec *_spec;
    struct CGRect _presentedVisibleRect;
}

@property (nonatomic) double lateralMargin;
@property (retain, nonatomic) id lastVisibleDominantObjectReference;
@property (retain, nonatomic) PXAssetCollectionReference *lastPresentedDayAssetCollectionReference;
@property (retain, nonatomic) id dominantHeroPreferencesBeforeTransition;
@property (nonatomic, readonly) PXCuratedLibraryLayoutSpec *spec;
@property (nonatomic, readonly) PXCuratedLibrarySectionedLayout *libraryBodyLayout;
@property (nonatomic, readonly) PXCuratedLibraryAllPhotosLayout *allPhotosLayout;
@property (nonatomic, readonly) long long presentedZoomLevel;
@property (nonatomic, readonly) struct CGRect presentedVisibleRect;
@property (nonatomic, readonly) struct CGRect fullyVisibleRect;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (retain, nonatomic) PXGSpriteReference *lastHitSpriteReference;
@property (nonatomic, readonly) double estimatedHeaderHeight;
@property (nonatomic, readonly) double bottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXBrowserVisibleContentSnapshot> visibleContentSnapshot;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> topmostAssetCollection;

- (void)dealloc;
- (void)update;
- (id)accessibilityLabel;
- (void)safeAreaInsetsDidChange;
- (void)setSpec:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithViewModel:(id)arg1;
- (long long)_statusBarVisibility;
- (id)imageNameAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)visibleRectDidChange;
- (void)screenScaleDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (_Bool)changeVisibleRectToProposedVisibleRect:(struct CGRect)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (_Bool)canCreateAccessibilityGroupElement;
- (_Bool)hasBodyContent;
- (_Bool)canSelectAccessibilityGroupElements;
- (_Bool)canSelectAccessibilityGroupElementsChildren;
- (id)lastVisibleAreaAnchor;
- (void)_updateLocalSprites;
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
- (struct CGPoint)anchor:(id)arg1 visibleRectOriginForProposedVisibleRect:(struct CGRect)arg2 forLayout:(id)arg3;
- (void)viewModel:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (long long)viewModel:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (void)_updateZoomLevel;
- (void)_updateLateralMargin;
- (void)_updateOverlayInsets;
- (void)_updateFloatingHeaderVisibility;
- (void)_updateFloatingHeaderTitleOpacity;
- (void)_updateStatusBarStyle;
- (void)_updateStatusBarGradientVisibility;
- (void)_updateStatusBarGradientAlphaValue;
- (void)_updateFloatingHeaderButtons;
- (void)_updateFloatingHeaderSelectionTitle;
- (double)_adjustedTargetVisibleTopToAccomodateFromBottomPaddedAreaVisibility:(_Bool)arg1 proposedVisibleRect:(struct CGRect)arg2;
- (double)_adjustedTargetVisibleTopByAligningNearestHeroForProposedTargetVisibleTop:(double)arg1;
- (double)adjustedTargetVisibleTopForProposedTargetVisibleTop:(double)arg1 scrollingVelocity:(double)arg2;
- (void)_enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)createAnchorForScrollingToInitialPosition;
- (struct CGPoint)_adjustInitialVisibleRect:(struct CGRect)arg1 inLayout:(id)arg2 forRecentSection:(long long)arg3;
- (id)presentedItemsGeometryForDataSource:(id)arg1;
- (void)_noteAnimation:(id)arg1 isRunning:(_Bool)arg2;
- (void)animationDidComplete:(id)arg1;
- (long long)curatedLibraryLayoutAnimationContextForTransitionToZoomLevel:(long long)arg1;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2;
- (id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1;
- (id)_createAnchorForTransitionToZoomLevel:(long long)arg1;
- (void)clearLastVisibleAreaAnchoringInformation;
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;
- (id)_currentBodyLayout;
- (id)topMostAssetCollectionInRect:(struct CGRect)arg1;
- (void)enumerateVisibleAssetsSectionSublayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisibleAssetReferencesUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1;
- (void)_updateLibraryBodyLayoutLastVisibleDominantObjectReference;
- (void)_updateLibraryBodyLayoutLateralMargin;
- (id)_currentFloatingHeaderSpec;
- (void)_updateFloatingHeaderLayoutSpec;
- (id)mostDominantModelObject;

@end
