/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (NSStringDrawing)

+ (void)setUsesFontLeading:(_Bool)arg1;
+ (_Bool)usesFontLeading;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (long long)typesetterBehavior;
+ (float)hyphenationFactor;
+ (void)setHyphenationFactor:(float)arg1;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (_Bool)usesScreenFonts;
+ (void)setUsesScreenFonts:(_Bool)arg1;
+ (void)setShowsInvisibleCharacters:(_Bool)arg1;
+ (_Bool)showsInvisibleCharacters;
+ (void)setShowsControlCharacters:(_Bool)arg1;
+ (_Bool)showsControlCharacters;

- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawAtPoint:(struct CGPoint)arg1 withAttributes:(id)arg2;
- (void)drawInRect:(struct CGRect)arg1 withAttributes:(id)arg2;
- (struct CGSize)sizeWithAttributes:(id)arg1;
- (struct CGSize)_sizeWithSize:(struct CGSize)arg1 attributes:(id)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 attributes:(id)arg3;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3;
- (_Bool)hasColorGlyphsInRange:(struct _NSRange)arg1 attributes:(id)arg2;
- (id)stringByStrippingLeadingAndTrailingWhitespaceAndQuotes;

@end
