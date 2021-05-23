/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, CRColor, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DiagnosticHUDLayer : CALayer

{
    CALayer *_previewLayer;
    CRColor *_freshPointColor;
    CRColor *_stalePointColor;
    NSMutableArray *_pointLayers;
    CAShapeLayer *_cameraAreaLayer;
    CAShapeLayer *_focusIndicatorLayer;
    CAShapeLayer *_focusPointLayer;
    CAShapeLayer *_frameIndicator;
    struct CGSize _cameraResolution;
    struct CGRect _previewLayerVisibleRect;
}

@property (retain) CALayer *previewLayer;
@property struct CGRect previewLayerVisibleRect;
@property struct CGSize cameraResolution;
@property (retain) CRColor *freshPointColor;
@property (retain) CRColor *stalePointColor;
@property (retain) NSMutableArray *pointLayers;
@property (retain) CAShapeLayer *cameraAreaLayer;
@property (retain) CAShapeLayer *focusIndicatorLayer;
@property (retain) CAShapeLayer *focusPointLayer;
@property (retain) CAShapeLayer *frameIndicator;

+ (id)layer;

- (id)init;
- (void)layoutSublayers;
- (void)setPreviewLayer:(id)arg1 visibleRect:(struct CGRect)arg2 cameraResolution:(struct CGSize)arg3;
- (void)refreshFrameIndicator;
- (void)setBoxPoints:(id)arg1;
- (void)setAdjustingFocus:(_Bool)arg1 pointOfInterestSupported:(_Bool)arg2 focusPoint:(struct CGPoint)arg3;

@end
