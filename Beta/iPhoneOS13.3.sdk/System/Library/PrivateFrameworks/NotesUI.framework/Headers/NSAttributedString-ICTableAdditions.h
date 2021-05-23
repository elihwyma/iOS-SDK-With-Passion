/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (ICTableAdditions)

- (id)ic_textTablesInRange:(struct _NSRange)arg1;
- (CDStruct_4bcfbbae)ic_tableSizeForTextTable:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)ic_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange *)arg2;
- (unsigned long long)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out unsigned long long *)arg2;
- (struct _NSRange)ic_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (unsigned long long)ic_numberOfTables;
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(struct UIColor *)arg2;
- (id)ic_stringByTrimmingLeadingTrailingWhitespace;
- (id)ic_stringWithoutAttachments;
- (id)ic_attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(struct UIColor *)arg2;
- (struct _NSRange)ic_rangeForAttachment:(id)arg1 withTextAttachment:(id *)arg2;
- (long long)ic_writingDirectionAtIndex:(unsigned long long)arg1;
- (id)ic_itemProviderDataForUTI:(id)arg1;

@end
