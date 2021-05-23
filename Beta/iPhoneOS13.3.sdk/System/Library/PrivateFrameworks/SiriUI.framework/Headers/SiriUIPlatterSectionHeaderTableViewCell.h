/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UITableViewCell.h>

@class NSString, SiriUIPlatterSectionHeaderView;

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell

{
    SiriUIPlatterSectionHeaderView *_headerView;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;

+ (id)_font;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
