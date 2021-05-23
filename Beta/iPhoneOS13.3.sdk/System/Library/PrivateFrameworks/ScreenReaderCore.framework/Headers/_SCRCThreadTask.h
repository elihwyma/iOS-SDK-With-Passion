/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCRCThreadTask : NSObject

{
    id _target;
    SEL _selector;
    NSConditionLock *_waitLock;
    unsigned int _mask;
    NSMutableArray *_objectArray;
}

+ (id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;

- (void)dealloc;
- (void)fire;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;
- (void)setWaitLock:(id)arg1;

@end
