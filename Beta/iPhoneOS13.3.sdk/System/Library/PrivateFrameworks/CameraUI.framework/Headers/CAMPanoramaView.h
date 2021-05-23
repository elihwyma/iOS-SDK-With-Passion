/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMPanoramaArrowView, CAMPanoramaLabel, CAMPanoramaLevelView, CAMPanoramaPaintingStatus, CAMPanoramaPreviewView, NSString;

@protocol CAMPanoramaViewDelegate;

@interface CAMPanoramaView : UIView

{
    _Bool _painting;
    _Bool __currentlyShowingMoveInstructions;
    _Bool __currentlyMovingTooFast;
    long long _direction;
    id <CAMPanoramaViewDelegate> _delegate;
    CAMPanoramaPreviewView *_previewView;
    long long _layoutStyle;
    double _currentOrientedAcceleration;
    UIView *__stripBackgroundView;
    UIView *__stripContainerView;
    UIView *__maskingView;
    CAMPanoramaArrowView *__arrowView;
    CAMPanoramaLevelView *__levelView;
    CAMPanoramaLabel *__instructionLabel;
    NSString *__speedString;
    NSString *__moveUpString;
    NSString *__moveDownString;
    NSString *__arrowString;
    NSString *__instructionString;
    CAMPanoramaPaintingStatus *__currentPaintingStatus;
    double __initialPaintingAcceleration;
    double __currentPaintingAcceleration;
    double *__previousSpeeds;
    double __currentAverageSpeed;
    unsigned long long __arrowUpdateFrame;
    struct CGSize _panoramaCaptureSize;
    struct CGPoint __initialArrowCenter;
    struct CGRect __lastLayoutBounds;
}

@property (nonatomic, readonly) UIView *_stripBackgroundView;
@property (nonatomic, readonly) UIView *_stripContainerView;
@property (nonatomic, readonly) UIView *_maskingView;
@property (nonatomic, readonly) CAMPanoramaArrowView *_arrowView;
@property (nonatomic, readonly) CAMPanoramaLevelView *_levelView;
@property (nonatomic, readonly) CAMPanoramaLabel *_instructionLabel;
@property (copy, nonatomic, readonly) NSString *_speedString;
@property (copy, nonatomic, readonly) NSString *_moveUpString;
@property (copy, nonatomic, readonly) NSString *_moveDownString;
@property (copy, nonatomic, readonly) NSString *_arrowString;
@property (copy, nonatomic, readonly) NSString *_instructionString;
@property (nonatomic, setter=_setInitialArrowCenter:) struct CGPoint _initialArrowCenter;
@property (nonatomic, setter=_setLastLayoutBounds:) struct CGRect _lastLayoutBounds;
@property (nonatomic, getter=isPainting, setter=_setPainting:) _Bool painting;
@property (retain, nonatomic, setter=_setCurrentPaintingStatus:) CAMPanoramaPaintingStatus *_currentPaintingStatus;
@property (nonatomic, setter=_setCurrentOrientedAcceleration:) double currentOrientedAcceleration;
@property (nonatomic, setter=_setInitialPaintingAcceleration:) double _initialPaintingAcceleration;
@property (nonatomic, setter=_setCurrentPaintingAcceleration:) double _currentPaintingAcceleration;
@property (nonatomic, getter=_isCurrentlyShowingMoveInstructions, setter=_setCurrentlyShowingMoveInstructions:) _Bool _currentlyShowingMoveInstructions;
@property (nonatomic, readonly) double *_previousSpeeds;
@property (nonatomic, getter=_isCurrentlyMovingTooFast, setter=_setCurrentlyMovingTooFast:) _Bool _currentlyMovingTooFast;
@property (nonatomic, setter=_setCurrentAverageSpeed:) double _currentAverageSpeed;
@property (nonatomic, setter=_setArrowUpdateFrame:) unsigned long long _arrowUpdateFrame;
@property (nonatomic) long long direction;
@property (weak, nonatomic) id <CAMPanoramaViewDelegate> delegate;
@property (nonatomic, readonly) CAMPanoramaPreviewView *previewView;
@property (nonatomic, readonly) UIView *instructionView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct CGSize panoramaCaptureSize;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateToContentSize:(id)arg1;
- (void)setDirection:(long long)arg1 animated:(_Bool)arg2;
- (void)startProcessingPanorama;
- (void)finishedProcessingPanorama;
- (void)startPainting;
- (void)stopPainting;
- (id)initWithPanoramaPreviewView:(id)arg1 layoutStyle:(long long)arg2;
- (void)updatePaintingWithStatus:(id)arg1;
- (void)updateOrientedAcceleration:(double)arg1;
- (struct CGRect)_frameForArrowViewWithDirection:(long long)arg1 offset:(double)arg2;
- (void)_showMoveUpInstructions;
- (void)_showMoveDownInstructions;
- (void)_showMoveUpInstructionsAfterDelay;
- (void)_showMoveDownInstructionsAfterDelay;
- (void)_cancelDelayedMoveInstructions;
- (void)_hideInstructionLabel;
- (void)_resetPaintingUIAnimated:(_Bool)arg1;
- (void)_showArrowInstructions;
- (void)_hideArrowInstructionsAfterDelay;
- (void)_showSpeedInstructions;
- (void)_hideSpeedInstructionsAfterDelay;
- (void)_updateInstructionLabelText:(id)arg1;

@end
