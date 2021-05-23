/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSArray, NSDate, NSString, NSURL;

@interface NTKCalendarEntryModel : NTKTimelineEntryModel

{
    _Bool _displayAsTomorrow;
    _Bool _displayAsConflicting;
    _Bool _displayAsFirstInDay;
    _Bool _overlappingDates;
    _Bool _displayEntryDateInGraphicCircularView;
    NSString *_identifier;
    NSDate *_eventStartDate;
    NSDate *_eventEndDate;
    NSString *_primaryEventTitle;
    NSString *_primaryEventLocation;
    NSString *_secondaryEventTitle;
    NSString *_primaryEventOrganizerName;
    unsigned long long _overlappingEventCount;
    unsigned long long _eventsInDayCount;
    NSURL *_launchURL;
    NSArray *_eventColors;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *eventStartDate;
@property (retain, nonatomic) NSDate *eventEndDate;
@property (retain, nonatomic) NSString *primaryEventTitle;
@property (retain, nonatomic) NSString *primaryEventLocation;
@property (retain, nonatomic) NSString *secondaryEventTitle;
@property (retain, nonatomic) NSString *primaryEventOrganizerName;
@property (nonatomic) _Bool displayAsTomorrow;
@property (nonatomic) _Bool displayAsConflicting;
@property (nonatomic) _Bool displayAsFirstInDay;
@property (nonatomic) unsigned long long overlappingEventCount;
@property (nonatomic) _Bool overlappingDates;
@property (nonatomic) unsigned long long eventsInDayCount;
@property (retain, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) NSArray *eventColors;
@property (nonatomic) _Bool displayEntryDateInGraphicCircularView;

+ (id)lockedEntryForFamily:(long long)arg1;
+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)signatureBezel:(id)arg1;
+ (id)signatureCircular:(id)arg1;
+ (id)signatureCorner:(id)arg1;
+ (id)signatureRectangular:(id)arg1;
+ (id)contentForLargeModular:(id)arg1;
+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 timeZone:(id)arg6 options:(unsigned long long)arg7;
+ (id)_modularSmallConflictImageProvider;
+ (id)_modularSmallCalendarImageProvider;
+ (id)_extraLargeConflictImageProvider;
+ (id)_extraLargeCalendarImageProvider;
+ (id)_signatureCircularCalendarProvider:(id)arg1;
+ (id)_signatureCornerImageProvider;
+ (id)contentForSignatureRectangular:(id)arg1;
+ (id)_utilityCalendarImageProvider;
+ (id)_entryForTemplateDescription:(id)arg1 family:(long long)arg2;

- (id)description;
- (id)templateForComplicationFamily:(long long)arg1;

@end
