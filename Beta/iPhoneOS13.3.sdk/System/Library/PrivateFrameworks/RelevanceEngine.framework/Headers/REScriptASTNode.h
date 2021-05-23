/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSSet, REScriptToken;

@interface REScriptASTNode : NSObject

{
    REScriptToken *_token;
}

@property (nonatomic, readonly) REScriptToken *token;
@property (nonatomic, readonly) NSSet *dependencies;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;

- (id)initWithToken:(id)arg1;

@end
