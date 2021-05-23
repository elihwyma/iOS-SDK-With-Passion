/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CalNWideQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2;
- (void)executeBlock:(CDUnknownBlockType)arg1;

@end
