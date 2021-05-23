/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSDate, NSString, NTKOlympusTimeContentView;

@protocol NTKOlympusViewDelegate;

@interface NTKOlympusTimeView : UIView

{
    _Bool frozen;
    _Bool _maskingPathStartsFromHourHand;
    id <NTKOlympusViewDelegate> _delegate;
    NSDate *_date;
    double _hourHandAngle;
    double _minuteHandAngle;
    unsigned long long _currentStyle;
    unsigned long long _currentDial;
    unsigned long long _currentColor;
    CLKDevice *_device;
    NTKOlympusTimeContentView *_contentView;
    NTKOlympusTimeContentView *_overlayContentView;
    struct CGSize _maskingSize;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKOlympusTimeContentView *contentView;
@property (retain, nonatomic) NTKOlympusTimeContentView *overlayContentView;
@property (nonatomic) _Bool maskingPathStartsFromHourHand;
@property (nonatomic) struct CGSize maskingSize;
@property (nonatomic) double hourHandAngle;
@property (nonatomic) double minuteHandAngle;
@property (weak, nonatomic) id <NTKOlympusViewDelegate> delegate;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic) unsigned long long currentDial;
@property (nonatomic) unsigned long long currentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) _Bool frozen;

- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (_Bool)_maskingPathStartsFromHourHandForDate:(id)arg1;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (void)applyWindrunnerMaskWithDate:(id)arg1;
- (void)_createContentViewIfNeeded;
- (void)_createOverlayViewIfNeeded;
- (void)prepareForEditing;
- (void)cleanupAfterEditing;
- (_Bool)_hasWindrunnerWedge;
- (void)applyWindrunnerMaskWithDate:(id)arg1 force:(_Bool)arg2;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(_Bool)arg4;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (_Bool)canUpdateWindrunnerMask;
- (void)applyWindrunnerMaskWithHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)openVictoryAppFromRect:(struct CGRect)arg1;
- (void)olympusContentViewDidHandleLogoHighlighted:(id)arg1;
- (void)olympusContentViewDidHandleLogoResetHighlight:(id)arg1;
- (void)olympusContentView:(id)arg1 didHandleLogoTouchUpInsideFromRect:(struct CGRect)arg2;
- (id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 date:(id)arg5;
- (void)configureViewsForEditing;
- (void)setupViewsForCurrentState:(_Bool)arg1;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (double)shortestPathBetweenStartAngle:(double)arg1 targetAngle:(double)arg2;
- (void)updateMaskingPathStartPointWithNewHourAngle:(double)arg1 newMinuteAngle:(double)arg2;

@end
