/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class WFConfiguredTriggerRecord, WFTrigger;

@interface WFTriggerSummaryCell : UITableViewCell

{
    WFConfiguredTriggerRecord *_triggerRecord;
    WFTrigger *_trigger;
}

@property (retain, nonatomic) WFConfiguredTriggerRecord *triggerRecord;
@property (retain, nonatomic) WFTrigger *trigger;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUI;

@end
