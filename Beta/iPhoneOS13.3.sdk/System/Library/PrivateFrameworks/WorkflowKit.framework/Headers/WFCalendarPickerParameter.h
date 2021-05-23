/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFCalendarSubstitutableState;

@interface WFCalendarPickerParameter : WFEnumerationParameter

{
    _Bool _allowsAllCalendars;
    unsigned long long _entityType;
    id _defaultSerializedCalendarRepresentation;
    NSArray *_calendarStates;
    WFCalendarSubstitutableState *_allCalendarsState;
}

@property (retain, nonatomic) id defaultSerializedCalendarRepresentation;
@property (retain, nonatomic) NSArray *calendarStates;
@property (nonatomic, readonly) WFCalendarSubstitutableState *allCalendarsState;
@property (nonatomic, readonly) _Bool allowsAllCalendars;
@property (nonatomic, readonly) unsigned long long entityType;

- (id)initWithDefinition:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)accessoryColorForPossibleState:(id)arg1;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)reloadCalendars;

@end
