/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, UILabel;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView

{
    NSString *_titleText;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (retain, nonatomic) NSString *titleText;

+ (id)_titleFont;
+ (_Bool)requiresConstraintBasedLayout;
+ (double)estimatedHeight;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)drawRect:(struct CGRect)arg1;

@end
