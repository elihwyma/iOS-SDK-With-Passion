/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class UIDateLabel, UILabel;

@interface CKBlackholeConversationListCell : UITableViewCell

{
    UILabel *_fromLabel;
    UIDateLabel *_dateLabel;
}

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureForConversation:(id)arg1;

@end
