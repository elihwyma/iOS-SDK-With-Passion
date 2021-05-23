/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@class HFTriggerActionSetsBuilder, NSString;

@interface WFHomeAccessoryAction : WFAction

@property (nonatomic, readonly) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;
+ (id)homeAccessoryActionWithHome:(id)arg1;

- (void)dealloc;
- (id)localizedName;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeName;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;

@end
