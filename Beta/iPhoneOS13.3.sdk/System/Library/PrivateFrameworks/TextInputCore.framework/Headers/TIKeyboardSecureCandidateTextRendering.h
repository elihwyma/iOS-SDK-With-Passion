/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@interface TIKeyboardSecureCandidateTextRendering : NSObject

+ (struct CGColor *)_newCgColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)truncatedWidthsForItemWidths:(id)arg1 availableWidth:(double)arg2;
+ (_Bool)_textRunsHaveFixedFontSize:(id)arg1;
+ (struct __CFAttributedString *)_newAttributedStringWithText:(id)arg1 font:(struct __CTFont *)arg2 color:(struct CGColor *)arg3;
+ (void)_handleEllipsisTruncationForTextRuns:(id)arg1 textRunResponses:(id)arg2 inAvailableWidth:(double)arg3;
+ (id)_requestLayoutForSimplifiedTextRuns:(id)arg1 inWidthGroups:(id)arg2 steps:(unsigned long long)arg3;
+ (id)requestLayoutForTextRuns:(id)arg1 inWidthGroups:(id)arg2 steps:(unsigned long long)arg3;
+ (double)_totalWidthForCell:(unsigned long long)arg1 fromTextRunResponses:(id)arg2;
+ (id)_defaultLayoutTraitsForTraits:(id)arg1;
+ (_Bool)_isAllSingleLineStrings:(id)arg1;
+ (struct CGColor *)_newCgColorWithTraitsColor:(id)arg1;
+ (void)_drawLineFromCellAtIndex:(unsigned long long)arg1 ofResponse:(id)arg2 atYCoordinate:(double)arg3 inContext:(struct CGContext *)arg4 withAvailableWidth:(double)arg5;
+ (void)_drawTwoLineCellsWithSecureHeaders:(id)arg1 secureContents:(id)arg2 layoutTraits:(id)arg3 renderTraits:(id)arg4 contexts:(struct __CFArray *)arg5 availableWidth:(double)arg6 truncationSentinel:(id)arg7;
+ (_Bool)_drawSingleLineSecureHeaders:(id)arg1 secureContents:(id)arg2 layoutTraits:(id)arg3 renderTraits:(id)arg4 contexts:(struct __CFArray *)arg5 availableWidth:(double)arg6 truncationSentinel:(id)arg7 abortInsteadOfTruncating:(_Bool)arg8;
+ (void)drawSecureHeaders:(id)arg1 secureContents:(id)arg2 inContexts:(struct __CFArray *)arg3 traits:(id)arg4 truncationSentinel:(id)arg5;

@end
