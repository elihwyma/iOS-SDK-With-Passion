/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class NSLayoutConstraint, NSMutableArray, SiriUIKeyline, UIColor, UIImageView, UILabel, UIView;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell

{
    SiriUIKeyline *_keyline;
    UIImageView *_chevronView;
    _Bool _hasSetUpSubviewConstraints;
    _Bool _hasSetupStaticSubviewConstraints;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
    NSMutableArray *_subviewConstraints;
    _Bool _hasChevron;
    long long _verticalAlignment;
    UIView *_accessoryView;
    UILabel *_textLabel;
    UIView *_customView;
    long long _keylineType;
    struct UIOffset _textOffset;
    struct UIOffset _accessoryOffset;
    struct UIOffset _chevronOffset;
    struct UIEdgeInsets _textAndAccessoryInsets;
    struct UIEdgeInsets _customViewEdgeInsets;
}

@property (nonatomic) long long verticalAlignment;
@property (nonatomic) struct UIEdgeInsets textAndAccessoryInsets;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) struct UIEdgeInsets customViewEdgeInsets;
@property (nonatomic) struct UIOffset textOffset;
@property (nonatomic) struct UIOffset accessoryOffset;
@property (nonatomic) struct UIOffset chevronOffset;
@property (nonatomic, readonly) double chevronTrailingMargin;
@property (nonatomic, readonly) SiriUIKeyline *keyline;
@property (nonatomic) long long keylineType;
@property (retain, nonatomic) UIColor *keylineCustomBackgroundColor;
@property (nonatomic) _Bool hasChevron;

+ (id)reuseIdentifier;
+ (struct UIEdgeInsets)defaultInsets;
+ (_Bool)chevronBlendEffectEnabled;
+ (double)chevronTrailingMargin;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setNeedsUpdateSubviewConstraints;
- (void)_updateSubviewConstraints;

@end
