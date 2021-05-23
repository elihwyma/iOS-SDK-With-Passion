/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject

{
    MFPlainTextDocument *_inputDocument;
    unsigned int _encoding;
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    unsigned int _addedTrailingSpaces:1;
    NSMutableString *_lineString;
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned int)arg2;

- (void)dealloc;
- (id)outputString;
- (_Bool)addedTrailingSpaces;
- (id)quotedString;
- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(_Bool)arg3;
- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange)arg2 withQuoteLevel:(unsigned int)arg3;

@end
