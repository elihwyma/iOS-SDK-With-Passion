/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBacklightController, SLGLog;

@interface SBBacklightStudyLogger : NSObject

{
    SLGLog *_logger;
    SBBacklightController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;

@end
