/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    id _observer;
}

@property (retain, nonatomic) id observer;
@property (nonatomic, readonly) NSArray *possibleStates;

- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)updateBoards;

@end
