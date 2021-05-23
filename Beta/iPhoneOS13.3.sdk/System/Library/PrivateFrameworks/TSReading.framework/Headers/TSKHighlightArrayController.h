/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol TSKHighlightArrayControllerProtocol;

@interface TSKHighlightArrayController : NSObject

{
    NSMutableArray *_layers;
    NSMutableArray *_controllers;
    double _zOrder;
    id <TSKHighlightArrayControllerProtocol> _delegate;
    _Bool _creatingLayers;
    struct CGAffineTransform _canvasTransform;
    struct CGAffineTransform _layerTransform;
    _Bool _shouldPulsate;
    _Bool _pulsating;
    _Bool _autohide;
    double _viewScale;
}

@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) double viewScale;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic) _Bool shouldPulsate;
@property (nonatomic) _Bool pulsating;
@property (nonatomic) _Bool autohide;

- (void)dealloc;
- (void)stop;
- (void)reset;
- (void)disconnect;
- (void)startAnimating;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)setCanvasTransform:(struct CGAffineTransform)arg1 layerTransform:(struct CGAffineTransform)arg2;
- (id)initWithZOrder:(double)arg1 delegate:(id)arg2;
- (id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(double)arg2;

@end
