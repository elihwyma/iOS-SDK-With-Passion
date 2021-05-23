/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject

{
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    _Bool _selected;
    _Bool _showSelectAllButton;
    _Bool _showVerifyAccountButton;
    EKSource *_source;
    NSString *_footer;
}

@property (retain, nonatomic) EKSource *source;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool showSelectAllButton;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *typeTitle;
@property (retain, nonatomic, readonly) NSArray *calendarInfos;
@property (copy, nonatomic, readonly) NSSet *calendarSet;
@property (copy, nonatomic, readonly) NSSet *selectedCalendarSet;
@property (nonatomic, readonly) unsigned long long numCalendars;
@property (nonatomic, readonly) unsigned long long numSelectableCalendars;
@property (nonatomic, readonly) unsigned long long numSelectedCalendars;
@property (nonatomic, readonly) _Bool showAddCalendarButton;
@property (nonatomic, readonly) _Bool showCalendarNameIfSolitary;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, readonly) _Bool isSubscribed;
@property (nonatomic) _Bool showVerifyAccountButton;
@property (retain, nonatomic) NSString *footer;
@property (nonatomic, readonly) EKSource *sourceForSyncError;

- (id)init;
- (id)description;
- (void)selectAll;
- (id)initWithSource:(id)arg1;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)removeCalendar:(id)arg1;
- (id)titleForBeginningOfSentence:(_Bool)arg1;
- (id)initWithCustomGroupType:(int)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (id)calendarAtIndex:(unsigned long long)arg1;
- (id)copyCalendars;
- (void)selectNone;

@end
