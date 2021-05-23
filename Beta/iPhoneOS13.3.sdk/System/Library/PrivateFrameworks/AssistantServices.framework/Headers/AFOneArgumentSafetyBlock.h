/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFOneArgumentSafetyBlock : NSObject

{
    struct atomic_flag _hasInvoked;
    CDUnknownBlockType _block;
    id _defaultValue;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 defaultValue:(id)arg2;
- (_Bool)invokeWithValue:(id)arg1;

@end
