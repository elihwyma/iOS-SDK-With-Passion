/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSString, SiriUIPlatterSectionHeaderView;

@interface SiriUIPlatterSectionHeaderCollectionViewCell : SiriUIContentCollectionViewCell

{
    SiriUIPlatterSectionHeaderView *_headerView;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
