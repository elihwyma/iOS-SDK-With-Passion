/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, SFResultSection, TLKLabel, TLKStackView, TLKTextButton, UIView;

@protocol SFFeedbackListener, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView

{
    _Bool _shouldUseInsetRoundedSections;
    _Bool _shouldUseStandardSectionInsets;
    _Bool _useShorterHeaders;
    _Bool _usesInsetRoundedSections;
    _Bool _isExpanded;
    id <SearchUITableHeaderViewDelegate> _delegate;
    id <SFFeedbackListener> _feedbackListener;
    unsigned long long _headerType;
    SFResultSection *_section;
    TLKLabel *_titleLabel;
    UIView *_bannerView;
    TLKTextButton *_headerOptionButton;
    TLKStackView *_stackView;
}

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) UIView *bannerView;
@property (retain, nonatomic) TLKTextButton *headerOptionButton;
@property (retain, nonatomic) SFResultSection *section;
@property (retain, nonatomic) TLKStackView *stackView;
@property (nonatomic) unsigned long long headerType;
@property (nonatomic) _Bool usesInsetRoundedSections;
@property (nonatomic) _Bool isExpanded;
@property (weak, nonatomic) id <SearchUITableHeaderViewDelegate> delegate;
@property (weak, nonatomic) id <SFFeedbackListener> feedbackListener;
@property (readonly) NSString *title;
@property (nonatomic) _Bool shouldUseInsetRoundedSections;
@property (nonatomic) _Bool shouldUseStandardSectionInsets;
@property (nonatomic) _Bool useShorterHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setFloating:(_Bool)arg1;
- (id)moreResultsPunchout;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)moreButtonPressed;
- (void)headerOptionButtonPressed;
- (void)updateWithSection:(id)arg1 isExpanded:(_Bool)arg2 usesInsetRoundedSection:(_Bool)arg3;
- (void)updateSectionTitle;
- (void)updateAlignmentRectInsets;
- (void)updateHeaderButtonVisibility;
- (_Bool)supportsShowMoreInApp;

@end
