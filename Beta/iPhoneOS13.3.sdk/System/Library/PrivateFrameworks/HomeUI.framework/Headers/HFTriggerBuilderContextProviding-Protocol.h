/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSSet, NSString;

@protocol HFTriggerBuilderContextProviding <Swift>

@property (nonatomic, readonly) _Bool showTriggerSummary;
@property (nonatomic, readonly) _Bool showTriggerEnableSwitch;
@property (nonatomic, readonly) _Bool showActionSetsInstructions;
@property (nonatomic, readonly) _Bool showConditionTriggers;
@property (nonatomic, readonly) _Bool allowDurationEditing;
@property (nonatomic, readonly) _Bool filtersEmptyActionSets;
@property (copy, nonatomic, readonly) NSString *testActionsInstructionDescription;
@property (copy, nonatomic, readonly) NSString *serviceActionsInstructionDescription;
@property (copy, nonatomic, readonly) NSString *actionEditorInstructionsDescription;
@property (copy, nonatomic, readonly) NSString *triggerContextAwareTitle;
@property (copy, nonatomic, readonly) NSString *deleteInstructionDescription;
@property (copy, nonatomic, readonly) NSString *deleteConfirmationAlertTitle;
@property (copy, nonatomic, readonly) NSString *deleteConfirmationAlertMessage;
@property (copy, nonatomic, readonly) NSSet *unsupportedTriggers;

@end
