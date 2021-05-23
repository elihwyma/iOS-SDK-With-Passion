/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class MTUIAlarmView;

@interface WFAlarmTableViewCell : UITableViewCell

{
    _Bool _enabled;
    MTUIAlarmView *_alarmView;
}

@property (nonatomic, readonly) MTUIAlarmView *alarmView;
@property (nonatomic) _Bool enabled;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshUI:(id)arg1 animated:(_Bool)arg2;

@end
