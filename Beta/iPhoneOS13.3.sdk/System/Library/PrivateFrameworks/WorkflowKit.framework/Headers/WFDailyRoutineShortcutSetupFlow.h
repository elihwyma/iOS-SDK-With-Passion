/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WFDailyRoutineShortcutSetupLocation, WFDailyRoutineShortcutSetupTriggerBuilder;

@interface WFDailyRoutineShortcutSetupFlow : NSObject

{
    NSString *_routineName;
    NSArray *_questions;
    WFDailyRoutineShortcutSetupTriggerBuilder *_trigger;
    WFDailyRoutineShortcutSetupLocation *_location;
}

@property (copy, nonatomic, readonly) NSString *routineName;
@property (copy, nonatomic, readonly) NSArray *questions;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupTriggerBuilder *trigger;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupLocation *location;

- (id)initWithRoutineName:(id)arg1 questions:(id)arg2 trigger:(id)arg3 location:(id)arg4;

@end
