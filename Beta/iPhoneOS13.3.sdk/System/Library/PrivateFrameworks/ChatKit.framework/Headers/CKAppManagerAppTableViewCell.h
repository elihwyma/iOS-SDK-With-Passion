/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@protocol CKAppManagerAppTableViewCellDelegate;

@interface CKAppManagerAppTableViewCell : UITableViewCell

{
    id <CKAppManagerAppTableViewCellDelegate> _delegate;
    UISwitch *_appToggle;
}

@property (weak, nonatomic) id <CKAppManagerAppTableViewCellDelegate> delegate;
@property (retain, nonatomic) UISwitch *appToggle;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setToggleVisible:(_Bool)arg1 editable:(_Bool)arg2 isOn:(_Bool)arg3;
- (void)appToggleTapped:(id)arg1;
- (void)updateCellWithPluginInfo:(id)arg1;

@end
