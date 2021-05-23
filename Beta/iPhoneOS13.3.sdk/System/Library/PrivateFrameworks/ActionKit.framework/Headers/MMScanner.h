/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MMScanner : NSObject

{
    NSString *_string;
    NSArray *_lineRanges;
    unsigned long long _startLocation;
    unsigned long long _rangeIndex;
    NSMutableArray *_transactions;
    struct _NSRange _currentRange;
}

@property (nonatomic) unsigned long long startLocation;
@property (nonatomic) struct _NSRange currentRange;
@property (nonatomic, readonly) struct _NSRange currentLineRange;
@property (nonatomic) unsigned long long rangeIndex;
@property (nonatomic, readonly) NSMutableArray *transactions;
@property (nonatomic, readonly) NSString *string;
@property (copy, nonatomic, readonly) NSArray *lineRanges;
@property (nonatomic) unsigned long long location;

+ (id)scannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1 lineRanges:(id)arg2;

- (id)initWithString:(id)arg1;
- (void)beginTransaction;
- (void)advance;
- (void)commitTransaction:(_Bool)arg1;
- (unsigned short)nextCharacter;
- (id)nextWord;
- (unsigned long long)skipWhitespace;
- (id)initWithString:(id)arg1 lineRanges:(id)arg2;
- (_Bool)atBeginningOfLine;
- (_Bool)atEndOfLine;
- (_Bool)atEndOfString;
- (unsigned short)previousCharacter;
- (id)previousWord;
- (id)previousWordWithCharactersFromSet:(id)arg1;
- (id)nextWordWithCharactersFromSet:(id)arg1;
- (void)advanceToNextLine;
- (_Bool)matchString:(id)arg1;
- (unsigned long long)skipCharactersFromSet:(id)arg1;
- (unsigned long long)skipCharactersFromSet:(id)arg1 max:(unsigned long long)arg2;
- (unsigned long long)skipEmptyLines;
- (unsigned long long)skipIndentationUpTo:(unsigned long long)arg1;
- (unsigned long long)skipNestedBracketsWithDelimiter:(unsigned short)arg1;
- (unsigned long long)skipToEndOfLine;
- (unsigned long long)skipToLastCharacterOfLine;
- (unsigned long long)skipWhitespaceAndNewlines;
- (id)_lineRangesForString:(id)arg1;
- (unsigned long long)_locationOfCharacter:(unsigned short)arg1 inRange:(struct _NSRange)arg2;

@end
