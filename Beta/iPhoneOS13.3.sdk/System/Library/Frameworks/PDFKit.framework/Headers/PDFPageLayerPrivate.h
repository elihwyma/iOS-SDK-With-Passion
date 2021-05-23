/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSDate, NSMutableArray, NSMutableDictionary, PDFPage, PDFRenderingProperties, PDFTimer;

@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerPrivate : NSObject

{
    PDFPage *page;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    long long oldPageRotation;
    struct CGRect oldBoundsForBox;
    CALayer *tilesLayer;
    int generationCount;
    double lastLayoutZoomFactor;
    struct CGRect lastLayerFrameInRootView;
    NSDate *lastZoomChange;
    _Bool zoomChangeScheduled;
    double zoomGenerationDelay;
    unsigned long long visibilityDelegateIndex;
    _Bool tileLayerHidden;
    NSMutableArray *tiles;
    _Bool allowUpdate;
    PDFTimer *forcedUpdateTimer;
    _Bool isForcingUpdate;
    _Atomic _Bool isTiling;
    _Atomic _Bool requestedTiling;
    CALayer *effectsLayer;
    NSMutableDictionary *pageLayerEffects;
}

@end
