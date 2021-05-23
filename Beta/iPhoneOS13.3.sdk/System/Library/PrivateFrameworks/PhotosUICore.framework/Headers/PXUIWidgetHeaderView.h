/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIColor, UIFont, UILabel, UIVisualEffectView;

@protocol PXUIWidgetHeaderViewDelegate;

@interface PXUIWidgetHeaderView : UIView

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool hasContent;
        _Bool title;
        _Bool subtitle;
        _Bool caption;
    } _needsUpdateFlags;
    struct {
        _Bool didSelectSubtitle;
        _Bool didSelectCaption;
    } _delegateRespondsTo;
    _Bool _allowUserInteractionWithSubtitle;
    _Bool _allowUserInteractionWithCaption;
    _Bool __hasContent;
    id <PXUIWidgetHeaderViewDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_caption;
    UIColor *_textColor;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
    long long _layoutStyle;
    double _minimumDistanceBetweenTopAndFirstBaseline;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double _horizontalSpacingBetweenTitleAndSubtitle;
    double _minimumDistanceBetweenLastBaselineAndBottom;
    NSArray *__constraints;
    double __currentHeight;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    UIButton *__subtitleButton;
    UILabel *__captionLabel;
    UIButton *__captionButton;
    UIVisualEffectView *__visualEffectView;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, setter=_setHasContent:) _Bool _hasContent;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic, setter=_setCurrentHeight:) double _currentHeight;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (nonatomic, readonly) UIButton *_subtitleButton;
@property (nonatomic, readonly) UILabel *_captionLabel;
@property (nonatomic, readonly) UIButton *_captionButton;
@property (nonatomic, readonly) UIVisualEffectView *_visualEffectView;
@property (weak, nonatomic) id <PXUIWidgetHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (nonatomic) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic) _Bool allowUserInteractionWithCaption;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstBaseline;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;
@property (nonatomic) double minimumDistanceBetweenLastBaselineAndBottom;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_updateTitleIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_hasSubtitle;
- (void)_updateIfNeeded;
- (_Bool)_hasAccessibilityLargeText;
- (void)_invalidateHasContent;
- (void)_updateHasContentIfNeeded;
- (void)_invalidateTitle;
- (void)_invalidateSubtitle;
- (id)_visualEffectViewCreateIfNeeded:(_Bool)arg1;
- (id)_titleLabelCreateIfNeeded:(_Bool)arg1;
- (id)_subtitleLabelCreateIfNeeded:(_Bool)arg1;
- (id)_subtitleButtonCreateIfNeeded:(_Bool)arg1;
- (id)_captionLabelCreateIfNeeded:(_Bool)arg1;
- (id)_captionButtonCreateIfNeeded:(_Bool)arg1;
- (_Bool)_canComposeTitleWithSubtitle;
- (void)_handleSubtitleButton:(id)arg1;
- (void)_handleCaptionButton:(id)arg1;
- (void)_updateSubtitleIfNeeded;
- (void)_invalidateCaption;
- (void)_updateCaptionIfNeeded;

@end
