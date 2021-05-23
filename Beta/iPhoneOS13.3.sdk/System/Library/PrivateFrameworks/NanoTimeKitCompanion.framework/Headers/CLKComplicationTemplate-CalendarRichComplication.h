/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSArray, NSDate;

@interface CLKComplicationTemplate (CalendarRichComplication)

@property (retain, nonatomic) NSArray *cal_eventColors;
@property (retain, nonatomic) CLKTextProvider *cal_firstText;
@property (retain, nonatomic) CLKTextProvider *cal_secondText;
@property (retain, nonatomic) CLKTextProvider *cal_thirdText;
@property (nonatomic) _Bool cal_hasConflicts;
@property (retain, nonatomic) NSDate *cal_dateOverride;

- (void)cal_setKey:(id)arg1 value:(id)arg2;

@end
