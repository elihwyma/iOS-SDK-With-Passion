/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKCSSToken;

@interface IKCSSTokenizer : NSObject

{
    unsigned long long currentOffset;
    unsigned long long textBytesCharCount;
    unsigned short *textBytes;
    IKCSSToken *reconsumeToken;
    IKCSSToken *_currentToken;
}

@property (nonatomic, readonly) IKCSSToken *currentToken;

+ (_Bool)isWhitespace:(unsigned short)arg1;
+ (_Bool)isDigit:(unsigned short)arg1;
+ (_Bool)isNameStartCodePoint:(unsigned short)arg1;
+ (_Bool)isUppercaseLetter:(unsigned short)arg1;
+ (_Bool)isLowercaseLetter:(unsigned short)arg1;
+ (_Bool)isLetter:(unsigned short)arg1;
+ (_Bool)isNonASCIICodePoint:(unsigned short)arg1;
+ (_Bool)isNewline:(unsigned short)arg1;
+ (_Bool)isHexDigit:(unsigned short)arg1;
+ (_Bool)isNameCodePoint:(unsigned short)arg1;
+ (_Bool)isNonPrintable:(unsigned short)arg1;

- (void)dealloc;
- (id)initWithText:(id)arg1;
- (id)_consumeToken:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (_Bool)isEOF:(unsigned long long)arg1;
- (unsigned short)_getChar:(unsigned long long)arg1;
- (id)_consumeWhitespace:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeString:(unsigned long long)arg1 consumed:(unsigned long long *)arg2 toEndChar:(unsigned short)arg3;
- (id)_consumeHash:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeDollar:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeAsterisk:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumePlus:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeMinus:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeDot:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeComment:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeSlash:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeLessThan:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeAt:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeBackslash:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeCaret:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeNumeric:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeNameStart:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumePipe:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeTilde:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (_Bool)isValidEscape:(unsigned long long)arg1;
- (unsigned short)_consumeEscapedCodePoint:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (_Bool)wouldStartIdentifier:(unsigned long long)arg1;
- (id)_consumeName:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeIdentLike:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (_Bool)wouldStartNumber:(unsigned long long)arg1;
- (id)_consumeUrl:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (void)_consumeBadUrlRemnants:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)_consumeNumber:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;
- (id)getNextToken;
- (void)reconsumeToken:(id)arg1;
- (id)_consumeUnicodeRange:(unsigned long long)arg1 consumed:(unsigned long long *)arg2;

@end
