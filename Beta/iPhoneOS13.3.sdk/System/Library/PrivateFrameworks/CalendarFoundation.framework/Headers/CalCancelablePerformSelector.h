/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject

{
    CDUnknownBlockType _block;
    NSRunLoop *_runloop;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSRunLoop *runloop;

- (void)performAfterDelay:(double)arg1;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1;

@end
