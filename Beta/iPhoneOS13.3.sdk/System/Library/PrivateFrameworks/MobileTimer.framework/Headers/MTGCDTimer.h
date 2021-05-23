/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTPowerAssertion;

@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}

- (void)dealloc;
- (void)cancelTimer;
- (void)startTimer:(double)arg1 block:(CDUnknownBlockType)arg2;

@end
