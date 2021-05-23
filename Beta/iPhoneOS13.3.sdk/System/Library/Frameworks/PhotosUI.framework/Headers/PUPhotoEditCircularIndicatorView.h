/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface PUPhotoEditCircularIndicatorView : UIView

{
    double _thickness;
    double _currentValue;
    double _minValue;
    double _maxValue;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_progressLayer;
}

@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) double thickness;
@property (nonatomic) double currentValue;
@property (retain, nonatomic) UIColor *ringColor;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetToDefaults;
- (void)_setupLayers;
- (void)_layoutSubLayers;
- (void)_updateProgressLayer;

@end
