/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@protocol SFSwitchTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFSwitchTableViewCell : UITableViewCell

{
    UISwitch *_switchView;
    id <SFSwitchTableViewCellDelegate> _delegate;
}

@property (weak, nonatomic) id <SFSwitchTableViewCellDelegate> delegate;
@property (nonatomic, getter=isSwitchOn) _Bool switchOn;

- (id)initWithReuseIdentifier:(id)arg1;
- (void)_switchViewStateDidChange:(id)arg1;

@end
