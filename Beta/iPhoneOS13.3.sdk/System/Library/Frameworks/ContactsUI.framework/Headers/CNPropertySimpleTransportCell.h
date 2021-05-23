/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNTransportButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleTransportCell : CNPropertySimpleCell

{
    CNTransportButton *_transportIcon1;
    CNTransportButton *_transportIcon2;
    CNTransportButton *_transportIcon3;
    UIImageView *_starView;
    _Bool _allowsActions;
    _Bool _shouldShowBadge;
    _Bool _shouldShowTransportButtons;
    _Bool _needsUpdateTouchAreas;
    UIImageView *_standardStarView;
    UIColor *_actionsColor;
    UIView *_badgeView;
}

@property (retain, nonatomic) UIView *badgeView;
@property (nonatomic) _Bool needsUpdateTouchAreas;
@property (nonatomic) _Bool allowsActions;
@property (nonatomic, readonly) _Bool shouldShowStar;
@property (nonatomic) _Bool shouldShowBadge;
@property (nonatomic) _Bool shouldShowTransportButtons;
@property (nonatomic, readonly) CNTransportButton *transportIcon1;
@property (nonatomic, readonly) CNTransportButton *transportIcon2;
@property (nonatomic, readonly) CNTransportButton *transportIcon3;
@property (nonatomic, readonly) CNTransportButton *standardTransportIcon;
@property (nonatomic, readonly) UIImageView *standardStarView;
@property (nonatomic, readonly) UIView *standardBadgeView;
@property (retain, nonatomic) UIColor *actionsColor;

+ (id)standardStarView;
+ (void)_updateStarImageForView:(id)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)variableConstraints;
- (_Bool)shouldPerformDefaultAction;
- (id)rightMostView;
- (void)setCardGroupItem:(id)arg1;
- (void)updateTransportButtons;
- (void)updateWithPropertyItem:(id)arg1;
- (void)updateLabelNeedingHuggingContent;
- (void)updateStarIcon;
- (void)transportButtonClicked:(id)arg1;

@end
