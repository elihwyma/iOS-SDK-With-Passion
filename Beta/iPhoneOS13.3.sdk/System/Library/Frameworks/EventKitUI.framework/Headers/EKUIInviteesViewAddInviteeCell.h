/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UILabel;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell

{
    UILabel *_simpleTextLabel;
    NSArray *_persistentConstraints;
    NSString *_simpleText;
}

@property (retain, nonatomic) UILabel *simpleTextLabel;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (retain, nonatomic) NSString *simpleText;

+ (id)_simpleTextLabelFont;

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
