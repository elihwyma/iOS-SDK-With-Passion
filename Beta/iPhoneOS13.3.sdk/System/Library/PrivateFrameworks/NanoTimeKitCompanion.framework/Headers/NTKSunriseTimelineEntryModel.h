/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class CLLocation, NSDate, NSString;

@interface NTKSunriseTimelineEntryModel : NTKTimelineEntryModel

{
    _Bool _showingSunrise;
    _Bool _currentEvent;
    NSDate *_sunriseDate;
    NSDate *_sunsetDate;
    long long _constantSun;
    NSString *_locationText;
    CLLocation *_location;
    NSString *_animationGroup;
}

@property (retain, nonatomic) NSDate *sunriseDate;
@property (retain, nonatomic) NSDate *sunsetDate;
@property (nonatomic) long long constantSun;
@property (nonatomic) _Bool showingSunrise;
@property (nonatomic) _Bool currentEvent;
@property (retain, nonatomic) NSString *locationText;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic, readonly) NSDate *eventDate;
@property (retain, nonatomic) NSString *animationGroup;

+ (id)largeModular:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)largeUtility:(id)arg1 suppressCountdown:(_Bool)arg2;
+ (id)_signatureCorner:(id)arg1;
+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5;
+ (id)_eventTimeAndCountdown:(id)arg1 suppressCountdown:(_Bool)arg2 suppressCommaSeparator:(_Bool)arg3 abbreviated:(_Bool)arg4;

- (id)description;
- (id)templateForComplicationFamily:(long long)arg1;

@end
