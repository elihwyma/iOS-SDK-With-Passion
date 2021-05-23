/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class NSArray, REScriptToken;

@interface REScriptASTFunctionCallNode : REScriptASTNode

{
    REScriptToken *_functionIdentifier;
    NSArray *_arguments;
}

@property (nonatomic, readonly) REScriptToken *functionIdentifier;
@property (nonatomic, readonly) NSArray *arguments;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithFunctionName:(id)arg1 arguments:(id)arg2;

@end
