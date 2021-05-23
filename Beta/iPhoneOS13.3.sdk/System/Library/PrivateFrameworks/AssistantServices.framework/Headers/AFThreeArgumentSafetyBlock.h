/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFThreeArgumentSafetyBlock : NSObject

{
    struct atomic_flag _hasInvoked;
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3;

@end
