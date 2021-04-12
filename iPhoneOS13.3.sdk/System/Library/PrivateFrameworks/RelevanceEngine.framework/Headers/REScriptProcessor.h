//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REScriptParserDelegate-Protocol.h>
#import <RelevanceEngine/REScriptTokenizerDelegate-Protocol.h>

@class NSString, REScriptParser, REScriptSymbolTable, REScriptTokenizer;
@protocol REBacktrackingTokenBuffer, REScriptBuffer;

@interface REScriptProcessor : NSObject <REScriptTokenizerDelegate, REScriptParserDelegate>
{
    NSString *_path;
    id <REScriptBuffer> _buffer;
    REScriptTokenizer *_tokenizer;
    id <REBacktrackingTokenBuffer> _tokenStack;
    REScriptParser *_parser;
    REScriptSymbolTable *_table;
}

+ (id)_sharedSystemTable;
+ (id)processorWithPath:(id)arg1;
+ (id)processorWithSource:(id)arg1;
// - (void).cxx_destruct;
- (void)parser:(id)arg1 didEncouterParserError:(id)arg2;
- (void)tokenizer:(id)arg1 didEncouterTokenError:(id)arg2;
- (void)_encounteredError:(id)arg1;
- (void)_process;
- (id)features;
- (id)rules;
- (id)featuresWithNames:(id)arg1;
- (id)rulesWithNames:(id)arg1;
- (id)initWithScriptBuffer:(id)arg1 path:(id)arg2;

@end

