/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject

{
    NSRunLoop *_runLoop;
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) NSRunLoop *runLoop;
@property (copy, nonatomic) CDUnknownBlockType block;

- (void)performAfterDelay:(double)arg1;
- (void)cancel;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 inRunLoop:(id)arg2;

@end
