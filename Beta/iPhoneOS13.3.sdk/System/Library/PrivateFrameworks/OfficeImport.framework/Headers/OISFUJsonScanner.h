/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface OISFUJsonScanner : NSObject

{
    NSString *mString;
    unsigned short *mCharacters;
    unsigned long long mLength;
    unsigned long long mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (unsigned short)nextCharacter;
- (void)skipWhitespace;
- (id)parseObjectWithMaxDepth:(int)arg1;
- (id)parseArrayWithMaxDepth:(int)arg1;
- (id)parseDictionaryWithMaxDepth:(int)arg1;
- (void)appendCharactersInRange:(struct _NSRange)arg1 toString:(id)arg2;
- (id)parseHexCharacter;
- (id)parseString;
- (_Bool)parseConstantString:(const char *)arg1;
- (id)parseNull;
- (id)parseTrue;
- (id)parseFalse;
- (id)parseNumber;

@end
