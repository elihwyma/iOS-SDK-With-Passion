/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class NSCalendar, NSDate, NSTimeZone, UIImage, UIImageView;

@interface MTUIAnalogClockView : UIView

{
    long long _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView *_dayHands[3];
    UIView *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    _Bool _nighttime;
    double _seconds;
    int _flutterIndex;
    _Bool _isRenderStateStale;
    NSCalendar *_calendar;
    _Bool _minuteHourAnimationTriggered;
}

@property (nonatomic) long long runMode;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) UIImageView *faceView;
@property (nonatomic, readonly) long long hour;
@property (nonatomic, readonly) long long minute;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, readonly, getter=isNighttime) _Bool nighttime;
@property (nonatomic, readonly, getter=isStarted) _Bool started;

+ (void)initialize;
+ (id)resourcePath;
+ (long long)style;
+ (struct UIEdgeInsets)shadowInsets;
+ (void)registerClock:(id)arg1;
+ (void)unregisterClock:(id)arg1;
+ (id)cacheTopLevelPath;
+ (id)cacheVersionHash;
+ (void)updateFlutterForAllTicking;
+ (void)registerTickingClock:(id)arg1;
+ (void)registerSweepingClock:(id)arg1;
+ (void)updateTimeForAllTicking;
+ (void)updateTimeForAllSweeping;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (Class)classForStyle:(long long)arg1;
+ (struct CGSize)clockSize;
+ (double)secondHandMainLength;
+ (double)secondHandOverhangLength;
+ (double)faceRadius;
+ (double)antialiasPaddingRatio;
+ (double)hourHandWidth;
+ (double)secondHandWidth;
+ (double)hourHandLength;
+ (double)minuteHandWidth;
+ (double)minuteHandLength;
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3 ignoreCache:(_Bool)arg4;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (id)cacheVersionedPath;
+ (id)imageCacheNameForType:(int)arg1 daytime:(_Bool)arg2;
+ (id)dayTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)nightTimeFaceColor;
+ (id)nightTimeTextColor;
+ (_Bool)doesFaceHaveShadow;
+ (id)shadowInfoAtIndex:(unsigned long long)arg1;
+ (double)numeralInset;
+ (id)numeralFont;
+ (void)adjustNumberalCenter:(struct CGPoint *)arg1 forNumeralIndex:(long long)arg2;
+ (id)clockFaceForDaytime:(_Bool)arg1 ignoreCache:(_Bool)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (id)dayTimeHourHandColor;
+ (id)nightTimeHourHandColor;
+ (id)dayTimeMinuteHandColor;
+ (id)nightTimeMinuteHandColor;
+ (id)dayTimeSecondHandColor;
+ (id)nightTimeSecondHandColor;
+ (double)secondHandLength;
+ (id)makeClockHand:(long long)arg1 daytime:(_Bool)arg2;
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3;
+ (double)overHourHandDotSize;
+ (id)dayTimeOverHourHandDotColor;
+ (id)nightTimeOverHourHandDotColor;
+ (id)makeDotImageSize:(double)arg1 color:(id)arg2;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (double)overSecondHandDotSize;
+ (id)overSecondHandDotColor;
+ (id)makeOverSecondHandDotImage;
+ (id)clockFaceForDaytime:(_Bool)arg1;
+ (id)clockHand:(long long)arg1 daytime:(_Bool)arg2;
+ (struct CGPoint)handRotationalCenterForHand:(long long)arg1;
+ (_Bool)hasOverHourHandDot;
+ (id)overHourHandDotForDayTime:(_Bool)arg1;
+ (_Bool)hasOverSecondHandDot;
+ (id)overSecondHandDotImage;
+ (_Bool)isClockRegistered:(id)arg1;
+ (struct CGSize)sizeForStyle:(long long)arg1;
+ (struct UIEdgeInsets)insetsForStyle:(long long)arg1;
+ (id)analogClockWithStyle:(long long)arg1;
+ (struct CGPoint)shadowRotationalCenterForHand:(long long)arg1;
+ (id)imageInBundleForName:(id)arg1;

- (id)init;
- (void)stop;
- (void)start;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)updateInterval;
- (void)updateTime;
- (void)handleLocaleChange;
- (void)updateFlutter;
- (void)updateTimeContinuously:(long long)arg1;
- (double)coarseUpdateInterval;
- (void)setHandTransformForHandIndex:(long long)arg1;
- (void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2;
- (void)updateTimeAnimated:(_Bool)arg1;
- (void)setTime:(id)arg1 animated:(_Bool)arg2;
- (void)setNighttime:(_Bool)arg1;

@end
