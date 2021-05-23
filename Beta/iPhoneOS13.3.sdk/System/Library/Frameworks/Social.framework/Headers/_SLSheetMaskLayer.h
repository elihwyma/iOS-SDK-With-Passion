/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _SLSheetMaskLayer : CALayer

{
    double _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

@property (nonatomic) double clipCornerRadius;
@property (retain, nonatomic) UIColor *clipBackgroundColor;

- (void)drawInContext:(struct CGContext *)arg1;

@end
