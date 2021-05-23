/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTMemberExpressionNode : REScriptASTNode

{
    REScriptASTNode *_expression;
    REScriptToken *_member;
}

@property (nonatomic, readonly) REScriptASTNode *expression;
@property (nonatomic, readonly) REScriptToken *member;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithMember:(id)arg1 expression:(id)arg2;

@end
