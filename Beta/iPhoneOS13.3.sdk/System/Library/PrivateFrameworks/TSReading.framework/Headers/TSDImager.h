/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSArray, NSString, TSDCanvas, TSKDocumentRoot;

@interface TSDImager : NSObject <Swift>

{
    NSArray *mInfos;
    struct CGColor *mBackgroundColor;
    struct CGRect mUnscaledClipRect;
    double mViewScale;
    struct CGSize mScaledImageSize;
    struct CGSize mMaximumScaledImageSize;
    _Bool mUseScaledImageSize;
    _Bool mDistortedToMatch;
    _Bool mImageMustHaveEvenDimensions;
    _Bool mShouldReuseBitmapContext;
    struct UIEdgeInsets mContentInset;
    TSKDocumentRoot *mDocumentRoot;
    TSDCanvas *mCanvas;
    struct CGRect mActualScaledClipRect;
    _Bool mDrawingIntoPDF;
    _Bool mIsPrinting;
    struct CGContext *mReusableBitmapContext;
    struct CGRect mReusableBounds;
    struct CGRect mReusableIntegralBounds;
    struct CGRect mReusableActualScaledClipRect;
    struct CGSize mReusableScaledImageSize;
    CDUnknownBlockType mPostRenderAction;
}

@property (retain, nonatomic) NSArray *infos;
@property (nonatomic) struct CGColor *backgroundColor;
@property (nonatomic) struct CGRect unscaledClipRect;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGSize scaledImageSize;
@property (nonatomic) struct CGSize maximumScaledImageSize;
@property (nonatomic) _Bool distortedToMatch;
@property (nonatomic) _Bool imageMustHaveEvenDimensions;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) struct CGRect actualScaledClipRect;
@property (nonatomic) _Bool shouldReuseBitmapContext;
@property (nonatomic) _Bool isPrinting;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)pdfData;
- (id)documentRoot;
- (_Bool)isPrintingCanvas;
- (id)initWithDocumentRoot:(id)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;
- (_Bool)p_configureCanvas;
- (struct CGImage *)p_newImageInReusableContext;
- (void)p_drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;
- (void)setPostRenderAction:(CDUnknownBlockType)arg1;
- (struct CGImage *)newImage;
- (_Bool)drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;

@end
