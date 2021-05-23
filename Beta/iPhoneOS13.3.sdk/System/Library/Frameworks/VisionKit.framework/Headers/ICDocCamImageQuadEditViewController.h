/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIViewController.h>

#import <VisionKit/Swift-Protocol.h>

@class CAShapeLayer, ICDocCamImageQuad, ICDocCamImageQuadEditImageView, ICDocCamImageQuadEditOverlay, NSLayoutConstraint, NSNumber, NSString, UIBezierPath, UIButton, UIColor, UIImage, UILabel, UIScrollView, UIView;

@protocol DCScanDataDelegate;

@interface ICDocCamImageQuadEditViewController : UIViewController <Swift>

{
    _Bool _showImageAsAspectFit;
    _Bool _inCaptureMode;
    _Bool _didAdjustQuad;
    _Bool _shouldAdjustForApectFitIfNecessary;
    _Bool _invisibleButtonContainer;
    _Bool _didPressSave;
    _Bool _didCallCompletion;
    UIScrollView *_scrollView;
    ICDocCamImageQuadEditImageView *_imageView;
    ICDocCamImageQuadEditImageView *_backgroundImageView;
    UIView *_buttonContainer;
    ICDocCamImageQuadEditOverlay *_overlay;
    double _knobHeight;
    UIColor *_knobColor;
    UIView *_placard;
    UIImage *_image;
    id <DCScanDataDelegate> _scanDataDelegate;
    CAShapeLayer *_overlayMask;
    UIBezierPath *_overlayMaskPath;
    ICDocCamImageQuad *_quad;
    ICDocCamImageQuad *_initialQuad;
    long long _orientation;
    CDUnknownBlockType _completionHandler;
    UIButton *_cancelButton;
    UIButton *_saveButton;
    UILabel *_userPromptLabel;
    NSLayoutConstraint *_buttonContainerHeightConstraint;
    NSNumber *_startOrientationIsPortrait;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) ICDocCamImageQuadEditImageView *imageView;
@property (retain, nonatomic) ICDocCamImageQuadEditImageView *backgroundImageView;
@property (retain, nonatomic) CAShapeLayer *overlayMask;
@property (retain, nonatomic) UIBezierPath *overlayMaskPath;
@property (retain, nonatomic) ICDocCamImageQuad *quad;
@property (retain, nonatomic) ICDocCamImageQuad *initialQuad;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (weak, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) UIButton *saveButton;
@property (weak, nonatomic) UILabel *userPromptLabel;
@property (weak, nonatomic) NSLayoutConstraint *buttonContainerHeightConstraint;
@property (retain, nonatomic) NSNumber *startOrientationIsPortrait;
@property (nonatomic) _Bool didAdjustQuad;
@property (nonatomic) _Bool shouldAdjustForApectFitIfNecessary;
@property (nonatomic) _Bool invisibleButtonContainer;
@property (nonatomic) _Bool didPressSave;
@property (nonatomic) _Bool didCallCompletion;
@property (weak, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) ICDocCamImageQuadEditOverlay *overlay;
@property (nonatomic, readonly) double knobHeight;
@property (nonatomic, readonly) UIColor *knobColor;
@property (weak, nonatomic) UIView *placard;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) id <DCScanDataDelegate> scanDataDelegate;
@property (nonatomic) _Bool showImageAsAspectFit;
@property (nonatomic) _Bool inCaptureMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)applicationWillResignActive:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)updateFonts;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForDismissal;
- (void)scanWasDeleted:(id)arg1;
- (void)setupAccessibility;
- (id)quadForOverlay;
- (id)finalQuadFromOverlay;
- (id)initWithImage:(id)arg1 quad:(id)arg2 scanDataDelegate:(id)arg3 orientation:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setUpImageView;
- (void)updateButtonTitles;
- (id)adjustedQuad;
- (void)updateToAspectFitIfNecessary;
- (void)centerAndScaleImageInScrollView;
- (id)uiQuadForOverlay:(id)arg1;
- (void)updateOverlayScrimMask;
- (id)finalQuad;
- (void)callCompletionHandler:(_Bool)arg1 withImage:(id)arg2 quad:(id)arg3 preparingForDismissal:(_Bool)arg4;
- (id)quadForOverlay:(id)arg1;
- (id)uiInitialQuadForOverlay:(id)arg1;
- (struct CGRect)unitImageRectForOverlayRect:(struct CGRect)arg1;
- (struct CGRect)imageFrameInOverlayCoordinates;
- (void)selectedKnobDidPanToRect:(struct CGRect)arg1;
- (void)selectedKnobDidChange:(id)arg1;
- (double)currentZoomFactorForOverlay;
- (void)overlayDidLayout:(id)arg1;
- (struct CGRect)rectAvailableForDefaultRect;
- (void)saveButtonPressed:(id)arg1;

@end
