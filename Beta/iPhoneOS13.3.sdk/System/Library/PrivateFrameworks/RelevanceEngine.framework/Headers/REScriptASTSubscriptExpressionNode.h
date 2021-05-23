/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode

{
    REScriptASTNode *_expression;
    REScriptASTNode *_startIndex;
    REScriptASTNode *_endIndex;
}

@property (nonatomic, readonly) REScriptASTNode *expression;
@property (nonatomic, readonly) REScriptASTNode *startIndex;
@property (nonatomic, readonly) REScriptASTNode *endIndex;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithExpression:(id)arg1 startIndex:(id)arg2 endIndex:(id)arg3;

@end
