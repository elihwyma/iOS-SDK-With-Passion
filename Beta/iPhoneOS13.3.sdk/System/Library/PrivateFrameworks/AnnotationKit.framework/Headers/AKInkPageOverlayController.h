/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKInkOverlayView, AKPageController, AKShapeDetectionController, NSString;

@protocol PKRulerHostingDelegate;

@interface AKInkPageOverlayController : NSObject

{
    _Bool _ignoreAnnotationAndSelectionKVO;
    _Bool _onlyPencilDraws;
    AKInkOverlayView *_inkOverlayView;
    AKPageController *_pageController;
    AKShapeDetectionController *_shapeDetectionController;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    CDUnknownBlockType _delayedShapeDetectionBlock;
    double _lastStrokeEndTime;
}

@property (weak) AKPageController *pageController;
@property (retain) AKInkOverlayView *inkOverlayView;
@property (retain) AKShapeDetectionController *shapeDetectionController;
@property _Bool ignoreAnnotationAndSelectionKVO;
@property _Bool onlyPencilDraws;
@property (copy) CDUnknownBlockType delayedShapeDetectionBlock;
@property double lastStrokeEndTime;
@property (weak, nonatomic) id <PKRulerHostingDelegate> rulerHostingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1;

- (void)teardown;
- (void)setup;
- (id)initWithPageController:(id)arg1;
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isWaitingToCoalesceStrokes;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (_Bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(_Bool)arg2;
- (_Bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (id)overlayView:(id)arg1;
- (void)didToggleRuler;
- (_Bool)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2;
- (void)inputViewDidBeginStroke:(id)arg1;
- (void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2;
- (void)_fullSetup;
- (void)_toolStatusUpdated:(id)arg1;
- (void)_controllerWillSave:(id)arg1;
- (void)_setupGestureDependencies;
- (void)_updateAllowedTouchTypesAllEnabled:(_Bool)arg1 pencilEnabled:(_Bool)arg2;
- (void)_inkDidChangeNotification:(id)arg1;
- (void)_enclosingScrollViewDidScroll:(id)arg1;
- (void)_partialTeardown;
- (void)_tearDownGestureDependencies;
- (void)_performDelayedShapeDetection;
- (struct CGRect)_convertRect:(struct CGRect)arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3;
- (id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3;
- (void)_updateGestureDependencyPriority;
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (struct CGSize)scaleFromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2;

@end
