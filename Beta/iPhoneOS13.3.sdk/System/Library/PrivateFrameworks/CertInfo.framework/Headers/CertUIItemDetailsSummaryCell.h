/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UITableViewCell.h>

@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell

{
    NSArray *_detailViews;
    double _detailLabelOriginX;
}

@property (retain, nonatomic) NSArray *detailViews;
@property (nonatomic) double detailLabelOriginX;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createViewWithDescriptors:(id)arg1;
- (void)createViewWithItemDetailArray:(id)arg1;

@end
