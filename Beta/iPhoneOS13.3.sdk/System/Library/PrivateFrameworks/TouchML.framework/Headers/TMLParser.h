/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TMLMetaContext, TMLMetaObject;

@interface TMLParser : NSObject

{
    TMLMetaContext *_context;
    unsigned long long _state;
    NSString *_lastIdent;
    _Bool _methodDeclaration;
    NSString *_declarationType;
    NSMutableSet *_declarationAttributes;
    NSString *_methodSelector;
    NSMutableArray *_activeTokens;
    TMLMetaObject *_activeObject;
    NSMutableArray *_objectStack;
    NSString *_filename;
    unsigned int _lineNo;
    NSString *_basePath;
    NSMutableDictionary *_macros;
    NSMutableSet *_preprocessorMacros;
    NSMutableSet *_functionIdentifiers;
    _Bool _lookaheadInFunction;
    NSString *_lookaheadCurrentIdent;
    _Bool _lookaheadOnly;
    _Bool _lookaheadComplete;
    _Bool _strict;
    NSString *_error;
}

@property (nonatomic) _Bool strict;
@property (nonatomic, readonly) NSString *error;

+ (id)unescapeString:(id)arg1;
+ (id)transformObjectCreation:(id)arg1;
+ (id)transformFunction:(id)arg1;
+ (id)previousNonSpaceToken:(id)arg1;
+ (id)varsInCurrentScope:(id)arg1;
+ (_Bool)isBuiltinObject:(id)arg1;
+ (id)transformAccessors:(id)arg1;
+ (id)transformBreakpoints:(id)arg1 lineNo:(int)arg2 filename:(id)arg3;

- (id)initWithContext:(id)arg1;
- (void)teardown;
- (void)setup;
- (_Bool)parseString:(id)arg1;
- (_Bool)parseFunctionLookaheadWithFile:(id)arg1;
- (_Bool)consumeToken:(unsigned long long)arg1 text:(const char *)arg2;
- (_Bool)parseString:(id)arg1 basePath:(id)arg2;
- (_Bool)parseString:(id)arg1 basePath:(id)arg2 filename:(id)arg3;
- (_Bool)parseFunctionLookaheadWithString:(id)arg1 basePath:(id)arg2 filename:(id)arg3;
- (unsigned long long)blockValueDepth;
- (void)addToken:(unsigned long long)arg1 text:(const char *)arg2;
- (void)commitObject;
- (void)commitProperty;
- (void)commitMethod;
- (void)commitSignal;
- (void)commitInitializer;
- (void)commitImplements;
- (void)commitFunction;
- (void)commitPragma;
- (void)commitMacro;
- (id)compileExpression:(id)arg1;
- (id)compileFunction:(id)arg1 bodyOnly:(_Bool)arg2 localVars:(id)arg3;
- (id)compileFunction:(id)arg1 bodyOnly:(_Bool)arg2;
- (_Bool)parseFile:(id)arg1;
- (_Bool)parseTokens:(id)arg1 startingLine:(unsigned long long)arg2;
- (void)addPreprocessorMacro:(id)arg1;

@end
