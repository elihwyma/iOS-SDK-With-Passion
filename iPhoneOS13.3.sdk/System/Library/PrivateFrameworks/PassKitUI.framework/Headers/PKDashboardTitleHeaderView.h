//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIButton, UILabel;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell
{
    UILabel *_titleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
    BOOL _isCompactUI;
    BOOL _useCompactTopInset;
    NSString *_actionTitle;
    id /* CDUnknownBlockType */ _action;
}

+ (double)defaultHorizontalInset;
+ (id)defaultBackgroundColor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) BOOL useCompactTopInset; // @synthesize useCompactTopInset=_useCompactTopInset;
// - (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)_layoutWithBounds:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)resetFonts;
- (void)createSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

