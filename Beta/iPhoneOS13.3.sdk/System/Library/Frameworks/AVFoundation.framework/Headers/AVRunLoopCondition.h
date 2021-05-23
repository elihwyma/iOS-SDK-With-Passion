/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition

{
    NSMutableArray *_runLoopStateList;
}

- (id)init;
- (void)dealloc;
- (void)wait;
- (_Bool)waitUntilDate:(id)arg1;
- (void)signal;
- (void)broadcast;
- (void)waitInMode:(id)arg1;
- (_Bool)waitUntilDate:(id)arg1 inMode:(id)arg2;
- (_Bool)_waitInMode:(id)arg1 untilDate:(id)arg2;
- (void)_signalRunLoopWithState:(id)arg1;

@end
