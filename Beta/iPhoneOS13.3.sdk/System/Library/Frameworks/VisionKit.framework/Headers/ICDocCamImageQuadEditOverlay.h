/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, ICDocCamImageQuad, ICDocCamImageQuadEditPanGestureRecognizer, NSArray, NSMutableArray, NSString, UIBezierPath, UIColor, UIImage;

@protocol ICDocCamImageQuadEditOverlayDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditOverlay : UIView

{
    _Bool _isTempOverlay;
    _Bool _tempOverlayQuadIsValid;
    _Bool _isDisplayingValidQuad;
    id <ICDocCamImageQuadEditOverlayDelegate> _delegate;
    ICDocCamImageQuad *_quad;
    UIImage *_image;
    long long _orientation;
    double _knobHeight;
    UIColor *_knobColor;
    NSArray *_knobs;
    NSArray *_knobAccessibilityElements;
    UIColor *_validRectColor;
    UIColor *_invalidRectColor;
    CALayer *_selectedKnob;
    ICDocCamImageQuadEditPanGestureRecognizer *_panGR;
    CALayer *_knobLayer;
    CAShapeLayer *_outlineLayer;
    CALayer *_loupeLayer;
    CALayer *_loupeContentsLayer;
    double _tempOverlayMagnification;
    NSMutableArray *_panHistory;
    unsigned long long _panHistoryIdx;
    struct CGPoint _lastGestureTranslation;
}

@property (retain, nonatomic) NSArray *knobs;
@property (copy, nonatomic) NSArray *knobAccessibilityElements;
@property (nonatomic, readonly) UIColor *validRectColor;
@property (nonatomic, readonly) UIColor *invalidRectColor;
@property (nonatomic) _Bool isDisplayingValidQuad;
@property (retain, nonatomic) CALayer *selectedKnob;
@property (retain, nonatomic) ICDocCamImageQuadEditPanGestureRecognizer *panGR;
@property (retain, nonatomic) CALayer *knobLayer;
@property (retain, nonatomic) CAShapeLayer *outlineLayer;
@property (nonatomic, readonly) UIBezierPath *outlinePath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) CALayer *loupeLayer;
@property (retain, nonatomic) CALayer *loupeContentsLayer;
@property (nonatomic) double tempOverlayMagnification;
@property (nonatomic) double knobHeight;
@property (retain, nonatomic) UIColor *knobColor;
@property (nonatomic) struct CGPoint lastGestureTranslation;
@property (retain, nonatomic) NSMutableArray *panHistory;
@property (nonatomic) unsigned long long panHistoryIdx;
@property (nonatomic) _Bool isTempOverlay;
@property (nonatomic) _Bool tempOverlayQuadIsValid;
@property (weak, nonatomic) id <ICDocCamImageQuadEditOverlayDelegate> delegate;
@property (retain, nonatomic) ICDocCamImageQuad *quad;
@property (nonatomic, readonly) ICDocCamImageQuad *adjustedQuad;
@property (nonatomic, readonly) _Bool isDraggingKnob;
@property (nonatomic, readonly) _Bool isQuadValid;
@property (nonatomic, readonly) _Bool containsPointOutsideOfOverlayBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)accessibilityIgnoresInvertColors;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 orientation:(long long)arg2;
- (void)unselectAllKnobs;
- (void)setTempOverlayMagnification:(double)arg1 animationDuration:(double)arg2;
- (void)touchesBeganOnQuadEditPanGestureRecognizerDelegate:(id)arg1;
- (void)setUpKnobs;
- (void)updateKnobLocationsToRect:(id)arg1;
- (void)updateOutlineLayer;
- (void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;
- (void)didPan:(id)arg1;
- (void)updateOutlineAndKnobColorForIsValid:(_Bool)arg1;
- (void)setupLoupeLayerIfNeeded;
- (id)closestKnobToPoint:(struct CGPoint)arg1;
- (void)updateSelectedKnobContents;
- (struct CGRect)rectFromApplyingOrientation:(long long)arg1 toContentsRect:(struct CGRect)arg2;

@end
