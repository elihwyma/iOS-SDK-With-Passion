/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSInvocation, NSString, TMLMethodDescriptor;

@interface TMLMethodCall : NSObject

{
    TMLMethodDescriptor *_methodDescriptor;
    SEL _selector;
    _Bool _classSelector;
    CDUnknownBlockType _block;
    NSInvocation *_invocation;
    NSArray *_argTypes;
}

@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic, readonly) _Bool classMethod;

- (id)callWithArguments:(id)arg1;
- (id)_callWithArguments:(id)arg1;
- (id)initWithMethodDescriptor:(id)arg1 forClass:(Class)arg2;

@end
