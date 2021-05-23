/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class INIntentSlotDescription, NSArray;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    INIntentSlotDescription *_slotDescription;
}

@property (nonatomic, readonly) INIntentSlotDescription *slotDescription;

- (id)initWithDefinition:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (_Bool)alwaysShowsButton;

@end
