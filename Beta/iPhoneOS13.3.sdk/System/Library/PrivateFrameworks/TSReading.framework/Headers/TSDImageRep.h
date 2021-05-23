/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaRep.h>

#import <TSReading/Swift-Protocol.h>

@class CALayer, CAShapeLayer, NSCache, NSMutableArray, NSObject, NSRecursiveLock, NSString, TSDImageRepSizingState, TSDInstantAlphaTracker, TSDLayoutGeometry;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDImageRep : TSDMediaRep <Swift>

{
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    struct CGAffineTransform mLastLayoutToImageTransform;
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    CALayer *mContentsLayer;
    CAShapeLayer *mMaskPathLayer;
    CAShapeLayer *mIAMaskLayer;
    CAShapeLayer *mMaskSublayer;
    struct CGAffineTransform mLastPictureFrameLayerTransform;
    _Bool mDirectlyManagesLayerContent;
    _Bool mShowImageHighlight;
    _Bool mInInstantAlphaMode;
    TSDInstantAlphaTracker *mInstantAlphaTracker;
    struct CGImage *mInstantAlphaImage;
    struct CGAffineTransform mBaseMaskLayoutTransform;
    NSRecursiveLock *mLayerUpdateAndSizingStateLock;
    TSDImageRepSizingState *mSizingState;
    _Bool mSizingStateReady;
    NSObject<OS_dispatch_queue> *mSizedImageAccessQueue;
    struct CGImage *mSizedImage;
    struct CGSize mSizedImageSize;
    long long mSizedImageOrientation;
    _Bool mSizedImageHasMaskBakedIn;
    _Bool mSizedImageHasAdjustmentsBakedIn;
    struct CGPath *mSizedImageMaskPath;
    struct CGImage *mCachedSizedImage;
    struct CGSize mCachedSizedImageSize;
    long long mCachedSizedImageOrientation;
    NSCache *mHitTestCache;
    long long mHitTestCacheOnce;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
    unsigned long long mImageSizingDisabledCount;
}

@property (nonatomic, readonly) struct CGImage *imageRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
+ (struct CGPath *)p_newPathToBakeIntoSizedImageForSize:(struct CGSize)arg1 withImageLayout:(id)arg2 orientation:(long long)arg3;

- (void)dealloc;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (_Bool)shouldShowShadow;
- (void)highlightImage;
- (void)willBeRemoved;
- (id)imageInfo;
- (_Bool)isDraggable;
- (void)viewScaleDidChange;
- (_Bool)directlyManagesLayerContent;
- (struct CGRect)frameInUnscaledCanvas;
- (void)didUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (id)contentsLayer;
- (struct CGRect)targetRectForEditMenu;
- (void)willBeginReadMode;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (void)processChanges:(id)arg1;
- (void)i_willEnterForeground;
- (void)wideGamutValueDidChange;
- (void)didCreateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)addKnobsToArray:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (_Bool)shouldCreateSelectionKnobs;
- (struct CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect)arg2;
- (struct CGRect)boundsForHighlightLayer;
- (struct CGAffineTransform)transformForHighlightLayer;
- (_Bool)shouldShowSelectionHighlight;
- (struct CGPoint)centerForRotation;
- (_Bool)canDrawInParallel;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)updateFromLayout;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)becameNotSelected;
- (double)additionalRotationForKnobOrientation;
- (_Bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (id)textureForContext:(id)arg1;
- (_Bool)shouldShowDragHUD;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (_Bool)wantsToDistortWithImagerContext;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (void)p_updateDirectlyManagesLayerContentForLayer:(id)arg1;
- (void)p_disposeStrokeLayer;
- (void)p_disposeMaskLayer;
- (id)maskInfo;
- (id)imageLayout;
- (id)maskLayout;
- (_Bool)p_hitCacheGetCachedValue:(_Bool *)arg1 forPoint:(struct CGPoint)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 withIAMask:(_Bool)arg6 forLayer:(_Bool)arg7 forShadow:(_Bool)arg8 forHitTest:(_Bool)arg9;
- (void)p_hitCacheSetCachedValue:(_Bool)arg1 forPoint:(struct CGPoint)arg2;
- (void)p_invalidateSizedImage;
- (_Bool)shouldShowSmartMaskKnobs;
- (id)p_validatedBitmapImageProvider;
- (void)p_invalidateSizedImageFromQueue;
- (void)p_invalidateHitTestCache;
- (_Bool)shouldShowMediaReplaceUI;
- (_Bool)shouldAllowReplacementFromPaste;
- (struct CGImage *)p_newImageByApplyingAdjustmentsToImage:(struct CGImage *)arg1 alreadyEnhanced:(_Bool)arg2;
- (id)p_validatedThumbnailImageProvider;
- (id)p_validatedImageProvider;
- (id)p_imageData;
- (struct CGSize)p_desiredSizedImageSize;
- (void)p_generateSizedImageIfNecessary;
- (void)p_takeSizedImageFromStateIfReady;
- (_Bool)p_directlyManagesContentForLayer:(id)arg1;
- (struct CGImage *)p_imageForDirectlyManagedLayer:(id)arg1;
- (_Bool)p_shouldRenderWithMaskToBounds;
- (void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(out struct CGRect *)arg1 transform:(out struct CGAffineTransform *)arg2;
- (long long)p_orientationForDirectlyManagedLayer;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (_Bool)p_shouldBakeMaskIntoSizedImage;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (_Bool)p_shouldMaskWithFrameLayers;
- (void)p_updateMaskSublayersForMaskEditMode;
- (void)p_updateMaskLayer:(id)arg1 forRepLayer:(id)arg2 shouldIncludeMask:(_Bool)arg3 shouldIncludeInstantAlpha:(_Bool)arg4;
- (id)p_imageProvider;
- (_Bool)p_drawsInOneStep;
- (_Bool)p_okayToGenerateSizedImage;
- (void)p_takeSizedImageFromCache;
- (void)p_startSizing;
- (void)p_generateSizedImage:(id)arg1;
- (void)p_takeSizedImageFromState;
- (_Bool)p_takeSizedImageFromState:(id)arg1;
- (void)unhighlightImage;
- (void)p_canvasSelectionDidChange:(id)arg1;
- (void)pushDisableImageSizing;
- (void)popDisableImageSizing;
- (void)cacheImageAtCurrentSize;
- (id)newCachedSizedImage;
- (id)newCachedSizedImageWithNaturalSize;
- (void)useCachedSizedImage:(id)arg1;
- (void)generateSizedImageOnBackgroundThread;
- (void)p_popoverViewPresented:(id)arg1;

@end
