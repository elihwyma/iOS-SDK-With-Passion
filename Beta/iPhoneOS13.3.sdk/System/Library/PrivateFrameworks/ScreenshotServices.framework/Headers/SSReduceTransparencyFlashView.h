/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <ScreenshotServices/SSFlashView.h>

@class UIView;

@interface SSReduceTransparencyFlashView : SSFlashView

{
    CDUnknownBlockType _oldCompletionBlock;
    UIView *_colorView;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)flashWithCompletion:(CDUnknownBlockType)arg1;

@end
