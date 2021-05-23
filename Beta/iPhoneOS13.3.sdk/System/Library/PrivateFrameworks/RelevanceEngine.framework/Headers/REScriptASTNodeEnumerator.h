/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, REScriptSymbolTable;

@interface REScriptASTNodeEnumerator : NSObject

{
    NSArray *_nodes;
    REScriptSymbolTable *_table;
}

- (id)initWithRootNodes:(id)arg1 symbolTable:(id)arg2;
- (_Bool)buildSymbolTableWithError:(id *)arg1;

@end
