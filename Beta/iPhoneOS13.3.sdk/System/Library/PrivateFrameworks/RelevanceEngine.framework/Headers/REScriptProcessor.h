/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REScriptParser, REScriptSymbolTable, REScriptTokenizer;

@protocol REBacktrackingTokenBuffer, REScriptBuffer;

@interface REScriptProcessor : NSObject

{
    NSString *_path;
    id <REScriptBuffer> _buffer;
    REScriptTokenizer *_tokenizer;
    id <REBacktrackingTokenBuffer> _tokenStack;
    REScriptParser *_parser;
    REScriptSymbolTable *_table;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)processorWithSource:(id)arg1;
+ (id)processorWithPath:(id)arg1;
+ (id)_sharedSystemTable;

- (void)_process;
- (id)features;
- (id)rules;
- (void)parser:(id)arg1 didEncouterParserError:(id)arg2;
- (void)tokenizer:(id)arg1 didEncouterTokenError:(id)arg2;
- (id)featuresWithNames:(id)arg1;
- (id)initWithScriptBuffer:(id)arg1 path:(id)arg2;
- (id)rulesWithNames:(id)arg1;
- (void)_encounteredError:(id)arg1;

@end
