/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface REScriptSymbolTable : NSObject

{
    REScriptSymbolTable *_parentTable;
    NSMutableDictionary *_definitions;
}

- (_Bool)typeForDefinition:(id)arg1 type:(unsigned long long *)arg2;
- (id)objectValueForDefinition:(id)arg1;
- (id)nodeValueForDefinition:(id)arg1;
- (void)_enumerateObjectsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithParentScope:(id)arg1;
- (_Bool)define:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)setNodeValue:(id)arg1 forDefinition:(id)arg2 error:(id *)arg3;
- (_Bool)setObjectValue:(id)arg1 forDefinition:(id)arg2 error:(id *)arg3;
- (void)enumerateFeatures:(CDUnknownBlockType)arg1;
- (void)enumerateRules:(CDUnknownBlockType)arg1;

@end
