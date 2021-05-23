/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class NSDate, NSString, UIDateLabel, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKStarkConversationListCell : UITableViewCell

{
    UIImage *_monogramImage;
    UIImageView *_chevronImageView;
    UIImageView *_unreadImageView;
    UILabel *_recipientsLabel;
    UIDateLabel *_dateLabel;
}

@property (retain, nonatomic) UIImageView *unreadImageView;
@property (retain, nonatomic) UILabel *recipientsLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;
@property (nonatomic) _Bool hasUnreadMessages;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *recipientNames;
@property (nonatomic) UIImage *monogramImage;
@property (retain, nonatomic) UIImageView *chevronImageView;

+ (double)starkCellMarginWidth;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateUserInterfaceStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
