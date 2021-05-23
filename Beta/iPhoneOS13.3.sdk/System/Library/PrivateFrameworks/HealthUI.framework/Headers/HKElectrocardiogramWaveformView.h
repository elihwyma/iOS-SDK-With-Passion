/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface HKElectrocardiogramWaveformView : UIView

{
    double _lineWidth;
    UIColor *_lineColor;
    NSArray *_shapeLayers;
    struct CGRect _pathBounds;
    struct CGRect _lastPathBounds;
}

@property (retain, nonatomic) NSArray *shapeLayers;
@property (nonatomic) struct CGRect pathBounds;
@property (nonatomic) struct CGRect lastPathBounds;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)setPaths:(id)arg1;
- (id)createShapeLayerWithPath:(id)arg1;

@end
