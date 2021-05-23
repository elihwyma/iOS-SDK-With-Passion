/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class HFTriggerActionsSetsUISummary, NSArray, NSData, NSString, WFWorkflow;

@interface WFHomeWorkflow : NSObject

{
    NSData *_data;
    WFWorkflow *_workflow;
    HFTriggerActionsSetsUISummary *_actionSetsSummary;
}

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) HFTriggerActionsSetsUISummary *actionSetsSummary;
@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic, readonly) NSString *summaryString;
@property (copy, nonatomic, readonly) NSArray *summaryIconNames;
@property (copy, nonatomic, readonly) NSArray *summaryIconDescriptors;
@property (nonatomic, readonly) _Bool requiresDeviceUnlock;

- (id)debugDescription;
- (id)initWithData:(id)arg1;
- (id)triggerActionSetsBuilders;
- (id)actionSetsFromTriggerActionSetsBuilders:(id)arg1;

@end
