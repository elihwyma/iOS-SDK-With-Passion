/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSString, WFAction;

@interface WFTrelloListPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    WFAction *_action;
    id _observer;
}

@property (retain, nonatomic) id observer;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)updateLists;

@end
