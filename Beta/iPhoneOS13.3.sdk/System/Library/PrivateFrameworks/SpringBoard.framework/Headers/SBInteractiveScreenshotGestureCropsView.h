/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSArray, NSObject, UIColor;

@protocol OS_dispatch_queue;

@interface SBInteractiveScreenshotGestureCropsView : UIView

{
    UIView *_bottomLeftCornerHorizontalView;
    UIView *_bottomLeftCornerVerticalView;
    UIView *_bottomRightCornerHorizontalView;
    UIView *_bottomRightCornerVerticalView;
    UIView *_topLeftCornerHorizontalView;
    UIView *_topLeftCornerVerticalView;
    UIView *_topRightCornerHorizontalView;
    UIView *_topRightCornerVerticalView;
    UIView *_bottomLineView;
    UIView *_bottomLineGrabberView;
    UIView *_leftLineView;
    UIView *_leftLineGrabberView;
    UIView *_rightLineView;
    UIView *_rightLineGrabberView;
    UIView *_topLineView;
    UIView *_topLineGrabberView;
    NSArray *_cornerViews;
    NSArray *_lineViews;
    NSArray *_lineGrabberViews;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _queue_displayScale;
    double _cornerAlpha;
    double _cornerEdgeLength;
    UIColor *_cornerColor;
    double _lineGrabberAlpha;
    double _lineGrabberEdgeLength;
    UIColor *_lineGrabberColor;
    double _grabberLineWidth;
    double _lineAlpha;
    double _lineWidth;
    UIColor *_lineColor;
    id _cropsCompositingFilter;
}

@property (nonatomic) double cornerAlpha;
@property (nonatomic) double cornerEdgeLength;
@property (retain, nonatomic) UIColor *cornerColor;
@property (nonatomic) double lineGrabberAlpha;
@property (nonatomic) double lineGrabberEdgeLength;
@property (retain, nonatomic) UIColor *lineGrabberColor;
@property (nonatomic) double grabberLineWidth;
@property (nonatomic) double lineAlpha;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) id cropsCompositingFilter;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_setPresentationValue:(id)arg1 forKey:(id)arg2;
- (void)_updateGeometryForBounds:(struct CGRect)arg1 shouldUsePresentationValues:(_Bool)arg2;
- (void)_updateGeometryOrDeferLayoutUsingModelBounds;

@end
