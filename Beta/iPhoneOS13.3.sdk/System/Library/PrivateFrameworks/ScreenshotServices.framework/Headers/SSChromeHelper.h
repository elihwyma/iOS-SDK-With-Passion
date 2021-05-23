/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@interface SSChromeHelper : NSObject

+ (id)separatorView;
+ (long long)statusBarStyle;
+ (id)barSeparatorColor;
+ (int)statusBarVisibilityForTraitCollection:(id)arg1 isPortrait:(_Bool)arg2;
+ (long long)backgroundBlurEffectStyle;
+ (double)cropsHandleOutset;
+ (double)cropsCornerLength;
+ (double)cropsCornerWidth;
+ (struct CGRect)availableRectForFullscreenContent:(struct CGRect)arg1 layoutBounds:(struct CGRect)arg2 bleedToBottom:(_Bool)arg3 topBarHeight:(double)arg4 bottomBarHeight:(double)arg5 userInterfaceIdiom:(long long)arg6 multipleScreenshots:(_Bool)arg7;
+ (double)defaultBarButtonSpacing;
+ (id)createFixedSpaceBarButtonItemWithWidth:(double)arg1;
+ (double)widthForOpacityControlInView:(id)arg1 withContentSwitcher:(id)arg2;
+ (void)configureNavigationBarAppearance:(id)arg1;
+ (double)barSeparatorSize;
+ (double)screenshotTopBottomMargin:(long long)arg1;
+ (double)screenshotTopBottomMarginPad;
+ (double)screenshotTopBottomMarginPhone;
+ (double)barButtonItemsLeftOfOpacitySlider;
+ (double)defaultBarButtonWidth;
+ (double)widthForContentSwitcher:(id)arg1 forView:(id)arg2;
+ (double)contentSwitcherPadding;
+ (double)countIndicatorOffset;

@end
