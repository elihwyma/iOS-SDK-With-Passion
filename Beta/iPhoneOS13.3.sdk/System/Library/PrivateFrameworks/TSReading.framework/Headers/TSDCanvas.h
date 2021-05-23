/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, TSDInteractiveCanvasController, TSDLayoutController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;

@protocol TSDCanvasDelegate;

@interface TSDCanvas : NSObject

{
    id <TSDCanvasDelegate> mDelegate;
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mInfos;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
    struct __CFDictionary *mRepsByLayout;
    TSDLayoutController *mLayoutController;
    _Bool mIsTemporaryForLayout;
    struct CGSize mUnscaledSize;
    double mViewScale;
    double mContentsScale;
    _Bool mWideGamut;
    struct {
        unsigned int layout:1;
        unsigned int reps:1;
        unsigned int visibleBounds:1;
        unsigned int layers:1;
    } mInvalidFlags;
    _Bool mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    struct CGColor *mBackgroundColor;
    struct UIEdgeInsets mContentInset;
    _Bool mClipToCanvas;
    _Bool mAllowsFontSubpixelQuantization;
    _Bool pInTearDown;
}

@property (nonatomic) _Bool pInTearDown;
@property (nonatomic) id <TSDCanvasDelegate> delegate;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic, readonly) TSPObjectContext *objectContext;
@property (nonatomic, readonly) TSKChangeNotifier *changeNotifier;
@property (nonatomic, readonly) TSKAccessController *accessController;
@property (nonatomic, readonly) TSDInteractiveCanvasController *canvasController;
@property (nonatomic, readonly) _Bool supportsAdaptiveLayout;
@property (nonatomic) _Bool allowsFontSubpixelQuantization;
@property (nonatomic, readonly) double contentsScale;
@property (nonatomic, readonly) _Bool canvasIsWideGamut;
@property (nonatomic) struct CGColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (copy, nonatomic) NSArray *infosToDisplay;
@property (nonatomic, readonly) TSDLayoutController *layoutController;
@property (nonatomic, readonly) _Bool isTemporaryForLayout;
@property (nonatomic, readonly) _Bool isCanvasInteractive;
@property (nonatomic) struct CGSize unscaledSize;
@property (nonatomic) double viewScale;

- (id)init;
- (void)dealloc;
- (void)teardown;
- (void)layoutIfNeeded;
- (id)allReps;
- (void)invalidateLayers;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;
- (id)topLevelReps;
- (_Bool)spellCheckingSupported;
- (_Bool)spellCheckingSuppressed;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)shouldShowInstructionalText;
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 inTopLevelReps:(id)arg2 smallRepOutset:(double)arg3 withGesture:(id)arg4 passingTest:(CDUnknownBlockType)arg5;
- (void)invalidateReps;
- (void)invalidateVisibleBounds;
- (void)i_setCanvasController:(id)arg1;
- (_Bool)isPrinting;
- (void)p_layoutWithReadLock;
- (void)layoutInvalidated;
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(_Bool)arg2;
- (void)i_updateInfosInLayoutController;
- (id)repForLayout:(id)arg1;
- (void)recreateAllLayoutsAndReps;
- (void)i_unregisterRep:(id)arg1;
- (_Bool)i_needsLayout;
- (struct CGRect)i_unscaledRectOfLayouts;
- (_Bool)shouldSuppressBackgrounds;
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;
- (void)i_registerRep:(id)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(_Bool)arg3;
- (void)i_clipsImagesToBounds:(_Bool)arg1;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1;
- (void)i_drawRepsInContext:(struct CGContext *)arg1;
- (struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 returningBounds:(struct CGRect *)arg3 integralBounds:(struct CGRect *)arg4;
- (struct CGImage *)i_newImageInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 integralBounds:(struct CGRect)arg3 distortedToMatch:(_Bool)arg4;
- (id)layoutGeometryProviderForLayout:(id)arg1;
- (id)initForTemporaryLayout;
- (_Bool)isDrawingIntoPDF;
- (struct CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint)arg1;
- (void)p_removeAllReps;
- (_Bool)p_updateRepsFromLayouts;
- (struct CGRect)p_bounds;
- (_Bool)p_expandHitRegionOfPoint:(struct CGPoint)arg1 forRep:(id)arg2 smallRepOutset:(double)arg3 forShortestDistance:(double *)arg4;
- (_Bool)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(double)arg2;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)i_drawRepsInContext:(struct CGContext *)arg1 distort:(struct CGAffineTransform)arg2;
- (struct CGRect)i_clipRectForCreatingRepsFromLayouts;
- (void)i_setContentsScale:(double)arg1;
- (void)i_setCanvasIsWideGamut:(_Bool)arg1;
- (struct CGRect)visibleUnscaledRectForClippingReps;
- (struct CGImage *)i_image;
- (id)textRendererForLayer:(id)arg1 context:(struct CGContext *)arg2;

@end
