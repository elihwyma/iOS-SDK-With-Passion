/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class UIDateLabel, UILabel;

@interface CKBlackholeTranscriptCell : UITableViewCell

{
    UILabel *_fromLabel;
    UIDateLabel *_dateLabel;
    UILabel *_bodyLabel;
}

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;
@property (retain, nonatomic) UILabel *bodyLabel;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureForMessageItem:(id)arg1 showSender:(_Bool)arg2;

@end
