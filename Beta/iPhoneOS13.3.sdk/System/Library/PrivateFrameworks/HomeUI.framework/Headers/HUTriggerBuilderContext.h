/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface HUTriggerBuilderContext : NSObject

{
    _Bool _showTriggerSummary;
    _Bool _showTriggerEnableSwitch;
    _Bool _showActionSetsInstructions;
    _Bool _showConditionTriggers;
    _Bool _allowDurationEditing;
    _Bool _filtersEmptyActionSets;
    NSString *_testActionsInstructionDescription;
    NSString *_serviceActionsInstructionDescription;
    NSString *_deleteInstructionDescription;
    NSString *_actionEditorInstructionsDescription;
    NSString *_triggerContextAwareTitle;
    NSSet *_unsupportedTriggers;
    NSString *_deleteConfirmationAlertTitle;
    NSString *_deleteConfirmationAlertMessage;
}

@property (nonatomic) _Bool showTriggerSummary;
@property (nonatomic) _Bool showTriggerEnableSwitch;
@property (nonatomic) _Bool showActionSetsInstructions;
@property (nonatomic) _Bool showConditionTriggers;
@property (nonatomic) _Bool allowDurationEditing;
@property (nonatomic) _Bool filtersEmptyActionSets;
@property (copy, nonatomic) NSString *testActionsInstructionDescription;
@property (copy, nonatomic) NSString *serviceActionsInstructionDescription;
@property (copy, nonatomic) NSString *deleteInstructionDescription;
@property (copy, nonatomic) NSString *actionEditorInstructionsDescription;
@property (copy, nonatomic) NSString *triggerContextAwareTitle;
@property (copy, nonatomic) NSSet *unsupportedTriggers;
@property (copy, nonatomic) NSString *deleteConfirmationAlertTitle;
@property (copy, nonatomic) NSString *deleteConfirmationAlertMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithTriggerBuilderContext:(id)arg1;

@end
