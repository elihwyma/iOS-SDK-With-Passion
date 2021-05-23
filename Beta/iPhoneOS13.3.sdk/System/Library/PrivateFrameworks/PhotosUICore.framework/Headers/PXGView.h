/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class MTKView, NSDictionary, NSString, PXGAnchor, PXGDebugHUDLayer, PXGEngine, PXGLayout, PXGRectDiagnosticsLayer, PXScrollViewController, PXScrollViewSpeedometer, UIColor;

@protocol PXGViewAccessibilityDelegate, PXGViewDiagnosticsSource;

@interface PXGView : UIView

{
    PXGDebugHUDLayer *_debugHUDLayer;
    PXGRectDiagnosticsLayer *_rectDiagnosticsLayer;
    UIColor *_backgroundColor;
    _Bool canSelectAccessibilityGroupElements;
    _Bool canSelectAccessibilityGroupElementsChildren;
    _Bool _isScrolling;
    _Bool _isAnimatingScroll;
    _Bool _showDebugHUD;
    _Bool _showPerspectiveDebug;
    _Bool _ignoreBoundsChanges;
    PXGLayout *accessibilityRootLayout;
    id <PXGViewAccessibilityDelegate> _accessibilityDelegate;
    PXScrollViewController *_scrollViewController;
    PXScrollViewSpeedometer *_scrollingSpeedometer;
    MTKView *_metalView;
    PXGAnchor *_scrollingAnimationAnchor;
    NSDictionary *_ppt_currentTestOptions;
    CDUnknownBlockType _nextDidLayoutHandler;
    id <PXGViewDiagnosticsSource> _diagnosticsSource;
    PXGEngine *_engine;
    struct UIEdgeInsets _hitTestPadding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MTKView *metalView;
@property (nonatomic, readonly) struct UIEdgeInsets hitTestPadding;
@property (nonatomic) _Bool isScrolling;
@property (nonatomic) _Bool isAnimatingScroll;
@property (retain, nonatomic) PXGAnchor *scrollingAnimationAnchor;
@property (copy, nonatomic, setter=ppt_setCurrentTestOptions:) NSDictionary *ppt_currentTestOptions;
@property (copy, nonatomic) CDUnknownBlockType nextDidLayoutHandler;
@property (nonatomic, readonly) _Bool hasExtendedColorDisplay;
@property (nonatomic) _Bool showDebugHUD;
@property (nonatomic) _Bool showPerspectiveDebug;
@property (retain, nonatomic) id <PXGViewDiagnosticsSource> diagnosticsSource;
@property (nonatomic) _Bool slowAnimationsEnabled;
@property (nonatomic) _Bool ignoreBoundsChanges;
@property (nonatomic, readonly) PXGEngine *engine;
@property (nonatomic, readonly) NSDictionary *ppt_extraResults;
@property (weak, nonatomic) id <PXGViewAccessibilityDelegate> accessibilityDelegate;
@property (retain, nonatomic) PXGLayout *rootLayout;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, readonly) PXScrollViewSpeedometer *scrollingSpeedometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PXGLayout *accessibilityRootLayout;
@property (nonatomic, readonly) _Bool canSelectAccessibilityGroupElements;
@property (nonatomic, readonly) _Bool canSelectAccessibilityGroupElementsChildren;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

+ (_Bool)isAvailable;
+ (_Bool)forceAccessibilityEnabled;
+ (long long)screenPixelCount;
+ (void)setForceAccessibilityEnabled:(_Bool)arg1;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (struct UIColor *)backgroundColor;
- (void)setBackgroundColor:(struct UIColor *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)scrollViewControllerDidLayoutSubviews:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (id)viewForSpriteIndex:(unsigned int)arg1;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControls:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControl:(long long)arg2;
- (void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)curatedLibraryHitTestResultsInRect:(struct CGRect)arg1 withControl:(long long)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (id)regionOfInterestForObjectReference:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2 fallbackMediaProvider:(id)arg3;
- (_Bool)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;
- (struct CGImage *)_fallbackImageForAssetReference:(id)arg1 mediaProvider:(id)arg2;
- (void)test_installRenderSnapshotHandler:(CDUnknownBlockType)arg1;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;
- (void)selectAssets:(id)arg1;
- (_Bool)itemWasDoubleClickedWithHitTestResult:(id)arg1;
- (_Bool)itemWasRightClickedWithHitTestResult:(id)arg1 location:(struct CGPoint)arg2;
- (_Bool)itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (_Bool)itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (id)accessibilityHitTestResultAtPoint:(struct CGPoint)arg1;
- (id)assetClosestToAsset:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)axScrollToAsset:(id)arg1;
- (void)notifySelectedCellsChanged;
- (void)engine:(id)arg1 updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg2;
- (void)_forceAccessibilityEnabledChanged:(id)arg1;
- (void)_applicationAccessibilityStatusChanged:(id)arg1;
- (void)_updateAccessibilityStatus;
- (void)_willChangeBoundsSizeFrom:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
- (void)_updateMetalView;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3;
- (void)installAnimationRenderingCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateLayoutViewEnvironment;
- (void)_updateIsVisible;
- (void)_updateLayoutScreenScale;
- (void)_updateUserInterfaceDirection;
- (void)_installNextDidLayoutHandler:(CDUnknownBlockType)arg1;
- (void)installLayoutCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disablePreheating;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitTestResultsInRect:(struct CGRect)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2;
- (id)regionOfInterestForSpriteReference:(id)arg1;
- (id)regionOfInterestForHitTestResult:(id)arg1;
- (struct CGImage *)textureSnapshotForSpriteReference:(id)arg1;
- (void)_ensureEndAnimatedScroll;
- (void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(_Bool)arg3;
- (void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(_Bool)arg2;

@end
