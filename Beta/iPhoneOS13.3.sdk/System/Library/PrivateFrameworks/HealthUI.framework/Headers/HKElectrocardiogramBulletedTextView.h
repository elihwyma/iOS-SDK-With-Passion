/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel;

@interface HKElectrocardiogramBulletedTextView : UIView

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSMutableArray *_bodyFirstBaselineConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic, readonly) NSString *detailText;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)_setupConstraints;
- (void)_setUpUI;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)setDetailTextWithBullets:(id)arg1;

@end
