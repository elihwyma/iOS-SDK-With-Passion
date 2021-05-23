/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode

{
    NSArray *_expressions;
}

@property (nonatomic, readonly) NSArray *expressions;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithExpressions:(id)arg1;

@end
