/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

@class CLKDevice, CLKFont, NSString, UIColor, UILabel, UIView;

@protocol NTKComplicationDisplayObserver;

@interface NTKDateComplicationLabel : UIControl

{
    _Bool _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    struct CGSize _cachedSize;
    struct _NSRange _dayTextRange;
    _Bool _cachedSizeIsValid;
    UIColor *_textColor;
    UIColor *_computedTextColor;
    _Bool canUseCurvedText;
    _Bool _usesLegibility;
    _Bool _legibilityHidden;
    id <NTKComplicationDisplayObserver> displayObserver;
    long long _sizeStyle;
    long long _accentType;
    CLKDevice *_device;
    CLKFont *_font;
    UIColor *_accentColor;
    unsigned long long _overrideDateStyle;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (nonatomic, readonly) double _lastLineBaseline;
@property (nonatomic, setter=_setFirstLineBaselineFrameOriginY:) double _firstLineBaselineFrameOriginY;
@property (nonatomic, setter=_setLastLineBaselineFrameOriginY:) double _lastLineBaselineFrameOriginY;
@property (nonatomic, readonly) long long sizeStyle;
@property (nonatomic, readonly) long long accentType;
@property (nonatomic, readonly) CLKDevice *device;
@property (retain, nonatomic) CLKFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (nonatomic) _Bool usesLegibility;
@property (nonatomic) _Bool legibilityHidden;
@property (nonatomic) unsigned long long overrideDateStyle;
@property (nonatomic) struct UIEdgeInsets touchEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_cornerRadius;
- (void)_setFont:(id)arg1;
- (struct CGSize)_highlightInset;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (void)_setText:(id)arg1;
- (void)_updateTextColor;
- (id)initWithSizeStyle:(long long)arg1 accentType:(long long)arg2 forDevice:(id)arg3;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;
- (_Bool)shouldCancelTouchesInScrollview;
- (void)_computeTextColor;
- (double)_legibtilityShadowRadius;
- (void)_applyAccentColorAttributes;
- (id)_attributedStringAccentingNumbersInString:(id)arg1;
- (void)_invalidateInternalLabelSize;

@end
