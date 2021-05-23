/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, AKController, AKShapeDetectionController, AKSmoothPathView, NSMutableArray, NSString;

@interface AKLegacyDoodleController : NSObject

{
    _Bool _preferDoodle;
    _Bool _coalescesDoodles;
    _Bool _shapeDetectionEnabled;
    _Bool _selectNewlyCreatedAnnotations;
    _Bool _pressureSensitiveDoodleMode;
    _Bool _ignoreAnnotationAndSelectionKVO;
    _Bool _isShowingOverlay;
    _Bool _isWaitingToCoalesceStrokes;
    AKShapeDetectionController *_shapeDetectionController;
    AKController *_controller;
    AKSmoothPathView *_intelligentSketchOverlayView;
    CDUnknownBlockType _performRecognitionBlock;
    AKAnnotation *_coalescedAnnotation;
    NSMutableArray *_recentDoodlesAnnotations;
    NSMutableArray *_recentDoodlePaths;
    struct CGRect _recentDrawingBoundsInInputView;
}

@property (weak) AKController *controller;
@property (retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView;
@property (copy, nonatomic) CDUnknownBlockType performRecognitionBlock;
@property (retain, nonatomic) AKShapeDetectionController *shapeDetectionController;
@property (retain) AKAnnotation *coalescedAnnotation;
@property (retain) NSMutableArray *recentDoodlesAnnotations;
@property (retain) NSMutableArray *recentDoodlePaths;
@property struct CGRect recentDrawingBoundsInInputView;
@property _Bool ignoreAnnotationAndSelectionKVO;
@property _Bool isShowingOverlay;
@property _Bool isWaitingToCoalesceStrokes;
@property (nonatomic) _Bool preferDoodle;
@property (nonatomic) _Bool coalescesDoodles;
@property (nonatomic, getter=shapeDetectionEnabled) _Bool shapeDetectionEnabled;
@property (nonatomic) _Bool selectNewlyCreatedAnnotations;
@property _Bool pressureSensitiveDoodleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)handleTapAction:(id)arg1;
- (id)initWithController:(id)arg1;
- (_Bool)isShowingCandidatePicker;
- (void)dismissCandidatePicker;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (_Bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(_Bool)arg2;
- (_Bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (id)overlayView:(id)arg1;
- (void)updateStrokeAttributes;
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;
- (void)_coalesceRecentDrawings;
- (struct CGRect)_frameForOurOverlayInHostingView:(id)arg1;
- (void)enclosingScrollViewNotification:(id)arg1;
- (void)toolbarNotification:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleDragAction:(id)arg1;
- (void)_executeDeferredRecognition;
- (void)_inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2 isPrestroked:(_Bool)arg3;
- (void)_beginOrExtendCoalescingTimer;
- (void)_addAnnotationImmediatelyFor:(struct CGPath *)arg1 withDrawingCenter:(struct CGPoint)arg2 drawingBoundsInView:(struct CGRect)arg3 pathIsPrestroked:(_Bool)arg4 isSingelDot:(_Bool)arg5 fromInputView:(id)arg6;
- (void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(struct CGPath *)arg2 boundsInView:(struct CGRect)arg3 center:(struct CGPoint)arg4 isPrestroked:(_Bool)arg5;
- (id)createDoodleAnnotationWithPath:(struct CGPath *)arg1 drawingBoundsInView:(struct CGRect)arg2 drawingCenter:(struct CGPoint)arg3 pathIsPrestroked:(_Bool)arg4 shouldGoToPageController:(id *)arg5;
- (void)_coalesceDrawingsCancelled;
- (void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2;
- (void)_clearCoalescingState;
- (void)inputViewWillStartDrawing:(id)arg1;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2;
- (void)inputView:(id)arg1 didCollectPrestrokedPath:(struct CGPath *)arg2;
- (void)showOverlay;
- (void)removeOverlay;

@end
