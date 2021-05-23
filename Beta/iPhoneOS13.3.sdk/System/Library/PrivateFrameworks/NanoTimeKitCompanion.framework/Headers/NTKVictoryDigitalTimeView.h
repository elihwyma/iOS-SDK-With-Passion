/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKTimeFormatter, NSString, NTKVictoryDigitsView;

@protocol NTKVictoryDigitalTimeViewDelegate;

@interface NTKVictoryDigitalTimeView : UIView

{
    CLKDevice *_device;
    NTKVictoryDigitsView *_upperDigitsView;
    NTKVictoryDigitsView *_lowerDigitsView;
    NTKVictoryDigitsView *_flipDigitsView;
    _Bool _flipViewIsLower;
    CLKTimeFormatter *_timeFormatter;
    _Bool _frozen;
    _Bool _invertedColors;
    unsigned long long _style;
    unsigned long long _color;
    id <NTKVictoryDigitalTimeViewDelegate> _delegate;
}

@property (nonatomic) _Bool invertedColors;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long color;
@property (weak, nonatomic) id <NTKVictoryDigitalTimeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) _Bool frozen;

+ (id)transitionTimingFunction;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (long long)defaultAppearance;
- (void)willBeginEditing;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (id)initForDevice:(id)arg1;
- (void)clearEditingTransitions;
- (void)_setupFlipDigitsView;
- (void)_setFlipViewIsLower:(_Bool)arg1;
- (void)_resetDigitAppearanceForStyle:(unsigned long long)arg1;
- (long long)_upperDigitAppearanceForStyle:(unsigned long long)arg1;
- (long long)_lowerDigitAppearanceForStyle:(unsigned long long)arg1;

@end
