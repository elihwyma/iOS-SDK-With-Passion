/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSDate, NSDateFormatter, NTKColoringLabel, UIColor, UIFont;

@interface NTKBigNumeralsTimeComponentLabel : UIView

{
    CLKDevice *_device;
    _Bool _useLigatures;
    UIFont *_filledFont;
    UIFont *_outlinedFont;
    NTKColoringLabel *_label;
    NTKColoringLabel *_transitioningLabel;
    NSDateFormatter *_formatter;
    unsigned long long _timeComponent;
    unsigned long long _fontVariant;
    NSDate *_date;
    unsigned long long _typeface;
    unsigned long long _style;
    UIColor *_color;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long typeface;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *color;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_lastLineBaseline;
- (void)_updateLabelText;
- (id)_fontForStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)cleanupTransition;
- (id)initWithDevice:(id)arg1 timeComponent:(unsigned long long)arg2 fontVariant:(unsigned long long)arg3 fontSize:(double)arg4 useLigatures:(_Bool)arg5;
- (void)_updateLocale;
- (void)setupFontsForVariant:(unsigned long long)arg1 fontSize:(double)arg2;
- (id)_attributedStringForTypeface:(unsigned long long)arg1;

@end
