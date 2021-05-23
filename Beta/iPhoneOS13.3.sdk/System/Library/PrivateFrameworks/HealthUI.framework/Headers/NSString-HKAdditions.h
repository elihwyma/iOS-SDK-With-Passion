/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSString.h>

@interface NSString (HKAdditions)

- (id)hk_attributedStringPrefixedWithImage:(id)arg1 baselineAdjusted:(double)arg2 withAttributes:(id)arg3;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 baselineAdjusted:(double)arg2 spacing:(double)arg3;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 baselineAdjusted:(double)arg2 spacing:(double)arg3 attributes:(id)arg4;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 spacing:(double)arg2;
- (id)hk_attributedStringPrefixedWithImage:(id)arg1 spacing:(double)arg2 attributes:(id)arg3;
- (double)hk_boundingHeightWithWidth:(double)arg1 font:(id)arg2;
- (double)hk_boundingWidthWithHeight:(double)arg1 font:(id)arg2;

@end
