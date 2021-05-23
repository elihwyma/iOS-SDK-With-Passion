/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKViewController.h>

@class UILabel, UIScrollView, UIView;

@interface HRAtrialFibrillationIntroViewController : HKViewController

{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_learnMoreContentView;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIView *learnMoreContentView;

- (void)viewDidLoad;
- (id)_titleFont;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (void)setUpUI;
- (double)_titleTopToFirstBaselineLeading;
- (id)_bodyFontTextStyle;
- (id)_createHeroView;
- (double)_assetImageBottomToTitleFirstBaseline;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_bodyLastBaselineToContentBottom;

@end
