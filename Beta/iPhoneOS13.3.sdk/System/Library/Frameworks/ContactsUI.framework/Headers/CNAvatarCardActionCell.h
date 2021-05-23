/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class CNAvatarCardHighlightView, CNQuickAction, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIPageControl, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionCell : UITableViewCell

{
    struct CGPoint _initialLocation;
    struct CGPoint _lastLocation;
    _Bool _swipped;
    _Bool _moreHighlighted;
    _Bool _gestureActivated;
    _Bool _transitioning;
    CNQuickAction *_action;
    long long _context;
    UIImageView *_actionImageView;
    CNAvatarCardHighlightView *_defaultHighlightView;
    CNAvatarCardHighlightView *_moreHighlightView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIPageControl *_pageControl;
    UILabel *_moreLabel;
    UIView *_translatingView;
    UIView *_separatorView;
    UIButton *_expandButton;
    NSLayoutConstraint *_punchOutLeftConstraint;
    NSLayoutConstraint *_translatingViewLeadingConstraint;
    NSLayoutConstraint *_pageControlLeadingConstraint;
    NSLayoutConstraint *_expandButtonWidthConstraint;
    NSLayoutConstraint *_moreHighlightViewHiddingConstraint;
    double _initialTranslatingViewLeadingConstraintConstant;
    unsigned long long _lastScrollDirection;
    double _lastScrollDirectionTimestamp;
}

@property (retain, nonatomic) UIImageView *actionImageView;
@property (retain, nonatomic) CNAvatarCardHighlightView *defaultHighlightView;
@property (retain, nonatomic) CNAvatarCardHighlightView *moreHighlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIView *translatingView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) NSLayoutConstraint *punchOutLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *translatingViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pageControlLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *expandButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *moreHighlightViewHiddingConstraint;
@property (nonatomic) double initialTranslatingViewLeadingConstraintConstant;
@property (nonatomic) unsigned long long lastScrollDirection;
@property (nonatomic) double lastScrollDirectionTimestamp;
@property (nonatomic) _Bool gestureActivated;
@property (nonatomic) _Bool transitioning;
@property (nonatomic) _Bool swipped;
@property (nonatomic) _Bool moreHighlighted;
@property (retain, nonatomic) CNQuickAction *action;
@property (nonatomic) long long context;

+ (id)cellNibForActions;
+ (id)cellNibForContacts;

- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)reloadData;
- (void)awakeFromNib;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateFonts;
- (void)_updateHighlightAnimated:(_Bool)arg1;
- (void)startTrackingWithGestureRecognizer:(id)arg1;
- (void)stopTrackingWithGestureRecognizer:(id)arg1;
- (void)trackHighlight:(id)arg1;

@end
