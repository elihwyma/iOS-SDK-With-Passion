/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    Class _accountClass;
    id _observer;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) id observer;
@property (nonatomic, readonly) Class accountClass;

- (void)dealloc;
- (_Bool)isHidden;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (id)accountWithName:(id)arg1;

@end
