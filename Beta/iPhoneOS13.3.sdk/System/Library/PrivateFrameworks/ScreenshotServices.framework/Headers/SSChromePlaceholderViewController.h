/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <UIKit/UIViewController.h>

@class SSChromePlaceholderView, UIColor;

@interface SSChromePlaceholderViewController : UIViewController

{
    SSChromePlaceholderView *_placeholderView;
}

@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) struct CGRect screenshotContentFrame;
@property (nonatomic, readonly) long long backgroundBlurEffectStyle;
@property (nonatomic, readonly) double cropsCornerContentPadding;
@property (nonatomic, readonly) double cropsCornerEdgeLength;
@property (nonatomic, readonly) double cropsCornerLineWidth;
@property (nonatomic, readonly) UIColor *cropsCornerColor;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;

@end
