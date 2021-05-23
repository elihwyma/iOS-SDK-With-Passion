/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer, CLKDevice, CLKFont, NSArray, NSCalendar, NSDate, NSString, NTKAnalogHandsView, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle;

@interface NTKDualTimeView : UIView

{
    NSDate *_overrideDate;
    NSCalendar *_calendar;
    struct NSNumber *_clockTimerToken;
    CAReplicatorLayer *_hourTickReplicatorLayer;
    CAReplicatorLayer *_minuteTickReplicatorLayer;
    UIView *_digitalContainerView;
    CALayer *_digitalTicksContainer;
    NSArray *_digitalTicks;
    NTKDigitalTimeLabelStyle *_digitalStyle;
    CLKFont *_digitalLabelFont;
    _Bool _frozen;
    _Bool _editing;
    _Bool _hideActiveTicks;
    _Bool _useMonospacedDigitalNumbers;
    CLKDevice *_device;
    unsigned long long _style;
    unsigned long long _color;
    UIView *_dialBackgroundView;
    NTKAnalogHandsView *_analogHandsView;
    NTKDigitalTimeLabel *_digitalTimeLabel;
    UIView *_dialContainerView;
    UIView *_analogContainerView;
    UIView *_analogTickContainerView;
}

@property (retain, nonatomic) UIView *dialContainerView;
@property (retain, nonatomic) UIView *dialBackgroundView;
@property (retain, nonatomic) UIView *analogContainerView;
@property (retain, nonatomic) UIView *analogTickContainerView;
@property (retain, nonatomic) NTKAnalogHandsView *analogHandsView;
@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic, getter=isFrozen) _Bool frozen;
@property (nonatomic) _Bool editing;
@property (nonatomic) _Bool hideActiveTicks;
@property (nonatomic) _Bool useMonospacedDigitalNumbers;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long color;
@property (nonatomic, readonly) NTKDigitalTimeLabel *digitalTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_setupDigitalTimeViews;
- (id)_secondTickActiveColorForColor:(unsigned long long)arg1;
- (void)_setupAnalogHandsView;
- (void)_didFinishTimeViewSetup;
- (_Bool)shouldUseCustomDialBackground;
- (id)_customDialBackgroundView;
- (double)_analogTickInset;
- (struct CGSize)_hourTickSize;
- (struct CGSize)_minuteTickSize;
- (unsigned long long)_hourTickCount;
- (unsigned long long)_minuteTickCount;
- (id)_hourTickColorForColor:(unsigned long long)arg1;
- (id)_minuteTickColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1;
- (struct CGSize)_secondTickSize;
- (double)_digitalTimeLabelFontSize;
- (id)_digitalTimeLabelColorForColor:(unsigned long long)arg1;
- (id)_secondTickInactiveColorForColor:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 andDevice:(id)arg3;
- (id)_secondHandColorForColor:(unsigned long long)arg1;
- (void)setSecondsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupDial;
- (void)setupTimeViews;
- (void)_endDigitalTicksTimer;
- (void)_tearDownAnalogContainerView;
- (void)_tearDownDigitalContainerView;
- (void)_setupAnalogTimeViews;
- (void)_setupAnalogTicks;
- (id)_digitalLabelFont;
- (void)_setupDigitalTicks;
- (void)_startDigitalTicksTimer;
- (double)_digitalTickInset;
- (void)_refreshDigitalTicksWithNow:(id)arg1 secondFraction:(double)arg2;
- (void)_colorizeDigitalTicksWithActiveColor:(id)arg1 inactiveColor:(id)arg2 now:(id)arg3 secondFraction:(double)arg4;
- (void)_updateDigitalLabelFont;
- (id)_dialColorForColor:(unsigned long long)arg1;
- (void)_colorizeAnalogTicksWithHourColor:(id)arg1 minuteColor:(id)arg2;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ignoreTimeView:(_Bool)arg4;
- (id)_activeTimeView;

@end
