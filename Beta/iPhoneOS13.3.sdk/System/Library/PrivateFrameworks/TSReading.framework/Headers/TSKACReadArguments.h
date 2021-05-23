/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKACReadArguments : NSObject

{
    SEL _selector;
    id _target;
    void *_argument;
    id _argument2;
}

@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) void *argument;
@property (nonatomic, readonly) id argument2;

- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void *)arg3;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void *)arg3 argument2:(id)arg4;

@end
