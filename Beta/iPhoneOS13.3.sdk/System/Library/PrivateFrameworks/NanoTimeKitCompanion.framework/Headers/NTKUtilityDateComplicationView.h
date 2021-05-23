/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView

{
    NTKDateComplicationLabel *_label;
    unsigned long long _dateStyle;
}

@property (nonatomic, readonly) unsigned long long dateStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (id)foregroundColor;
- (id)accentColor;
- (void)setAccentColor:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;
- (double)_widthThatFits;
- (void)_invalidateLabelSize;

@end
