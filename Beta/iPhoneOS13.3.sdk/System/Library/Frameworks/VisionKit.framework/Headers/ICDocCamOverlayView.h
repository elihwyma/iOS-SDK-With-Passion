/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@class CAAnimation, CAGradientLayer, CAShapeLayer, ICDocCamImageQuad, NSArray, NSDate, NSObject, NSString, UIColor, UILabel;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ICDocCamOverlayView : UIView

{
    NSObject<OS_dispatch_semaphore> *sem;
    _Bool _showGridAnimation;
    _Bool _rectangleIsActive;
    NSString *_displayString;
    ICDocCamImageQuad *_documentQuad;
    NSArray *_debugRects;
    UIColor *_rectColor;
    CAShapeLayer *_llShapeLayer;
    CAShapeLayer *_lrShapeLayer;
    CAShapeLayer *_ulShapeLayer;
    CAShapeLayer *_urShapeLayer;
    CAShapeLayer *_rectangleShapeLayer;
    unsigned long long _numberOfMissedFrames;
    UILabel *_displayStringLabel;
    CAShapeLayer *_rectangleGridLayer;
    NSDate *_dateToStartGridAnimation;
    CAAnimation *_gridAnimation;
    CAGradientLayer *_gradientMaskLayer;
    struct CGRect _previewBounds;
}

@property (nonatomic) _Bool rectangleIsActive;
@property (retain, nonatomic) CAShapeLayer *llShapeLayer;
@property (retain, nonatomic) CAShapeLayer *lrShapeLayer;
@property (retain, nonatomic) CAShapeLayer *ulShapeLayer;
@property (retain, nonatomic) CAShapeLayer *urShapeLayer;
@property (retain, nonatomic) CAShapeLayer *rectangleShapeLayer;
@property unsigned long long numberOfMissedFrames;
@property (retain, nonatomic) UILabel *displayStringLabel;
@property (retain, nonatomic) CAShapeLayer *rectangleGridLayer;
@property (retain, nonatomic) NSDate *dateToStartGridAnimation;
@property (retain, nonatomic) CAAnimation *gridAnimation;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property struct CGRect previewBounds;
@property (retain) NSArray *debugRects;
@property (retain) NSString *displayString;
@property (retain) ICDocCamImageQuad *documentQuad;
@property _Bool showGridAnimation;
@property (retain) UIColor *rectColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateShapeLayers;
- (void)clearRectangles;
- (void)stopGridAnimation;
- (void)setupShapeLayersIfNeeded;
- (id)calculateCurrentRectangleFromDocumentQuad:(id)arg1;
- (void)updateRectangleLayerFromRect:(id)arg1;
- (void)updateGridLayerFromRect:(id)arg1;
- (void)startGridAnimationFromRect:(id)arg1;
- (struct CGPath *)newPathFromRect:(id)arg1;
- (id)extrudedRectFromRect:(id)arg1;
- (id)tintColorWithAlpha:(double)arg1;
- (struct CGPath *)newGridPathFromRect:(id)arg1;
- (void)setupRectangleLayer;
- (void)setupGridLayers;
- (double)crossProduct:(struct CGPoint)arg1 v2:(struct CGPoint)arg2;
- (struct CGRect)frameForContentInView;
- (struct CATransform3D)calculateRotationTransformForPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;

@end
