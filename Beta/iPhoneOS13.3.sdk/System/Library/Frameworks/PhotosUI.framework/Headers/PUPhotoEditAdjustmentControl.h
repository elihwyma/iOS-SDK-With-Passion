/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIControl.h>

@class NSMapTable, NSNumberFormatter, PUPhotoEditCircularIndicatorView, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAdjustmentControl : UIControl

{
    _Bool _shouldShowValueLabel;
    _Bool _displayMappedValue;
    _Bool _shouldShowCircularRing;
    _Bool _shouldScaleDownImage;
    _Bool _valueChanged;
    double _value;
    double _defaultValue;
    double _identityValue;
    double _minValue;
    double _maxValue;
    UIColor *_defaultColor;
    UIColor *_alternateColor;
    UILabel *_valueLabel;
    UIImageView *_imageView;
    PUPhotoEditCircularIndicatorView *_circularIndicatorView;
    NSMapTable *_stateToContentMap;
    NSNumberFormatter *_formatter;
}

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PUPhotoEditCircularIndicatorView *circularIndicatorView;
@property (retain, nonatomic) NSMapTable *stateToContentMap;
@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *alternateColor;
@property (nonatomic) _Bool valueChanged;
@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (nonatomic) double value;
@property (nonatomic) double defaultValue;
@property (nonatomic) double identityValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) _Bool shouldShowValueLabel;
@property (nonatomic) _Bool displayMappedValue;
@property (nonatomic) _Bool shouldShowCircularRing;
@property (nonatomic) _Bool shouldScaleDownImage;

- (void)setEnabled:(_Bool)arg1;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateImageView;
- (void)setSelected:(_Bool)arg1;
- (void)_updateSubviews;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)_setupImageView;
- (id)_contentForState:(unsigned long long)arg1;
- (id)_currentImage;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)resetToDefaults;
- (void)setColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)colorForState:(unsigned long long)arg1;
- (void)_layoutImageView;
- (void)_resetAllValues;
- (_Bool)_setContentPropertyKey:(id)arg1 withValue:(id)arg2 forState:(unsigned long long)arg3;
- (void)_updateRingVisibility;
- (void)_updateSubviewVisibility;
- (void)_updateSubviewColors;
- (void)_updateFormatter;
- (void)_updateSubviewValues;

@end
