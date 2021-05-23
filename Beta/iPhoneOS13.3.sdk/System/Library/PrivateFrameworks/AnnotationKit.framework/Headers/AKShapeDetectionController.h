/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, AKCandidatePickerView_iOS, AKController, AKPageModelController, CHDrawing, CHRecognizer, NSMutableArray, NSMutableDictionary;

@protocol AKShapeDetectionControllerDelegate;

@interface AKShapeDetectionController : NSObject

{
    _Bool _preferDoodle;
    _Bool _coalescesDoodles;
    _Bool _shapeDetectionEnabled;
    _Bool _isPreviousCandidateAnnotationUndecided;
    id <AKShapeDetectionControllerDelegate> _delegate;
    AKController *_controller;
    AKAnnotation *_candidateAnnotation;
    CHRecognizer *_shapeRecognizer;
    AKPageModelController *_modelControllerToObserveForAnnotationsAndSelections;
    CHDrawing *_lastDrawing;
    double _veryHighConfidenceLevel;
    CHDrawing *_candidateDrawing;
    NSMutableArray *_candidateAKTags;
    NSMutableDictionary *_candidateAKTagsToAnnotationInfoMap;
    AKCandidatePickerView_iOS *_candidatePickerView;
}

@property (retain, nonatomic) CHDrawing *lastDrawing;
@property double veryHighConfidenceLevel;
@property (retain, nonatomic) CHDrawing *candidateDrawing;
@property (retain, nonatomic) NSMutableArray *candidateAKTags;
@property (retain, nonatomic) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap;
@property (retain, nonatomic) AKCandidatePickerView_iOS *candidatePickerView;
@property (weak, nonatomic) id <AKShapeDetectionControllerDelegate> delegate;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) AKAnnotation *candidateAnnotation;
@property (retain, nonatomic) CHRecognizer *shapeRecognizer;
@property (nonatomic, readonly) _Bool isShowingCandidatePicker;
@property (nonatomic) _Bool preferDoodle;
@property (nonatomic) _Bool coalescesDoodles;
@property (nonatomic, getter=shapeDetectionEnabled) _Bool shapeDetectionEnabled;
@property _Bool isPreviousCandidateAnnotationUndecided;
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections;

+ (_Bool)drawingIsValidForRecognition:(id)arg1 withPath:(struct CGPath *)arg2;
+ (void)logAllResults:(id)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (id)initWithController:(id)arg1;
- (void)_shouldDismissNotification:(id)arg1;
- (void)_teardownCandidatePicker;
- (void)dismissCandidatePicker;
- (void)clearPreviousCandidateAnnotation;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(struct CGRect)arg2 shouldGoToPageController:(id *)arg3;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (void)_teardownCandidatePickerBar;
- (long long)_matchingBlurEffectStyleForCurrentTintColor:(id)arg1;
- (void)_pickCandidateResult:(id)arg1;
- (void)_pickCandidateResultWithAnnotationType:(long long)arg1;
- (void)_performRecognitionOnDrawing:(id)arg1 withInkDrawing:(id)arg2 orWithDoodlePath:(struct CGPath *)arg3 boundsInInputView:(struct CGRect)arg4 center:(struct CGPoint)arg5 isPrestroked:(_Bool)arg6 optionalAnnotation:(id)arg7;
- (id)convertDrawingBoundsInInputView:(struct CGRect)arg1 outBoundsInPageModel:(struct CGRect *)arg2;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(struct CGPoint)arg2;
- (id)createInkResultFromInkDrawing:(id)arg1 annotation:(id)arg2;
- (id)_createDoodleShapeResultWithPath:(struct CGPath *)arg1 withDrawingCenter:(struct CGPoint)arg2 pathIsPrestroked:(_Bool)arg3;
- (_Bool)_isResultVeryHighConfidence:(id)arg1;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(_Bool)arg3;
- (void)performRecognitionOnDrawing:(id)arg1 withDrawing:(id)arg2 annotation:(id)arg3 boundsInInputView:(struct CGRect)arg4 center:(struct CGPoint)arg5;
- (void)performRecognitionOnDrawing:(id)arg1 withPath:(struct CGPath *)arg2 boundsInInputView:(struct CGRect)arg3 center:(struct CGPoint)arg4 isPrestroked:(_Bool)arg5;
- (void)logLastDrawingToDisk;

@end
