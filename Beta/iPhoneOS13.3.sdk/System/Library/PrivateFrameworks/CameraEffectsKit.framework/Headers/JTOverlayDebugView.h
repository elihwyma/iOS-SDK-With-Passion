/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, NSNumber, UIColor;

@protocol JTOverlayDebugViewDelegate;

@interface JTOverlayDebugView : UIView

{
    NSNumber *_showDocumentBoundingBox;
    NSNumber *_showObjectAlignedBoundingBox;
    NSNumber *_showMidpoint;
    NSNumber *_showCornerPoints;
    NSNumber *_showNonTrackedWhenTracking;
    UIView *_rootContainerView;
    UIView *_nonTrackedContainerView;
    UIView *_trackedContainerView;
    UIView *_nonTrackedDocumentBoundingBoxView;
    CAShapeLayer *_nonTrackedDocumentBoundingBoxLayer;
    UIView *_trackedDocumentBoundingBoxView;
    CAShapeLayer *_trackedDocumentBoundingBox;
    UIView *_nonTrackedObjectAlignedBoundingBoxView;
    UIView *_trackedObjectAlignedBoundingBoxView;
    UIView *_nonTrackedMidpointView;
    UIView *_trackedMidpointView;
    UIView *_nonTrackedPointsView;
    UIView *_trackedPointsView;
    UIView *_nonTrackedAdditionalRectsContainerView;
    UIView *_trackedAdditionalRectsContainerView;
    UIColor *_nonTrackedDocumentBoundingBoxColor;
    UIColor *_trackedDocumentBoundingBoxColor;
    UIColor *_nonTrackedObjectAlignedBoundingBoxColor;
    UIColor *_trackedObjectAlignedBoundingBoxColor;
    UIColor *_nonTrackedMidpointColor;
    UIColor *_nonTrackedCornerPoint0Color;
    UIColor *_nonTrackedCornerPoint1Color;
    UIColor *_nonTrackedCornerPoint2Color;
    UIColor *_nonTrackedCornerPoint3Color;
    UIColor *_trackedMidpointColor;
    UIColor *_trackedCornerPoint0Color;
    UIColor *_trackedCornerPoint1Color;
    UIColor *_trackedCornerPoint2Color;
    UIColor *_trackedCornerPoint3Color;
    id <JTOverlayDebugViewDelegate> _delegate;
}

@property (retain, nonatomic) UIView *rootContainerView;
@property (retain, nonatomic) UIView *nonTrackedContainerView;
@property (retain, nonatomic) UIView *trackedContainerView;
@property (retain, nonatomic) UIView *nonTrackedDocumentBoundingBoxView;
@property (retain, nonatomic) CAShapeLayer *nonTrackedDocumentBoundingBoxLayer;
@property (retain, nonatomic) UIView *trackedDocumentBoundingBoxView;
@property (retain, nonatomic) CAShapeLayer *trackedDocumentBoundingBox;
@property (retain, nonatomic) UIView *nonTrackedObjectAlignedBoundingBoxView;
@property (retain, nonatomic) UIView *trackedObjectAlignedBoundingBoxView;
@property (retain, nonatomic) UIView *nonTrackedMidpointView;
@property (retain, nonatomic) UIView *trackedMidpointView;
@property (retain, nonatomic) UIView *nonTrackedPointsView;
@property (retain, nonatomic) UIView *trackedPointsView;
@property (retain, nonatomic) UIView *nonTrackedAdditionalRectsContainerView;
@property (retain, nonatomic) UIView *trackedAdditionalRectsContainerView;
@property (retain, nonatomic) UIColor *nonTrackedDocumentBoundingBoxColor;
@property (retain, nonatomic) UIColor *trackedDocumentBoundingBoxColor;
@property (retain, nonatomic) UIColor *nonTrackedObjectAlignedBoundingBoxColor;
@property (retain, nonatomic) UIColor *trackedObjectAlignedBoundingBoxColor;
@property (retain, nonatomic) UIColor *nonTrackedMidpointColor;
@property (retain, nonatomic) UIColor *nonTrackedCornerPoint0Color;
@property (retain, nonatomic) UIColor *nonTrackedCornerPoint1Color;
@property (retain, nonatomic) UIColor *nonTrackedCornerPoint2Color;
@property (retain, nonatomic) UIColor *nonTrackedCornerPoint3Color;
@property (retain, nonatomic) UIColor *trackedMidpointColor;
@property (retain, nonatomic) UIColor *trackedCornerPoint0Color;
@property (retain, nonatomic) UIColor *trackedCornerPoint1Color;
@property (retain, nonatomic) UIColor *trackedCornerPoint2Color;
@property (retain, nonatomic) UIColor *trackedCornerPoint3Color;
@property (nonatomic, readonly) NSArray *additionalNonTrackedRectsToDraw;
@property (nonatomic, readonly) NSArray *additionalTrackedRectsToDraw;
@property (weak, nonatomic) id <JTOverlayDebugViewDelegate> delegate;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)updateWithEffectFrame:(id)arg1 effect:(id)arg2;
- (_Bool)showDocumentBoundingBox;
- (_Bool)showObjectAlignedBoundingBox;
- (_Bool)showNonTrackedWhenTracking;
- (void)updateDocumentBoundingBoxView:(id)arg1 transform:(id)arg2 borderLayer:(id)arg3 borderColor:(id)arg4 borderPhase:(double)arg5;
- (void)updateObjectAlignedBoundingBoxView:(id)arg1 bounds:(struct CGRect)arg2 color:(id)arg3 transform:(id)arg4;
- (_Bool)showCornerPoints;
- (void)updatePointsView:(id)arg1 points:(id)arg2 colors:(id)arg3 pointSize:(double)arg4 hidden:(_Bool)arg5;
- (_Bool)showMidpoint;
- (void)updateAdditionalRectsView:(id)arg1 rects:(id)arg2 transform:(id)arg3;

@end
