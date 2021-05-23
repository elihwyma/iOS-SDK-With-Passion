/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIUtilities : NSObject

+ (id)randomColor;
+ (_Bool)isAXSmallEnabled:(id)arg1;
+ (_Bool)isAXLargeEnabled:(id)arg1;
+ (long long)textAlignmentWithSemanticContentAttribute:(long long)arg1;
+ (id)placeholderImageResourceName:(long long)arg1;
+ (struct TVCornerRadii)imageCornerRadiiWithStyle:(long long)arg1;
+ (double)imageCornerRadiusWithStyle:(long long)arg1;
+ (_Bool)contentSizeCategoryIsAccessibility:(id)arg1;
+ (_Bool)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;
+ (struct CGSize)imageSizeWithAspectRatio:(double)arg1 scaleToSize:(struct CGSize)arg2;
+ (_Bool)isIpadLayout;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)colorFromRGBStr:(id)arg1;
+ (long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2;
+ (id)VideosUIBundle;
+ (double)libraryCategoryListWidth;
+ (id)createImageProxyForResourceObject:(id)arg1 imageSize:(struct CGSize)arg2;
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(CDStruct_fe9bf7bc *)arg4;
+ (double)libraryListMarginToGrid;
+ (id)colorFromHexStr:(id)arg1;

@end
