/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUClipScrubberTimeController : NSObject

{
    double _timeScale;
    double _minimumDuration;
    double _maximumDuration;
}

@property (nonatomic) double minimumDuration;
@property (nonatomic) double maximumDuration;
@property (nonatomic) double timeScale;
@property (nonatomic, readonly) double maximumGestureScale;

+ (id)attributedTimeStringFromDate:(id)arg1;
+ (id)attributedLiveStringFromDate:(id)arg1;
+ (id)dayNameStringFromDate:(id)arg1;
+ (_Bool)_shouldUseTwentyFourHourTime;
+ (id)twentyFourHourTimeStringFromDate:(id)arg1;
+ (id)attributedStringFromTwentyFourHourDateString:(id)arg1;
+ (id)twelveHourTimeStringFromDate:(id)arg1;
+ (id)attributedStringFromDateString:(id)arg1;
+ (id)twentyFourHourLiveStringFromDate:(id)arg1;
+ (id)liveStringFromDate:(id)arg1;

- (id)init;
- (void)reloadClips:(id)arg1;
- (double)timeScaleForGestureScale:(double)arg1;
- (double)timeScaleForGestureScale:(double)arg1 maxDuration:(double)arg2;
- (_Bool)isAtMinimumZoom;
- (double)suggestedWidthForClip:(id)arg1;
- (void)updateTimeScaleIfNeeded;

@end
