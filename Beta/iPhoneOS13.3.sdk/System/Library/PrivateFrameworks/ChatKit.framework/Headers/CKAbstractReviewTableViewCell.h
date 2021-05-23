/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CKAbstractReviewTableViewCell : UITableViewCell

{
    unsigned long long _size;
    UILabel *_nameLabel;
    UILabel *_lastModifiedLabel;
    UILabel *_sizeLabel;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *lastModifiedLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) NSString *mainText;
@property (retain, nonatomic) NSString *subheadingText;
@property (nonatomic) unsigned long long size;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
