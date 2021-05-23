/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFAddNewEventAction : WFAction

+ (double)relativeOffsetFromTimeString:(id)arg1;

- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (void)initializeParameters;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)updateCalendars;
- (id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2;
- (void)updateForcesAllDayFlags;

@end
