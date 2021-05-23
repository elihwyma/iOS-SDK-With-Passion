/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTDeclarationNode : REScriptASTNode

{
    REScriptToken *_type;
    REScriptToken *_name;
    REScriptASTNode *_value;
}

@property (nonatomic, readonly) REScriptToken *type;
@property (nonatomic, readonly) REScriptToken *name;
@property (nonatomic, readonly) REScriptASTNode *value;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3;

@end
