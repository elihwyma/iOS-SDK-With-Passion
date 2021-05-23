/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class CALayer, TSDCanvasLayer, TSDCanvasView, TSDInteractiveCanvasController;

@protocol TSDCanvasLayerHosting <Swift>

@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) TSDCanvasLayer *canvasLayer;
@property (nonatomic, readonly) CALayer *clippingLayer;

- (unsigned short)teardown;
- (unsigned short)becomeFirstResponder;
- (unsigned short)viewDidLoad;
- (unsigned short)resignFirstResponder;
- (unsigned short)isViewLoaded;
- (unsigned short)undoManager;
- (unsigned short)canvasDidUpdateRepsFromLayouts;
- (unsigned short)isInFocusedContainer;

@end
