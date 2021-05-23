/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface HUUserManagementUserCell : UITableViewCell

{
    NSString *_displayName;
    NSString *_invitationStatusString;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *invitationStatusString;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
