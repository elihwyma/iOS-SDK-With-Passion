/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFTwoArgumentSafetyBlock : NSObject

{
    struct atomic_flag _hasInvoked;
    CDUnknownBlockType _block;
    id _defaultValue1;
    id _defaultValue2;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3;
- (_Bool)invokeWithValue:(id)arg1 andValue:(id)arg2;

@end
