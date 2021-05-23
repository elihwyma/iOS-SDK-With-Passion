/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, NTKDigitalTimeLabel, UIColor;

@protocol NTKComplicationDisplayObserver;

@interface NTKDigitalTimeComplicationView : UIView <Swift>

{
    _Bool canUseCurvedText;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKDevice *_device;
    NTKDigitalTimeLabel *_timeLabel;
    CLKComplicationTemplate *_template;
    NSDate *_timeTravelDate;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeLabel;
@property (retain, nonatomic) CLKComplicationTemplate *template;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_labelFont;
- (void)updateDate;
- (void)setOverrideDate:(id)arg1;
- (id)complicationTemplate;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)timeOffsetChanged;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (unsigned long long)timelineAnimationFadeTypeOverride;

@end
