/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@class ABVCardWatchdogTimer, NSArray, NSMutableData;

@interface ABVCardLexer : NSObject

{
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    _Bool _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
    ABVCardWatchdogTimer *_timer;
}

- (void)dealloc;
- (unsigned int)cursor;
- (int)errorCount;
- (id)tokenSetForLength:(int)arg1;
- (int)nextTokenPeakUnicode:(_Bool)arg1 length:(int)arg2;
- (int)nextTokenPeakSingle:(_Bool)arg1 length:(int)arg2;
- (_Bool)advancePastEOL;
- (_Bool)advancedPastToken:(int)arg1;
- (int)tokenAtCursor;
- (id)nextQuotedPrintableData;
- (id)nextEscapedCharacter;
- (void)advanceToPeakPoint;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(_Bool)arg2 trim:(_Bool)arg3;
- (id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(_Bool)arg2 stopTokens:(int)arg3 trim:(_Bool)arg4;
- (_Bool)_advancePastLineFoldingSequenceIfNeeded;
- (void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(_Bool)arg2 stopTokens:(int)arg3 trim:(_Bool)arg4 intoString:(id)arg5;
- (id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(_Bool)arg2 stopTokens:(int)arg3 trim:(_Bool)arg4;
- (id)nextUnicodeBase64Line:(_Bool *)arg1;
- (id)nextSingleByteBase64Line:(_Bool *)arg1;
- (id)nextBase64Line:(_Bool *)arg1;
- (_Bool)advanceToEOL;
- (int)advanceToString;
- (int)advanceToUnicodeString;
- (int)advanceToSingleByteString;
- (int)nextTokenPeak:(_Bool)arg1;
- (_Bool)advanceToEOLUnicode;
- (_Bool)advanceToEOLSingle;
- (_Bool)advancePastEOLUnicode;
- (_Bool)advancePastEOLSingle;
- (id)tokenName:(int)arg1;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3;
- (id)nextBase64Data;
- (_Bool)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (_Bool)atEOF;

@end
