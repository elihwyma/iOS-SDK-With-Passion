/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, REScriptASTNode, REScriptToken;

@interface _RESymbolDefinition : NSObject

{
    unsigned long long _type;
    REScriptToken *_token;
    NSDictionary *_options;
    REScriptASTNode *_value;
    id _objectValue;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) REScriptToken *token;
@property (nonatomic, readonly) NSDictionary *options;
@property (retain, nonatomic) REScriptASTNode *value;
@property (retain, nonatomic) id objectValue;

- (id)initWithToken:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3;

@end
