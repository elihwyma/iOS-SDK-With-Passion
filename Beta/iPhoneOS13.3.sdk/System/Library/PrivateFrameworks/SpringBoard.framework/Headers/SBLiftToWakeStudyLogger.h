/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBLiftToWakeController, SLGLog;

@interface SBLiftToWakeStudyLogger : NSObject

{
    SLGLog *_logger;
    SBLiftToWakeController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;

@end
