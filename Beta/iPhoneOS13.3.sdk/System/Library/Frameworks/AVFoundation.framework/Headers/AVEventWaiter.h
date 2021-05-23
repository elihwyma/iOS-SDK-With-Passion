/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSCondition;

__attribute__((visibility("hidden")))
@interface AVEventWaiter : NSObject

{
    NSCondition *_condition;
    _Bool _eventCompleted;
}

- (id)init;
- (void)dealloc;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;

@end
