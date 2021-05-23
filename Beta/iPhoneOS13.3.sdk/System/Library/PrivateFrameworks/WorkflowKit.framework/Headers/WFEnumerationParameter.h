/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFEnumerationParameter : WFParameter

{
    _Bool _alwaysShowsButton;
    NSArray *_staticPossibleStates;
    NSArray *_displayNames;
}

@property (nonatomic, readonly) NSArray *staticPossibleStates;
@property (nonatomic, readonly) NSArray *displayNames;
@property (nonatomic, readonly) _Bool preferItemPickerSheet;
@property (nonatomic, readonly) NSArray *possibleStatesForLocalization;
@property (nonatomic, readonly) _Bool alwaysShowsButton;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) _Bool hidesAccessoryIconInEditor;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedTitleForButtonWithState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2;
- (id)localizedLabelForMultipleState:(id)arg1;
- (id)localizedLabelForMultipleCompleteState:(id)arg1;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (void)possibleStatesDidChange;
- (void)startUpdatingPossibleValues;
- (void)stopUpdatingPossibleValues;

@end
