/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class NSDictionary, REScriptToken;

@interface REScriptASTRuleNode : REScriptASTNode

{
    REScriptToken *_type;
    REScriptToken *_name;
    NSDictionary *_options;
    REScriptASTNode *_expression;
}

@property (nonatomic, readonly) REScriptToken *type;
@property (nonatomic, readonly) REScriptToken *name;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) REScriptASTNode *expression;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithType:(id)arg1 options:(id)arg2 name:(id)arg3 expression:(id)arg4;

@end
