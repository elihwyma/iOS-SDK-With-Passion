/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFSafetyBlock : NSObject

{
    struct atomic_flag _hasInvoked;
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (_Bool)invoke;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)invokeWithSignal:(long long)arg1;

@end
