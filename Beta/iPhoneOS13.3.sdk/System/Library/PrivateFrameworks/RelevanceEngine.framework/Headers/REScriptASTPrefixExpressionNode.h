/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTPrefixExpressionNode : REScriptASTNode

{
    REScriptToken *_prefixOperator;
    REScriptASTNode *_node;
}

@property (nonatomic, readonly) REScriptToken *prefixOperator;
@property (nonatomic, readonly) REScriptASTNode *node;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2;

@end
