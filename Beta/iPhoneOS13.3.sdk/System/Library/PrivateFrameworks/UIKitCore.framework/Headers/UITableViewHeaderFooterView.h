/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UILabel, UITableView, _UITableViewHeaderFooterViewLabel;

@protocol UITable, UITableConstants;

@interface UITableViewHeaderFooterView : UIView

{
    long long _tableViewStyle;
    UIImage *_backgroundImage;
    struct CGRect _frame;
    long long _textAlignment;
    double _maxTitleWidth;
    NSString *_reuseIdentifier;
    UIView *_backgroundView;
    _UITableViewHeaderFooterViewLabel *_label;
    _UITableViewHeaderFooterViewLabel *_detailLabel;
    UIView *_contentView;
    double _leadingMarginWidth;
    double _trailingMarginWidth;
    id <UITableConstants> _constants;
    struct {
        unsigned int isHeader:1;
        unsigned int labelBackgroundColorNeedsUpdate:1;
        unsigned int detailLabelBackgroundColorNeedsUpdate:1;
        unsigned int floating:1;
        unsigned int stripPadding:1;
        unsigned int isTopHeader:1;
        unsigned int didSetSectionHeader:1;
        unsigned int didSetupDefaults:1;
        unsigned int insetsContentViewsToSafeArea:1;
        unsigned int tableViewHasBeenExplicitlySet:1;
    } _headerFooterFlags;
    id <UITable> _table;
}

@property (nonatomic, readonly, getter=_effectiveSafeAreaInsets) struct UIEdgeInsets effectiveSafeAreaInsets;
@property (weak, nonatomic) id <UITable> table;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (nonatomic, getter=_marginWidth, setter=_setMarginWidth:) double marginWidth;
@property (nonatomic, getter=_rightMarginWidth, setter=_setRightMarginWidth:) double rightMarginWidth;
@property (nonatomic, getter=_insetsContentViewsToSafeArea, setter=_setInsetsContentViewsToSafeArea:) _Bool insetsContentViewsToSafeArea;
@property (nonatomic, getter=_stripPadding, setter=_setStripPadding:) _Bool stripPadding;
@property (nonatomic, getter=_isTopHeader, setter=_setTopHeader:) _Bool topHeader;
@property (retain, nonatomic, getter=_constants, setter=_setConstants:) id <UITableConstants> constants;
@property (nonatomic) _Bool floating;
@property (nonatomic) long long tableViewStyle;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) _Bool sectionHeader;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(_Bool)arg2;
+ (id)_defaultPlainHeaderFooterFont;
+ (id)_defaultFontForHeaderFooterView:(id)arg1;
+ (id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(_Bool)arg2;
+ (double)defaultHeaderHeightForStyle:(long long)arg1;
+ (double)defaultFooterHeightForStyle:(long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_table;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)layoutMarginsDidChange;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)didMoveToSuperview;
- (_Bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (struct CGRect)_labelFrame;
- (void)_updateBackgroundView;
- (void)_updateBackgroundImage;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_setTableViewStyle:(long long)arg1 updateFrame:(_Bool)arg2;
- (void)_setupLabelAppearance;
- (struct CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1;
- (_Bool)_isTransparentFocusRegion;
- (_Bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (struct CGRect)_contentRect;
- (void)_setupBackgroundView;
- (_Bool)_isFloating;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (void)_tableViewDidUpdateMarginWidth;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_updateContentAndBackgroundView;
- (void)_setupDefaultsIfNecessary;
- (void)_setupLabelForSourceList:(id)arg1;
- (id)_defaultTextColor;
- (_Bool)_useDetailText;
- (void)_updateDetailLabelBackgroundColor;
- (id)_label:(_Bool)arg1;
- (struct UIEdgeInsets)_insetsToContentRect;
- (struct CGSize)_textSizeForWidth:(double)arg1;
- (struct CGSize)_detailTextSizeForWidth:(double)arg1;
- (struct UIEdgeInsets)_insetsToBounds;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 stripPaddingForAbuttingView:(_Bool)arg2 isTopHeader:(_Bool)arg3;
- (struct CGRect)_backgroundRect;
- (struct CGRect)_backgroundRectForWidth:(double)arg1;
- (struct CGRect)_contentRectForWidth:(double)arg1;
- (struct CGRect)_detailLabelFrame;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (void)_invalidateLabelBackgroundColor;

@end
