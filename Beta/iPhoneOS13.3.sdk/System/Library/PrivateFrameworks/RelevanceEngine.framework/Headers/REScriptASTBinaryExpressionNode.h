/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTBinaryExpressionNode : REScriptASTNode

{
    REScriptToken *_binaryOperator;
    REScriptASTNode *_expression;
}

@property (nonatomic, readonly) REScriptToken *binaryOperator;
@property (nonatomic, readonly) REScriptASTNode *expression;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithOperator:(id)arg1 expression:(id)arg2;

@end
