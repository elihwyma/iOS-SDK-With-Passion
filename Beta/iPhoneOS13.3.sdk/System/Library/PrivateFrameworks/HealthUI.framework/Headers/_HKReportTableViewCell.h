/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface _HKReportTableViewCell : UITableViewCell

{
    double _minimumHeight;
    UILabel *_reportLabel;
    UIImageView *_reportImageView;
}

@property (nonatomic, readonly) double minimumHeight;
@property (nonatomic, readonly) UILabel *reportLabel;
@property (nonatomic, readonly) UIImageView *reportImageView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithWidth:(double)arg1 minimumHeight:(double)arg2;
- (void)setReportName:(id)arg1 reportImage:(id)arg2;
- (void)_buildCellStructureWithWidth:(double)arg1;

@end
