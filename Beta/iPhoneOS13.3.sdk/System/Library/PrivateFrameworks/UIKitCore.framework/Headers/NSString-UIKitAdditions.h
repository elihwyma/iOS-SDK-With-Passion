/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (UIKitAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;
- (id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(_Bool)arg2;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (id)_uikit_unescapedQueryValue;
- (id)queryKeysAndValues;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize)sizeWithFont:(id)arg1;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize)sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(_Bool)arg6;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6 truncationRect:(struct CGRect *)arg7;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(_Bool)arg7;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(_Bool)arg8;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(_Bool)arg6;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6;
- (struct CGSize)_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6 truncationRect:(struct CGRect *)arg7;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(_Bool)arg7;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(_Bool)arg8;
- (struct CGSize)_optimizedSizeWithFont:(id)arg1;
- (id)_adjustedFontFromFont:(id)arg1 withinFrame:(struct CGRect)arg2 minimumSize:(double)arg3 textSize:(struct CGSize *)arg4;
- (id)_ui_secureString;

@end
