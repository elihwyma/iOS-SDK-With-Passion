/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class NSDictionary;

@interface CRCHPatternNetwork : NSObject

{
    struct CRCHNetwork *_network;
    NSDictionary *_symbols;
    NSDictionary *_startEdges;
    NSDictionary *_startCursorForContentTypes;
}

+ (id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)cursorByAdvancingWithSymbol:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)patternToSymbolMap;
+ (id)kDefaultPatternsPlusUrlsAndEmails;
+ (id)kDefaultPatterns;
+ (id)kEmailPatterns;
+ (id)kUrlPatterns;
+ (id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2;
+ (_Bool)isFinalCursor:(id)arg1 inNetwork:(id)arg2;

- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2;

@end
