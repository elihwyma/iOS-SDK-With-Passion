/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUIconView, NSArray, UILabel, UILayoutGuide;

@protocol HFStringGenerator;

@interface HUQuickControlSummaryView : UIView

{
    HUIconView *_iconView;
    UILabel *_primaryStatusLabel;
    UILabel *_secondaryStatusLabel;
    id <HFStringGenerator> _primaryStatusText;
    id <HFStringGenerator> _secondaryStatusText;
    unsigned long long _contentAlignment;
    long long _sizeSubclass;
    unsigned long long _iconSize;
    NSArray *_contentConstraints;
    UILayoutGuide *_lastBaselineLayoutGuide;
}

@property (nonatomic) unsigned long long iconSize;
@property (retain, nonatomic) NSArray *contentConstraints;
@property (retain, nonatomic) UILayoutGuide *lastBaselineLayoutGuide;
@property (nonatomic, readonly) HUIconView *iconView;
@property (nonatomic, readonly) UILabel *primaryStatusLabel;
@property (nonatomic, readonly) UILabel *secondaryStatusLabel;
@property (copy, nonatomic) id <HFStringGenerator> primaryStatusText;
@property (copy, nonatomic) id <HFStringGenerator> secondaryStatusText;
@property (nonatomic) unsigned long long contentAlignment;
@property (nonatomic) long long sizeSubclass;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)lastBaselineAnchor;
- (id)_primaryFont;
- (double)_iconWidth;
- (double)_iconHeight;
- (id)_secondaryFont;
- (void)_updatePrimaryStatusContent;
- (void)_updateSecondaryStatusContent;
- (void)contentSizeCategoryDidChangeNotification;
- (void)_invalidateContentAndConstraints;
- (id)_statusParagraphStyleWithLineHeight:(double)arg1;
- (id)_primaryFontTextStyle;

@end
