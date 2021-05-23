/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>

@class CLKTimeFormatter, NSString, UILabel;

@protocol NTKComplicationDisplayObserver;

@interface NTKZeusWorldClockComplicationView : NTKZeusFramedComplicationView

{
    UILabel *_timeLabel;
    UILabel *_cityLabel;
    CLKTimeFormatter *_formatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

- (id)init;
- (void)dealloc;
- (void)setTimeZone:(id)arg1;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (void)_updateLabels;
- (void)setOverrideDate:(id)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)setShortCity:(id)arg1;

@end
