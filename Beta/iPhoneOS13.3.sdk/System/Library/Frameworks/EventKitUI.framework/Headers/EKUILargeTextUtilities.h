/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKUILargeTextUtilities : NSObject

+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)arg1 maximumValue:(double)arg2 shouldScaleForSmallerSizes:(_Bool)arg3;
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)arg1 shouldScaleForSmallerSizes:(_Bool)arg2;
+ (double)contentSizeCategoryScaledValueFromContentSizeCategory:(id)arg1 correspondingValue:(double)arg2 maximumValue:(double)arg3;
+ (double)contentSizeCategoryScaledValueForLargestNonAccessibilityValue:(double)arg1 maximumValue:(double)arg2;
+ (double)contentSizeCategoryScaledValueForLargestValue:(double)arg1;

@end
