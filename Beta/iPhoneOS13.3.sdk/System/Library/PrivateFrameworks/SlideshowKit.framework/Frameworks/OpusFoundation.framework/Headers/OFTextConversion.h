/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@interface OFTextConversion : NSObject

+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (id)styleForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (id)weightForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (id)stretchForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (struct CGColor *)blackCGColor;
+ (id)stringFromCGColor:(struct CGColor *)arg1;
+ (id)stringFromTextAlignment:(long long)arg1;
+ (id)textFormatFromUnderlineStyle:(unsigned long long)arg1;
+ (id)stringFromLigature:(long long)arg1;
+ (id)textFormatWithCTAttributesForText:(id)arg1 attributes:(id)arg2 scaleFactor:(double)arg3;
+ (id)textFormatWithNSAttributesForText:(id)arg1 attributes:(id)arg2 scaleFactor:(double)arg3;
+ (struct CGColor *)CGColorFromString:(id)arg1;
+ (long long)textAlignmentFromString:(id)arg1;
+ (unsigned long long)underlineStyleFromTextFormat:(id)arg1;
+ (long long)ligatureFromString:(id)arg1;
+ (id)stringAttributesWithAttributedString:(id)arg1 scaleFactor:(double)arg2;
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)arg1 scaleFactor:(double)arg2;
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)arg1 scaleFactor:(double)arg2;

@end
