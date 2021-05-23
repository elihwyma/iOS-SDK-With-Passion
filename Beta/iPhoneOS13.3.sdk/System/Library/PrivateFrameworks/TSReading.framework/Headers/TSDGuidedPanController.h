/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDCanvasLayer, TSDCanvasView, TSDInteractiveCanvasController, UIScrollView;

@protocol TSDPanGuide;

@interface TSDGuidedPanController : NSObject

{
    TSDInteractiveCanvasController *_interactiveCanvasController;
    TSDCanvasView *_canvasView;
    TSDCanvasLayer *_canvasLayer;
    UIScrollView *_canvasScrollView;
    id <TSDPanGuide> _guide;
    struct CGPoint _startPoint;
    struct CGPoint _movement;
    struct CGPoint _velocity;
}

@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic) TSDCanvasView *canvasView;
@property (nonatomic) TSDCanvasLayer *canvasLayer;
@property (nonatomic) UIScrollView *canvasScrollView;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint movement;
@property (nonatomic) struct CGPoint velocity;
@property (retain, nonatomic) id <TSDPanGuide> guide;
@property (nonatomic, readonly) CDStruct_499be82c touchContentPlacement;
@property (nonatomic, readonly) CDStruct_499be82c centerPlusMovementContentPlacement;

- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (id)p_currentContentLocationWithPlacement:(CDStruct_499be82c)arg1;
- (void)p_willBegin;
- (struct CATransform3D)p_transformForContentLocation:(id)arg1 placement:(CDStruct_499be82c)arg2;
- (void)p_scrollToContentLocation:(id)arg1 placement:(CDStruct_499be82c)arg2;
- (void)p_didEnd;
- (id)p_convertContentLocation:(id)arg1 fromPlacement:(CDStruct_499be82c)arg2 toPlacement:(CDStruct_499be82c)arg3;
- (struct CGPoint)p_boundsOffsetForContentLocation:(id)arg1 placement:(CDStruct_499be82c)arg2;
- (id)convertContentLocation:(id)arg1 fromPlacement:(CDStruct_499be82c)arg2 toPlacement:(CDStruct_499be82c)arg3;

@end
