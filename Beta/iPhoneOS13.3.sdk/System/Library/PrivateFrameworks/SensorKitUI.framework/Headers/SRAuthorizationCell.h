/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UISwitch;

@protocol SRAuthorizationCellDelegate;

@interface SRAuthorizationCell : UITableViewCell

{
    UISwitch *_toggle;
    NSIndexPath *_indexPath;
    id <SRAuthorizationCellDelegate> _delegate;
}

@property (retain, nonatomic) UISwitch *toggle;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id <SRAuthorizationCellDelegate> delegate;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)switchChanged;

@end
