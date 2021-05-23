/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    WFEvernoteAccessResource *_evernoteAccessResource;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource;

+ (id)referencedActionResourceClasses;

- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (void)updateNotebooks;

@end
