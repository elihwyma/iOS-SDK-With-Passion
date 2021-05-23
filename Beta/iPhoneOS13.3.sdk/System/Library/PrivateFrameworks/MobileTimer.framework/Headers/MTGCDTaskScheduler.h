/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTGCDTaskScheduler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scheduleTask:(id)arg1;
- (void)scheduleTaskGroup:(id)arg1;
- (void)_scheduleTask:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
