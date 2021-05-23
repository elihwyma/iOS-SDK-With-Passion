/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVRunLoopConditionRunLoopState : NSObject

{
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_signalSource;
    _Bool _signaled;
}

@property (nonatomic, readonly) struct __CFRunLoop *runLoop;
@property (nonatomic) struct __CFRunLoopSource *signalSource;
@property (nonatomic) _Bool signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop *)arg1;

- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;

@end
