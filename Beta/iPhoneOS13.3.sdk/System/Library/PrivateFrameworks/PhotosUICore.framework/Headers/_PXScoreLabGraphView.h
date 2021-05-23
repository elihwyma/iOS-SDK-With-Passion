/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSObject, NSPredicate;

@protocol OS_dispatch_queue, _PXScoreLabGraphViewDelegate;

@interface _PXScoreLabGraphView : UIView

{
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _graphWidth;
    double _graphHeight;
    double _minXValue;
    double _maxXValue;
    double _minYValue;
    double _maxYValue;
    double _baseMinXValue;
    double _baseMaxXValue;
    double _baseMinYValue;
    double _baseMaxYValue;
    double _minXValueAtBeginningOfGesture;
    double _maxXValueAtBeginningOfGesture;
    double _minYValueAtBeginningOfGesture;
    double _maxYValueAtBeginningOfGesture;
    struct CGPoint _locationAtBeginningOfGesture;
    NSArray *_allXValues;
    NSArray *_allYValues;
    double _Ex;
    double _Ex2;
    double _Ey;
    double _Ey2;
    double _Exy;
    unsigned long long _numberOfIgnoredAssets;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CDUnknownBlockType _xScoreValueGetter;
    CDUnknownBlockType _yScoreValueGetter;
    unsigned long long _graphType;
    NSPredicate *_assetPredicate;
    id <_PXScoreLabGraphViewDelegate> _delegate;
}

@property (copy) CDUnknownBlockType xScoreValueGetter;
@property (copy) CDUnknownBlockType yScoreValueGetter;
@property unsigned long long graphType;
@property (retain) NSPredicate *assetPredicate;
@property (weak) id <_PXScoreLabGraphViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)drawRect:(struct CGRect)arg1;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)startGestureAtLocation:(struct CGPoint)arg1;
- (void)cancelGesture;
- (void)updateGestureWithLocation:(struct CGPoint)arg1 scale:(double)arg2;
- (void)panned:(id)arg1;
- (void)pinched:(id)arg1;
- (void)loadDistributionData;
- (void)loadCorrelationData;
- (void)drawAxisInContext:(struct CGContext *)arg1 minXValue:(double)arg2 maxXValue:(double)arg3 minYValue:(double)arg4 maxYValue:(double)arg5;
- (void)drawXMean:(double)arg1 andStddev:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)drawYMean:(double)arg1 andStddev:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)drawTextPanelWithNumberOfAssets:(long long)arg1 numberOfIgnoredAssets:(unsigned long long)arg2 rho:(double)arg3 inContext:(struct CGContext *)arg4;
- (void)drawDistributionInContext:(struct CGContext *)arg1;
- (void)drawCorrelationInContext:(struct CGContext *)arg1;

@end
