/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange

{
    _Bool _titleChanged;
    _Bool _locationChanged;
    _Bool _startDateChanged;
    _Bool _startTimezoneChanged;
    _Bool _endDateChanged;
    _Bool _endTimezoneChanged;
    _Bool _notesChanged;
    _Bool _allDayChanged;
    EKObjectID *_calendarID;
    EKObjectID *_oldCalendarID;
    NSString *_externalID;
    NSString *_oldExternalID;
}

@property (nonatomic, readonly) EKObjectID *calendarID;
@property (nonatomic, readonly) EKObjectID *oldCalendarID;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSString *oldExternalID;
@property (nonatomic, readonly) _Bool titleChanged;
@property (nonatomic, readonly) _Bool locationChanged;
@property (nonatomic, readonly) _Bool startDateChanged;
@property (nonatomic, readonly) _Bool startTimezoneChanged;
@property (nonatomic, readonly) _Bool endDateChanged;
@property (nonatomic, readonly) _Bool endTimezoneChanged;
@property (nonatomic, readonly) _Bool notesChanged;
@property (nonatomic, readonly) _Bool allDayChanged;

+ (int)entityType;
+ (void)fetchCalendarItemChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchCalendarItemChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchCalendarItemChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (id)initWithChangeProperties:(id)arg1;

@end
