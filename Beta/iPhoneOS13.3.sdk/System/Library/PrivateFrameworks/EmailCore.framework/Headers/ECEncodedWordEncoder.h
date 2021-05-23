/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface ECEncodedWordEncoder : NSObject

{
    unsigned long long _stringEncoding;
    NSString *_language;
    NSString *_string;
    NSString *_characterSet;
    long long _encodedWordEncoding;
    NSData *_decodedText;
    unsigned long long _singleEncodedWordLength;
}

@property (nonatomic, readonly) unsigned long long stringEncoding;
@property (copy, nonatomic, readonly) NSString *language;
@property (copy, nonatomic, readonly) NSString *string;
@property (copy, nonatomic) NSString *characterSet;
@property (nonatomic) long long encodedWordEncoding;
@property (copy, nonatomic) NSData *decodedText;
@property (nonatomic) unsigned long long singleEncodedWordLength;
@property (nonatomic, readonly) unsigned long long minimumLengthOfEncodedWord;

- (id)init;
- (id)description;
- (void)_prepareForEncoding;
- (unsigned long long)_lengthOfQEncodedTextForBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)_bEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2;
- (unsigned long long)_qEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2;
- (unsigned long long)_writeEncodedWordPreambleToBuffer:(char *)arg1 length:(unsigned long long)arg2;
- (void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char *)arg1 fromDecodedBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (_Bool)_getBytesWithoutSplittingComposedCharacters:(void *)arg1 targetQEncodedTextLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 splitComposedCharacterSequence:(_Bool *)arg4 usedQEncodedTextLength:(unsigned long long *)arg5 extraLength:(unsigned long long *)arg6 extraQEncodedTextLength:(unsigned long long *)arg7 fromString:(id)arg8 stringEncoding:(unsigned long long)arg9 range:(struct _NSRange)arg10 remainingRange:(struct _NSRange *)arg11;
- (const char *)_findNextByteThatNeedsQEncodingBetweenStartByte:(const char *)arg1 endByte:(const char *)arg2;
- (id)initWithString:(id)arg1 stringEncoding:(unsigned long long)arg2 language:(id)arg3;
- (unsigned long long)encodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2;

@end
