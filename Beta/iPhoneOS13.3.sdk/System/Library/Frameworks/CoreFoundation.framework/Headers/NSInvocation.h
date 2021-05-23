/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject

{
    void *_frame;
    void *_retdata;
    NSMethodSignature *_signature;
    NSMutableArray *_container;
    _Bool *_replacedByPointerBacking;
    unsigned int _magic;
    unsigned char _retainedArgs;
    unsigned char _stackAllocated;
}

@property (retain, readonly) NSMethodSignature *methodSignature;
@property (readonly) _Bool argumentsRetained;
@property id target;
@property SEL selector;

+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void *)arg2;
+ (unsigned long long)requiredStackSizeForSignature:(id)arg1;
+ (id)invocationWithMethodSignature:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)retainArguments;
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)invoke;
- (id)_initWithMethodSignature:(id)arg1 frame:(void *)arg2 buffer:(void *)arg3 size:(unsigned long long)arg4;
- (void)_addAttachedObject:(id)arg1;
- (void)getReturnValue:(void *)arg1;
- (void)setReturnValue:(void *)arg1;
- (void)invokeUsingIMP:(CDUnknownFunctionPointerType)arg1;
- (void)invokeWithTarget:(id)arg1;

@end
