/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@interface REScriptASTExpressionNode : REScriptASTNode

{
    REScriptASTNode *_prefixExpression;
    REScriptASTNode *_binaryExpressions;
}

@property (nonatomic, readonly) REScriptASTNode *prefixExpression;
@property (nonatomic, readonly) REScriptASTNode *binaryExpressions;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithPrefixExpression:(id)arg1 binaryExpression:(id)arg2;

@end
