/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTImmediateTaskScheduler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scheduleTask:(CDUnknownBlockType)arg1;
- (void)cancelAllTasks;
- (void)cancelTask:(CDUnknownBlockType)arg1;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;

@end
