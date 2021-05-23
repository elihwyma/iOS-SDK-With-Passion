/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKUITextAndHeaderItem, NSArray, NSDate, NSDictionary, NSString;

@interface EKUIEventNotificationRepresentation : NSObject

{
    _Bool _allDay;
    unsigned long long _type;
    EKUITextAndHeaderItem *_titleItem;
    EKUITextAndHeaderItem *_subtitleItem;
    NSArray *_supplementaryItems;
    NSDictionary *_userActivityUserInfo;
    NSDate *_date;
    NSDate *_endDate;
    NSString *_sourceIdentifier;
    NSString *_externalURLString;
    NSArray *_potentialConflictDates;
    NSString *_notes;
    NSDictionary *_organizerContactDictionary;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) EKUITextAndHeaderItem *titleItem;
@property (retain, nonatomic) EKUITextAndHeaderItem *subtitleItem;
@property (retain, nonatomic) NSArray *supplementaryItems;
@property (retain, nonatomic) NSDictionary *userActivityUserInfo;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isAllDay) _Bool allDay;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *externalURLString;
@property (retain, nonatomic) NSArray *potentialConflictDates;
@property (retain, nonatomic) NSString *notes;
@property (nonatomic, readonly) NSDictionary *organizerContactDictionary;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)previewForNotes:(id)arg1;
+ (id)_whereLocalizedString;
+ (id)_whenLocalizedString;
+ (id)_fromLocalizedString;
+ (id)_invitationUpdatedTitleLocalizedString;
+ (_Bool)_invitationNotificationHasResourceChanges:(id)arg1 changesString:(id *)arg2;
+ (id)upcomingEventNotificationRepresentationWithEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3;
+ (id)defaultEventNotificationRepresentationWithTitle:(id)arg1 message:(id)arg2 notes:(id)arg3;
+ (id)invitationNotificationRepresentationWithNotification:(id)arg1 event:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
+ (id)responseNotificationWithTitle:(id)arg1 message:(id)arg2;
+ (id)resourceChangeNotificationWithNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
+ (id)timeToLeaveNotificationRepresentationWithHypothesisMessage:(id)arg1 event:(id)arg2 date:(id)arg3 displayTimeZone:(id)arg4;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (void)_setOwnerForContactDictionary:(id)arg1;
- (void)updateUpcomingEventNotificationWithHypothesisMessage:(id)arg1;
- (id)dictionaryRepresentationsOfSupplementaryItems;
- (void)setOrganizerForContactDictionary:(id)arg1;

@end
