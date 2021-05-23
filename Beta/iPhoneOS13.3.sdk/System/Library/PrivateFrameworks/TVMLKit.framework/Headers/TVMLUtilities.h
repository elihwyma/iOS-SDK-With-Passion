/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface TVMLUtilities : NSObject

+ (id)randomColor;
+ (id)fontFromTextStyle:(id)arg1 fontWeight:(id)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;
+ (double)uiFontWeightFromCSSFontWeight:(id)arg1;
+ (_Bool)_cornerRadiiFromElement:(id)arg1 cornerRadii:(struct TVCornerRadii *)arg2 circle:(_Bool *)arg3;
+ (_Bool)_cornerRadiiWithBorderRadius:(id)arg1 cornerRadii:(struct TVCornerRadii *)arg2 imageWidth:(double)arg3 imageTreatmentValue:(id)arg4 circle:(_Bool *)arg5;
+ (double)focusedSizeIncreaseForSize:(struct CGSize)arg1 upscaleFactor:(double)arg2 useInSearchPartial:(_Bool)arg3;
+ (id)rowSpacingMetricsForRowMetrics:(id)arg1 forShowcase:(_Bool)arg2;
+ (id)_placeholderImageForViewElement:(id)arg1;
+ (id)_placeholderImageForViewElement:(id)arg1 withCornerRadii:(struct TVCornerRadii)arg2 andScaledSize:(struct CGSize)arg3;
+ (struct CGPath *)shadowPathWithCornerRadii:(struct TVCornerRadii)arg1 andScaledSize:(struct CGSize)arg2;
+ (long long)_interfaceStyleForElement:(id)arg1;
+ (long long)_overrideInterfaceStyleForElement:(id)arg1;
+ (_Bool)_cornerRadiiFromImgTreatmentValue:(id)arg1 width:(double)arg2 cornerRadii:(struct TVCornerRadii *)arg3 circle:(_Bool *)arg4;
+ (id)_placeholderImageForValue:(id)arg1 userInterfaceStyle:(long long)arg2 withCornerRadii:(struct TVCornerRadii)arg3 andScaledSize:(struct CGSize)arg4;
+ (id)TVMLKitBundle;
+ (long long)interfaceStyleForTemplateElement:(id)arg1;
+ (id)_placeholderImageForValue:(id)arg1 userInterfaceStyle:(long long)arg2;
+ (id)_defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1;
+ (id)_placeholderImageForViewElement:(id)arg1 imageLayout:(id)arg2;
+ (id)_defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1 withCornerRadii:(struct TVCornerRadii)arg2 andSize:(struct CGSize)arg3;
+ (id)_placeholderImageForViewElement:(id)arg1 withImageLayout:(id)arg2 cornerRadii:(struct TVCornerRadii)arg3 andScaledSize:(struct CGSize)arg4;
+ (void)disassociateIKViewElementsRecursivelyFromView:(id)arg1;
+ (id)TVUIKitBundle;
+ (id)TVKitBundle;
+ (id)fontFromStyle:(id)arg1;
+ (_Bool)cornerRadiiFromElement:(id)arg1 cornerRadii:(struct TVCornerRadii *)arg2 circle:(_Bool *)arg3;
+ (_Bool)_cornerRadiiFromImageLayout:(id)arg1 cornerRadii:(struct TVCornerRadii *)arg2 circle:(_Bool *)arg3;
+ (double)focusedSizeIncreaseForSize:(struct CGSize)arg1 upscaleFactor:(double)arg2;
+ (struct CGRect)centerRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
+ (void)getValuesFromTransform:(struct CGAffineTransform)arg1 translation:(struct CGPoint *)arg2 rotation:(struct CGPoint *)arg3;
+ (id)indexPathForFirstItemAttributeValue:(id)arg1;
+ (id)rowSpacingMetricsForRowMetrics:(id)arg1;
+ (id)imageWithRadialGradientOverlayFromImage:(id)arg1;
+ (id)placeholderImageForViewElement:(id)arg1;
+ (id)placeholderImageForViewElement:(id)arg1 withCornerRadii:(struct TVCornerRadii)arg2 andScaledSize:(struct CGSize)arg3;
+ (struct CGPath *)shadowPathForViewElement:(id)arg1 withCornerRadii:(struct TVCornerRadii)arg2 andScaledSize:(struct CGSize)arg3;
+ (long long)semanticContentAttributeForTemplateElement:(id)arg1;
+ (long long)overrideInterfaceStyleForTemplateElement:(id)arg1;
+ (id)_bgImageElementForProductTemplate:(id)arg1;
+ (long long)semanticAlignmentForAlignment:(long long)arg1 semanticContentAttribute:(long long)arg2;
+ (long long)semanticPositionForPosition:(long long)arg1 semanticContentAttribute:(long long)arg2;
+ (long long)contentModeForPosition:(long long)arg1 defaultMode:(long long)arg2;
+ (_Bool)isFlowcaseAtTopOfStackFromElement:(id)arg1;
+ (_Bool)canHandleDecodingOnRenderThread;
+ (id)_mobileGestaltStringForKey:(struct __CFString *)arg1;
+ (double)_headerFadeForShowcaseFactor:(double)arg1;
+ (_Bool)isAXSmallEnabled:(id)arg1;
+ (_Bool)isAXLargeEnabled:(id)arg1;

@end
