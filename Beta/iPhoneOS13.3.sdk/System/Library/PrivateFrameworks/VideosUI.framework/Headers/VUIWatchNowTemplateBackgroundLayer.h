/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <QuartzCore/CAGradientLayer.h>

__attribute__((visibility("hidden")))
@interface VUIWatchNowTemplateBackgroundLayer : CAGradientLayer

{
    long long _uiStyle;
}

@property (nonatomic) long long uiStyle;

- (void)drawInContext:(struct CGContext *)arg1;
- (void)updateStyle:(long long)arg1;
- (id)initWithRect:(struct CGRect)arg1 withStyle:(long long)arg2;

@end
