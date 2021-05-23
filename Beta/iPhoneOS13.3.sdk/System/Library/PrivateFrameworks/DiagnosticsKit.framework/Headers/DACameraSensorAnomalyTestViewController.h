/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <DiagnosticsKit/DATestViewController.h>

@class AVCapturePhotoOutput, AVCaptureSession, CBAdaptationClient, CBBlueLightClient, CBClient, DACameraSensorAnomalyTargetView, DACameraSensorAnomalyTestImageView, NSMutableArray, NSString, UIButton, UIColor, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;

@interface DACameraSensorAnomalyTestViewController : DATestViewController

{
    _Bool _enableMaxBrightness;
    _Bool _flashModeOn;
    _Bool _disableAmbientLightAdaptation;
    _Bool _drawingMode;
    _Bool _blueLightStatusActive;
    _Bool _colorAdaptationStatus;
    float _minimumSquareLength;
    float _originalScreenBrightness;
    NSString *_identifier;
    UIColor *_drawColor;
    NSString *_viewfinderInstruction;
    long long _currentTag;
    UIView *_previewView;
    AVCaptureSession *_session;
    AVCapturePhotoOutput *_output;
    DACameraSensorAnomalyTargetView *_overlayView;
    UIScrollView *_imageScrollView;
    UIView *_bottomBar;
    UIButton *_retakeButton;
    UIButton *_usePhotoButton;
    UIButton *_continueButton;
    DACameraSensorAnomalyTestImageView *_currentImageView;
    NSMutableArray *_allResults;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    CBClient *_client;
    CBBlueLightClient *_blueLightClient;
    CBAdaptationClient *_adaptationClient;
    struct CGPoint _originPoint;
    struct CGRect _rectangle;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *drawColor;
@property (nonatomic) float minimumSquareLength;
@property (nonatomic) _Bool enableMaxBrightness;
@property (nonatomic) _Bool flashModeOn;
@property (copy, nonatomic) NSString *viewfinderInstruction;
@property (nonatomic) _Bool disableAmbientLightAdaptation;
@property (nonatomic) float originalScreenBrightness;
@property (nonatomic) _Bool drawingMode;
@property (nonatomic) long long currentTag;
@property (nonatomic) struct CGRect rectangle;
@property (nonatomic) struct CGPoint originPoint;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCapturePhotoOutput *output;
@property (retain, nonatomic) DACameraSensorAnomalyTargetView *overlayView;
@property (retain, nonatomic) UIScrollView *imageScrollView;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIButton *retakeButton;
@property (retain, nonatomic) UIButton *usePhotoButton;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) DACameraSensorAnomalyTestImageView *currentImageView;
@property (retain, nonatomic) NSMutableArray *allResults;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) CBClient *client;
@property (retain, nonatomic) CBBlueLightClient *blueLightClient;
@property (retain, nonatomic) CBAdaptationClient *adaptationClient;
@property (nonatomic) _Bool blueLightStatusActive;
@property (nonatomic) _Bool colorAdaptationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)takePicture;
- (_Bool)prefersStatusBarHidden;
- (void)updateViewConstraints;
- (void)cleanUp;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)resetBrightness;
- (void)cancelTapped;
- (id)initWithTest:(id)arg1 fullScreen:(_Bool)arg2;
- (void)cancelTest;
- (_Bool)validateAndApplyPredicates:(id)arg1;
- (void)endTestWithStatusCode:(id)arg1;
- (_Bool)validateAndApplyParameters:(id)arg1;
- (void)saveAndMaximizeBrightness;
- (void)saveColorAdjustmentStates;
- (void)disableAdaptationAndBlueLightReduction;
- (void)setupCamera;
- (void)resetColorAdjustmentStates;
- (id)findDevice:(id)arg1;
- (long long)setupSessionForDevice:(id)arg1;
- (long long)setupCameraPreview;
- (void)showCameraView;
- (void)panOccurred:(id)arg1;
- (void)tapOccurred:(id)arg1;
- (void)addedRectangleView;
- (void)removeResultWithTag:(long long)arg1;
- (void)removeShape:(id)arg1;
- (void)removeDrawingModeViews;
- (void)addPanGesture;
- (void)addTapGesture;
- (void)parseResults;
- (void)hideCameraView;
- (void)retakeButtonPressed:(id)arg1;
- (void)usePhotoButtonPressed:(id)arg1;
- (void)continueButtonPressed:(id)arg1;

@end
