/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (SafariServicesExtras)

@property (nonatomic, readonly) _Bool _sf_isScrolledToOrPastBottom;
@property (nonatomic, readonly) _Bool _sf_isScrolledPastTop;

+ (_Bool)_sf_supportsPerAxisIndicatorInsets;
+ (struct UIEdgeInsets)_sf_baseInsetsForVerticalScrollIndicatorInScrollViewContainerView:(id)arg1;
+ (struct UIEdgeInsets)_sf_baseInsetsForHorizontalScrollIndicatorInScrollViewContainerView:(id)arg1;
+ (_Bool)_sf_baseVerticalScrollIndicatorInsetsExtendFullHeight:(struct UIEdgeInsets)arg1;
+ (_Bool)_sf_baseHorizontalScrollIndicatorInsetsExtendFullWidth:(struct UIEdgeInsets)arg1;

- (void)_sf_setContentInsetAdjustments:(struct UIEdgeInsets)arg1;

@end
