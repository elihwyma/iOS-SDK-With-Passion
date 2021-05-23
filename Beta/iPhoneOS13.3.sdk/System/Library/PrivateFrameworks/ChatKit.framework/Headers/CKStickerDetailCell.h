/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class CKAnimatedImageView, NSDate, NSString, SKUIItemOfferButton, UIDateLabel, UILabel;

__attribute__((visibility("hidden")))
@interface CKStickerDetailCell : UITableViewCell

{
    id _stickerPreview;
    NSString *_senderText;
    NSString *_stickerPackText;
    NSDate *_timestampDate;
    CKAnimatedImageView *_stickerView;
    UILabel *_senderLabel;
    UILabel *_stickerPackLabel;
    UIDateLabel *_timestampLabel;
    SKUIItemOfferButton *_viewButton;
}

@property (retain, nonatomic) CKAnimatedImageView *stickerView;
@property (retain, nonatomic) UILabel *senderLabel;
@property (retain, nonatomic) UILabel *stickerPackLabel;
@property (retain, nonatomic) UIDateLabel *timestampLabel;
@property (retain, nonatomic) SKUIItemOfferButton *viewButton;
@property (retain, nonatomic) id stickerPreview;
@property (retain, nonatomic) NSString *senderText;
@property (retain, nonatomic) NSString *stickerPackText;
@property (retain, nonatomic) NSDate *timestampDate;

+ (id)identifier;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
