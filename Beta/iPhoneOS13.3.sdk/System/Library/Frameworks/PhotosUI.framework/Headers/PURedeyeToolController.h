/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolController.h>

@class CEKBadgeTextView, NSArray, NSMutableArray, NSString, PURedeyeToolControllerSpec, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PURedeyeToolController : PUPhotoEditToolController

{
    CEKBadgeTextView *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    CEKBadgeTextView *_failureLabel;
    NSArray *_failureLabelConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_knownCorrections;
    _Bool _failureAnimationIsInProgress;
    _Bool _isModelChangeLocal;
}

@property (nonatomic, readonly) PURedeyeToolControllerSpec *toolControllerSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)localizedName;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)updateViewConstraints;
- (_Bool)wantsSecondaryToolbarVisible;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (_Bool)wantsZoomAndPanEnabled;
- (void)didBecomeActiveTool;
- (long long)toolControllerTag;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)didResignActiveTool;
- (id)selectedToolbarIcon;
- (struct CGPoint)_extractRedEyePointFromCorrectionDictionary:(id)arg1;
- (void)flashAutoRedEyeCorrections;
- (void)_loadCorrectionsFromModelAnimated:(_Bool)arg1;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint)arg1 isFailure:(_Bool)arg2;
- (void)_animateFailureAppearance;
- (void)_animateInstructionAppearance;
- (void)_handleRedeyeButton:(id)arg1;
- (_Bool)_removeCorrectionAtPoint:(struct CGPoint)arg1;
- (void)_correctRedEyeAtPoint:(struct CGPoint)arg1;

@end
