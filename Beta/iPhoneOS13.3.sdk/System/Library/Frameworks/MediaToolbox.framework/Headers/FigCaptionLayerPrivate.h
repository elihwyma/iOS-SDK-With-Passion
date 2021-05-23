/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FigCaptionLayerPrivate : NSObject

{
    struct OpaqueFigCFCaptionRenderer *renderer;
    NSMutableArray *captionElementLayers;
    struct OpaqueFigSimpleMutex *renderMutex;
    struct OpaqueFigReentrantMutex *layoutSublayersMutex;
    unsigned char shouldDrawGrid;
    NSMutableArray *captionBackdropLayers;
    unsigned char enableBackdrop;
}

@end
