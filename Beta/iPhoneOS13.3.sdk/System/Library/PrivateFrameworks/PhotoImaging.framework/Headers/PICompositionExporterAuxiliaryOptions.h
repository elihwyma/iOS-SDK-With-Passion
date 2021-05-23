/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NSURL, NUAdjustment;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions

{
    _Bool _renderCompanionResources;
    NSURL *_primaryURL;
    NSURL *_videoComplementURL;
    NSURL *_videoPosterFrameURL;
    NUAdjustment *_reframeCropAdjustment;
    NUAdjustment *_reframeVideoAdjustment;
}

@property (retain) NSURL *primaryURL;
@property (retain) NSURL *videoComplementURL;
@property (retain) NSURL *videoPosterFrameURL;
@property _Bool renderCompanionResources;
@property (retain) NUAdjustment *reframeCropAdjustment;
@property (retain) NUAdjustment *reframeVideoAdjustment;

@end
