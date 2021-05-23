/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSString, WFAction;

@interface WFSlackChannelPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    WFAction *_action;
}

@property (nonatomic, readonly) NSString *accountParameterKey;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isHidden;
- (id)account;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)updateSlackChannels;
- (id)identifierForChannelWithName:(id)arg1;

@end
