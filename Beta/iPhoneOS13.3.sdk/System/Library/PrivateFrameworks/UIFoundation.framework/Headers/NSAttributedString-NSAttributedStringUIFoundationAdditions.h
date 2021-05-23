/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NSAttributedStringUIFoundationAdditions)

+ (id)_documentTypeForFileType:(id)arg1;
+ (_Bool)_isAttributedStringAgent;
+ (id)allowedSecureCodingClasses;
+ (id)attributedStringWithAttachment:(id)arg1;

- (struct CGSize)size;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)fontAttributesInRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(_Bool *)arg3;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;
- (void)drawInRect:(struct CGRect)arg1;
- (_Bool)_isStringDrawingTextStorage;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2 usesAlternativeBreaker:(_Bool)arg3;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)containsAttachmentsInRange:(struct _NSRange)arg1;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange)arg1;
- (id)fileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)defaultLanguage;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (_Bool)containsAttachments;
- (id)RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)docFormatFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)_htmlDocumentFragmentString:(struct _NSRange)arg1 documentAttributes:(id)arg2 subresources:(id *)arg3;
- (id)_documentFromRange:(struct _NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;
- (id)initWithRTF:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithURL:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithPath:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithHTML:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id *)arg3;
- (id)rulerAttributesInRange:(struct _NSRange)arg1;
- (_Bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 context:(id)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1;
- (_Bool)hasColorGlyphsInRange:(struct _NSRange)arg1;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 withTrackingAdjustment:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 scaledByScaleFactor:(double)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 context:(id)arg3;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;

@end
