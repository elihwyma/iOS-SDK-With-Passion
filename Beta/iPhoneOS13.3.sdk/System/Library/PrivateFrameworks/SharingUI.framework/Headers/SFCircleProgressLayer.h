/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SFCircleProgressLayer : CALayer

{
    double _progressLineWidth;
    double _oneFullRotation;
    _Bool _showProgressTray;
    long long _progressStartPoint;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

@property (nonatomic) long long progressStartPoint;
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
