/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UIDefaultKeyboardInput.h>

@class CNModernAtomBackgroundView, CNModernAtomIconView, NSString, UIActivityIndicatorView, UIColor, UIFont, UILabel, UIView;

@interface CNAtomView : UIDefaultKeyboardInput

{
    CNModernAtomIconView *_badgeIconView;
    CNModernAtomIconView *_accessoryIconView;
    UIColor *_effectiveTintColor;
    unsigned long long _disabledPresentationOptions;
    UIView *_baselineView;
    CNModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _scalingFactor;
    _Bool _wrappingSupported;
    _Bool _cachedIsWrappingEnabled;
    _Bool _isPrimaryAddressAtom;
    _Bool _separatorHidden;
    _Bool _separatorIsLeftAligned;
    _Bool _selected;
    NSString *_title;
    UIFont *_titleFont;
    unsigned long long _presentationOptions;
    double _firstLineIndent;
}

@property (nonatomic, readonly) CNModernAtomBackgroundView *backgroundView;
@property (nonatomic, readonly) CNModernAtomIconView *badgeIconView;
@property (nonatomic, readonly) CNModernAtomIconView *accessoryIconView;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) unsigned long long effectivePresentationOptions;
@property (nonatomic, readonly) UIColor *effectiveTintColor;
@property (nonatomic, readonly) struct CGRect selectionFrame;
@property (nonatomic) double firstLineIndent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool isPrimaryAddressAtom;
@property (nonatomic) _Bool hidesVIPIndicator;
@property (nonatomic) _Bool separatorHidden;
@property (nonatomic) _Bool separatorIsLeftAligned;
@property (nonatomic) double scale;
@property (nonatomic) int separatorStyle;
@property (nonatomic) unsigned long long presentationOptions;
@property (nonatomic, readonly) struct CGPoint baselinePoint;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (retain, nonatomic) UIFont *titleFont;

+ (id)defaultFont;
+ (double)defaultHeight;
+ (id)_defaultTintColor;
+ (double)horizontalPadding;
+ (_Bool)presentationOptions:(unsigned long long *)arg1 encodedIntoAddress:(id)arg2;
+ (id)_defaultLabelAttributesWithWrappingEnabled:(_Bool)arg1;
+ (id)primaryAtomFont;
+ (id)_defaultLabelAttributesWithFont:(id)arg1 wrappingEnabled:(_Bool)arg2;
+ (id)_failureTintColor;
+ (id)_SMSTintColor;
+ (id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long *)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(_Bool)arg5 variant:(int)arg6;
+ (struct CGPoint)defaultBaselinePoint;
+ (id)_downtimeBlockedTintColor;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)viewForLastBaselineLayout;
- (void)_updateLabelAttributes;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)preferredWidth;
- (double)_leftInset;
- (double)_rightInset;
- (double)_leftPadding;
- (double)_rightPadding;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 style:(unsigned long long)arg3;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3 wrappingSupported:(_Bool)arg4;
- (double)preferredWidthWithSizeConstraints:(struct CGSize)arg1;
- (_Bool)isWrappingEnabled;
- (void)_updateIconViewsSemanticContentAttribute;
- (void)_updateSubviewsForWrapping;
- (void)_invalidatePresentationOptions;
- (int)_preferredIconVariant;
- (void)_setEffectiveTintColor:(id)arg1;
- (id)_chevronTextAttachment;
- (id)_centeredTextAttachmentWithImage:(id)arg1;
- (void)_updateActivityIndicator;
- (void)_updateCompositingFilters;
- (void)_setPresentationOption:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)_updateFontIfNecessary;
- (void)appendPresentationOption:(unsigned long long)arg1;
- (void)clearPresentationOption:(unsigned long long)arg1;

@end
