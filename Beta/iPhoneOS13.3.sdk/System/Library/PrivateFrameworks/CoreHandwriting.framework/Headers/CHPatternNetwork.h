/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CHPatternNetwork : NSObject

{
    struct Network *_network;
    NSDictionary *_symbols;
    NSDictionary *_startNodes;
    NSDictionary *_startCursorForContentTypes;
}

+ (id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(_Bool)arg3;
+ (id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)cursorByAdvancingWithSymbol:(unsigned long long)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)patternToSymbolMap;
+ (id)contentTypesToPatternsMapping;

- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2;
- (unsigned long long)stateTypeForNodeIndex:(unsigned long long)arg1;

@end
