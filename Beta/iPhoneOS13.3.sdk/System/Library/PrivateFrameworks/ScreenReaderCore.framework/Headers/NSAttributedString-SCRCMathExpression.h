/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)

+ (id)scrcStringWithString:(id)arg1;
+ (id)_scrcStringWithFormat:(id)arg1 args:(char *)arg2;
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithFormat:(id)arg1;
+ (id)scrcStringWithLiteralString:(id)arg1;
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;
+ (id)scrcString;
+ (id)scrcPauseString;
+ (id)scrcSpaceString;

- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;
- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;
- (_Bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;
- (id)scrcStringByAppendingAttributedString:(id)arg1;
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;
- (_Bool)scrcContainsPause;
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;

@end
