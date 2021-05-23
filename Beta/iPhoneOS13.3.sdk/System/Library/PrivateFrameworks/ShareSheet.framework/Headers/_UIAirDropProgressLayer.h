/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _UIAirDropProgressLayer : CALayer

{
    double _progressLineWidth;
    double _oneFullRotation;
    _Bool _showProgressTray;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) _Bool showProgressTray;
@property (nonatomic) double progress;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;

@end
