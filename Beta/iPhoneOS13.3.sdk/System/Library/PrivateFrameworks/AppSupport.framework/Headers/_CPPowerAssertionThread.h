/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSThread.h>

@class NSDate, NSTimer;

@interface _CPPowerAssertionThread : NSThread

{
    NSTimer *_timer;
    NSDate *_earliest;
}

- (void)main;
- (void)didTimeOut:(id)arg1;
- (void)addAssertion:(id)arg1;

@end
