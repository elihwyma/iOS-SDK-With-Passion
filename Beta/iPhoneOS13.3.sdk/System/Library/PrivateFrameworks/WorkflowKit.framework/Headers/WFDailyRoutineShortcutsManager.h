/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFDailyRoutineShortcutsManager : NSObject

+ (void)getDailyRoutineShortcutsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)processActionResponseBlockWithCompletion:(CDUnknownBlockType)arg1;
+ (id)goingToWorkShortcut;
+ (id)headingHomeShortcut;
+ (id)atTheGymShortcut;

@end
