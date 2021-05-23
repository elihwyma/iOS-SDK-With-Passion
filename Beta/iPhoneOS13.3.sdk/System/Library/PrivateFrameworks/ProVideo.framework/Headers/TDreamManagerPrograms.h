/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class TDreamBFBlurPassOne, TDreamBFBlurPassOneOpt, TDreamBFBlurPassTwo, TDreamBFBlurPassTwoOpt, TDreamBlend, TDreamColorStroke, TDreamColorStrokeOpt, TDreamColoricer, TDreamDistortionFX, TDreamEdges, TDreamEdgesOpt, TDreamGaussBlurExpress, TDreamGaussBlurExpressOpt9, TDreamGaussBlurExpressPassTwo, TDreamGaussBlurExpressPassTwoOpt9, TDreamGrayscale, TDreamLookupFilter, TDreamLookupFilterOpt, TDreamMaskBlend, TDreamOutputBuffer, TDreamQuanticeOpt, TDreamSobel, TDreamSobelOpt, TDreamStroke, TDreamStrokeAndBlend, TDreamStrokeAndBlendOpt, TDreamVignette, TDreamVignetteAndQuantice, TDreamZoomOutFX;

@interface TDreamManagerPrograms : NSObject

{
    TDreamMaskBlend *_blendWithMask;
    TDreamBFBlurPassOne *_bfBlurPassOne;
    TDreamBFBlurPassOneOpt *_bfBlurPassOneOpt;
    TDreamBFBlurPassTwo *_bfBlurPassTwo;
    TDreamBFBlurPassTwoOpt *_bfBlurPassTwoOpt;
    TDreamVignetteAndQuantice *_quanticeFilter;
    TDreamQuanticeOpt *_quanticeFilterOpt;
    TDreamSobel *_sobelFilter;
    TDreamSobelOpt *_sobelFilterOpt;
    TDreamBlend *_blenderFilter;
    TDreamEdgesOpt *_edgesFilterOpt;
    TDreamEdges *_edgesFilter;
    TDreamStroke *_strokeFilter;
    TDreamStrokeAndBlend *_strokeAndBlendFilter;
    TDreamStrokeAndBlendOpt *_strokeAndBlendFilterOpt;
    TDreamGaussBlurExpress *_gaussFilter;
    TDreamGaussBlurExpressPassTwo *_gaussFilter2;
    TDreamGaussBlurExpressOpt9 *_gaussFilterOpt9;
    TDreamGaussBlurExpressPassTwoOpt9 *_gaussFilter2Opt9;
    TDreamVignette *_vigneteFilter;
    TDreamZoomOutFX *_zoomOutFx;
    TDreamDistortionFX *_distortionFx;
    TDreamLookupFilter *_lookupFilter;
    TDreamLookupFilterOpt *_lookupFilterOpt;
    TDreamColoricer *_colorizer;
    TDreamGrayscale *_grayScaletor;
    TDreamColorStrokeOpt *_colorStrokeFilterOpt;
    TDreamColorStroke *_colorStrokeFilter;
    TDreamSobel *_sobelFilterQ;
    TDreamSobelOpt *_sobelFilterQOpt;
    TDreamGaussBlurExpress *_extraGaussFilterQ;
    TDreamGaussBlurExpressPassTwo *_extraGaussFilter2Q;
    TDreamGaussBlurExpressOpt9 *_extraGaussFilterQOpt9;
    TDreamGaussBlurExpressPassTwoOpt9 *_extraGaussFilter2QOpt9;
    TDreamOutputBuffer *_outputBuffer;
}

@property (retain) TDreamMaskBlend *blendWithMask;
@property (retain) TDreamBFBlurPassOne *bfBlurPassOne;
@property (retain) TDreamBFBlurPassOneOpt *bfBlurPassOneOpt;
@property (retain) TDreamBFBlurPassTwo *bfBlurPassTwo;
@property (retain) TDreamBFBlurPassTwoOpt *bfBlurPassTwoOpt;
@property (retain) TDreamVignetteAndQuantice *quanticeFilter;
@property (retain) TDreamQuanticeOpt *quanticeFilterOpt;
@property (retain) TDreamSobel *sobelFilter;
@property (retain) TDreamSobelOpt *sobelFilterOpt;
@property (retain) TDreamBlend *blenderFilter;
@property (retain) TDreamEdgesOpt *edgesFilterOpt;
@property (retain) TDreamEdges *edgesFilter;
@property (retain) TDreamStroke *strokeFilter;
@property (retain) TDreamStrokeAndBlend *strokeAndBlendFilter;
@property (retain) TDreamStrokeAndBlendOpt *strokeAndBlendFilterOpt;
@property (retain) TDreamGaussBlurExpress *gaussFilter;
@property (retain) TDreamGaussBlurExpressPassTwo *gaussFilter2;
@property (retain) TDreamGaussBlurExpressOpt9 *gaussFilterOpt9;
@property (retain) TDreamGaussBlurExpressPassTwoOpt9 *gaussFilter2Opt9;
@property (retain) TDreamVignette *vigneteFilter;
@property (retain) TDreamZoomOutFX *zoomOutFx;
@property (retain) TDreamDistortionFX *distortionFx;
@property (retain) TDreamLookupFilter *lookupFilter;
@property (retain) TDreamLookupFilterOpt *lookupFilterOpt;
@property (retain) TDreamColoricer *colorizer;
@property (retain) TDreamGrayscale *grayScaletor;
@property (retain) TDreamColorStrokeOpt *colorStrokeFilterOpt;
@property (retain) TDreamColorStroke *colorStrokeFilter;
@property (retain) TDreamSobel *sobelFilterQ;
@property (retain) TDreamSobelOpt *sobelFilterQOpt;
@property (retain) TDreamGaussBlurExpress *extraGaussFilterQ;
@property (retain) TDreamGaussBlurExpressPassTwo *extraGaussFilter2Q;
@property (retain) TDreamGaussBlurExpressOpt9 *extraGaussFilterQOpt9;
@property (retain) TDreamGaussBlurExpressPassTwoOpt9 *extraGaussFilter2QOpt9;
@property (retain) TDreamOutputBuffer *outputBuffer;

@end
