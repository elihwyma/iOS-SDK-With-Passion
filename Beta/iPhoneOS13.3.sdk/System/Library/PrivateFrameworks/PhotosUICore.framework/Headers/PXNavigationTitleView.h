/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIFont, UILabel;

@interface PXNavigationTitleView : UIView

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool texts;
        _Bool fonts;
        _Bool constraints;
        _Bool size;
    } _needsUpdateFlags;
    _Bool __subtitleVisible;
    long long _verticalSizeClass;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    long long _textAlignment;
    double _subviewsAlpha;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    NSArray *__constraints;
    struct UIEdgeInsets _margins;
}

@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (nonatomic, getter=_isSubtitleVisible, setter=_setSubtitleVisible:) _Bool _subtitleVisible;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic) long long verticalSizeClass;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (nonatomic) long long textAlignment;
@property (nonatomic, setter=setMargins:) struct UIEdgeInsets margins;
@property (nonatomic) double subviewsAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateConstraints;
- (void)_invalidateTexts;
- (void)_updateTextsIfNeeded;
- (void)_invalidateFonts;
- (void)_updateFontsIfNeeded;
- (void)_updateConstraintsIfNeeded;
- (void)_invalidateSize;
- (void)_updateSizeIfNeeded;

@end
