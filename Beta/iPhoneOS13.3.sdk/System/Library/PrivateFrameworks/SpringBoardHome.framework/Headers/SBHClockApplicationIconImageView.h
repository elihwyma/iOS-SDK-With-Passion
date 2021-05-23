/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBLiveIconImageView.h>

@class CALayer, NSString, SBHClockIconVisualConfiguration, UIImage;

@interface SBHClockApplicationIconImageView : SBLiveIconImageView

{
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_hourMinuteDot;
    CALayer *_secondDot;
    unsigned int _jitterSkips;
    UIImage *_mappedContentsImage;
    UIImage *_squareMappedContentsImage;
    NSString *_currentNumberingSystem;
    SBHClockIconVisualConfiguration *_visualConfiguration;
}

@property (copy, nonatomic) NSString *currentNumberingSystem;
@property (copy, nonatomic) SBHClockIconVisualConfiguration *visualConfiguration;

+ (void)initialize;
+ (id)defaultConfiguration;
+ (void)_timerFired:(id)arg1;
+ (id)overrideDate;
+ (id)effectiveDate;
+ (id)systemNumberingSystem;
+ (id)generateProcessedMappedIconImageWithName:(id)arg1 imageInfo:(struct SBIconImageInfo)arg2 includingMask:(_Bool)arg3;
+ (void)setOverrideDate:(id)arg1;
+ (void)_handleTimeChange:(id)arg1;

- (void)prepareForReuse;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)contentsImage;
- (id)backgroundImageName;
- (void)_setAnimating:(_Bool)arg1;
- (void)localeDidChange:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (void)updateUnanimated;
- (void)updateAnimatingState;
- (_Bool)isAnimationAllowed;
- (void)setJittering:(_Bool)arg1;
- (void)_timerFiredWithComponents:(id)arg1 flags:(unsigned long long)arg2;
- (void)_updateUnanimatedWithComponents:(id)arg1;
- (id)squareContentsImage;

@end
