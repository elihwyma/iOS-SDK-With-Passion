/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString, TMLContext;

@interface TMLScriptSignalHandler : NSObject

{
    TMLContext *_context;
    id _target;
    NSString *_functionName;
    unsigned long long _returnType;
    int _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)detach;
- (void)attach;
- (id)callWithArguments:(id)arg1;
- (id)initWithFunctionName:(id)arg1 returnType:(unsigned long long)arg2 target:(id)arg3 context:(id)arg4;

@end
