/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class NSDictionary, REScriptToken;

@interface REScriptASTFeatureNode : REScriptASTNode

{
    REScriptToken *_name;
    NSDictionary *_options;
    REScriptASTNode *_value;
}

@property (nonatomic, readonly) REScriptToken *name;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) REScriptASTNode *value;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;
- (id)initWithName:(id)arg1 options:(id)arg2 expression:(id)arg3;

@end
