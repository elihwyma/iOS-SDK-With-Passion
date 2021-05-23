/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSCalendar, NSDate, NSNumber, NSString, NSTimeZone, NSTimer, NTKColoringImageView, NTKHandView, UIColor;

@interface NTKAnalogHandsView : UIView

{
    NTKColoringImageView *_colorTransitionSecondHandLowerView;
    NTKColoringImageView *_colorTransitionSecondHandUpperView;
    NTKColoringImageView *_colorTransitionSecondHandSmallCircleView;
    NTKColoringImageView *_colorTransitionSecondHandLargeCircleView;
    _Bool _animatingToNewDate;
    NSNumber *_displayLinkToken;
    NSTimer *_animationUpdateTimer;
    double _timeOffset;
    CALayer *_minuteHandTransitionBodyLayer;
    CALayer *_minuteHandTransitionStemLayer;
    CALayer *_minuteHandTransitionPegLayer;
    CALayer *_hourHandTransitionBodyLayer;
    CALayer *_hourHandTransitionStemLayer;
    unsigned long long _style;
    _Bool _timeScrubbing;
    _Bool _frozen;
    _Bool _showDebugClientSideHands;
    _Bool _shouldRestoreSecondHandAfterScrubbing;
    CLKDevice *_device;
    NTKHandView *_hourHandView;
    NTKHandView *_minuteHandView;
    NTKHandView *_secondHandView;
    NSDate *_overrideDate;
    NSCalendar *_calendar;
    long long _dataMode;
    UIColor *_inlayColor;
    NTKHandView *_hourHandView_clientSide;
    NTKHandView *_minuteHandView_clientSide;
    NTKHandView *_secondHandView_clientSide;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) NTKHandView *hourHandView_clientSide;
@property (nonatomic, readonly) NTKHandView *minuteHandView_clientSide;
@property (nonatomic, readonly) NTKHandView *secondHandView_clientSide;
@property (nonatomic) _Bool showDebugClientSideHands;
@property (retain, nonatomic) NTKHandView *hourHandView;
@property (retain, nonatomic) NTKHandView *minuteHandView;
@property (retain, nonatomic) NTKHandView *secondHandView;
@property (nonatomic) _Bool shouldRestoreSecondHandAfterScrubbing;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) UIView *secondHandDot;
@property (nonatomic, readonly) UIView *minuteHandDot;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) _Bool timeScrubbing;
@property (nonatomic) long long dataMode;
@property (nonatomic, getter=isFrozen) _Bool frozen;
@property (retain, nonatomic) UIColor *inlayColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)preferredCountOfInstancesToCache;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setTimeOffset:(double)arg1;
- (void)_handleDisplayLink;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (id)displayTime;
- (id)initForDevice:(id)arg1;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)applySecondHandColor:(id)arg1;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (double)_minuteHandDotDiameter;
- (id)initForDevice:(id)arg1 withStyle:(unsigned long long)arg2;
- (void)_significantTimeChanged;
- (void)_deregisterFromDisplayLinkManager;
- (void)_enumerateHandViews:(CDUnknownBlockType)arg1;
- (void)_startNewTimeAnimation;
- (void)_stopTimeAnimation;
- (void)_repointDebugHandsToCurrentTime;
- (_Bool)_canRunTimeAnimation;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;
- (void)scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_enumerateSecondHandViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_addHourMinuteHandsTransitionLayers;
- (void)_removeColorTransitionViews;
- (_Bool)_dontRepointDebugHands;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2;
- (void)_accessibilityInvalidateElements;

@end
