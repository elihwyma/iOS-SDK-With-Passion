/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REScriptASTNode.h>

@class NSString;

@interface REScriptASTIdentifierNode : REScriptASTNode

@property (nonatomic, readonly) NSString *name;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)dependencies;

@end
