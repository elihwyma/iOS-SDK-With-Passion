/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class CLKComplicationTemplate, CLKComplicationTimelineEntry, NSDate;

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation

{
    unsigned long long _directions;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _privacyBehavior;
    unsigned long long _timelineAnimationBehavior;
    CLKComplicationTimelineEntry *_currentEntry;
    CLKComplicationTemplate *_alwaysOnTemplate;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;

- (void)_start;
- (void)_cancel;
- (void)_getTimeTravelDirections;
- (void)_getStartDate;
- (void)_getEndDate;
- (void)_getCurrentEntry;
- (void)_getPrivacyBehavior;
- (void)_getTimelineAnimationBehavior;
- (void)_getAlwaysOnTemplate;
- (void)_invokeHandler;

@end
