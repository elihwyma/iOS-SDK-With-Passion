/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKFont, NSMutableArray, NSMutableDictionary, NSString, UIColor, UILabel;

@interface NTKTimeIntervalLabel : UIView

{
    CLKDevice *_device;
    double _time;
    double _currentTextTime;
    _Bool _showSubSeconds;
    long long _style;
    UILabel *_label;
    UILabel *_suffix;
    UILabel *_prefix;
    NSString *_text;
    NSMutableArray *_digits;
    NSMutableDictionary *_images;
    double _staticLabelWidth;
    double _digitWidth;
    struct CGSize _textSize;
    _Bool _isShowingDigits;
    _Bool _labelWasSized;
    _Bool _isSigned;
    _Bool _suffixSmallCaps;
    _Bool _frozen;
    CLKFont *_font;
    CDUnknownBlockType _didResizeHandler;
}

@property (nonatomic) double time;
@property (copy, nonatomic) NSString *suffix;
@property (nonatomic) _Bool suffixSmallCaps;
@property (copy, nonatomic) NSString *prefix;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) CLKFont *font;
@property (nonatomic, readonly) _Bool showSubSeconds;
@property (nonatomic) _Bool frozen;
@property (nonatomic, readonly) struct CGSize textSize;
@property (nonatomic, readonly) double actualWidth;
@property (copy, nonatomic) CDUnknownBlockType didResizeHandler;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLabelText:(id)arg1;
- (double)_labelWidth;
- (void)calculateMetrics;
- (void)_localeChanged;
- (void)forceTime:(double)arg1;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 signed:(_Bool)arg4 forDevice:(id)arg5;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 forDevice:(id)arg4;
- (id)_cachedImageForDigit:(unsigned long long)arg1;
- (id)getTimeText;
- (id)_localImageForDigit:(unsigned long long)arg1;
- (_Bool)shouldShowDigits;
- (void)_invalidateDigitImages;
- (id)formatTimeInterval;
- (void)createDigitViews;
- (void)sizeToFitLabelIfNeeded;
- (void)recalculateSize;
- (id)initWithMonospacedFontOfSize:(double)arg1 forDevice:(id)arg2;

@end
