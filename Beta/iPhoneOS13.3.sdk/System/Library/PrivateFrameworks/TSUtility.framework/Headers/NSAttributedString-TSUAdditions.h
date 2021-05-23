/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (TSUAdditions)

+ (id)tsu_carriageReturnAttributedString;

- (id)tsu_RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange *)arg2;
- (id)tsu_RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)tsu_stringWithoutAttachments;
- (struct _NSRange)tsu_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (unsigned long long)tsu_numberOfTables;
- (id)tsu_textTablesInRange:(struct _NSRange)arg1;

@end
