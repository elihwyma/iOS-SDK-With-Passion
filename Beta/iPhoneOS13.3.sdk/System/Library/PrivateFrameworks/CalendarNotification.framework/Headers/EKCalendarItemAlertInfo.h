/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKTravelEngineHypothesis, NSData, NSDate, NSString, NSTimeZone, NSURL, NSUserActivity;

@interface EKCalendarItemAlertInfo : NSObject

{
    _Bool _allDay;
    _Bool _tentative;
    _Bool _acknowledged;
    _Bool _refiring;
    _Bool _isOffsetFromTravelTimeStart;
    _Bool _isPseudoEvent;
    _Bool _hasGeoLocationCoordinates;
    _Bool _hasOrganizerThatIsNotCurrentUser;
    _Bool _isSuggestedLocation;
    _Bool _isOnSharedCalendar;
    _Bool _hasDisplayedLeaveByMessage;
    _Bool _hasDisplayedLeaveNowMessage;
    _Bool _hasDisplayedRunningLateMessage;
    NSString *_publisherBulletinID;
    NSString *_title;
    NSString *_location;
    NSDate *_eventDate;
    NSDate *_endDate;
    NSTimeZone *_eventTimeZone;
    NSUserActivity *_appLink;
    NSURL *_action;
    NSURL *_entityID;
    long long _proximity;
    NSString *_externalID;
    NSString *_dismissalID;
    NSString *_alarmID;
    NSData *_mapKitHandle;
    NSString *_organizerEmailAddress;
    NSString *_startLocationRouting;
    NSString *_locationAddress;
    EKTravelEngineHypothesis *_latestHypothesis;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate *_lastTimeBulletinAdded;
    NSURL *_conferenceURL;
    unsigned long long _currentRouteHypothesizerNotificationType;
    NSDate *_fireDate;
    struct CLLocationCoordinate2D _geoLocationCoordinates;
}

@property (nonatomic, readonly) NSString *recordID;
@property (nonatomic, readonly) NSString *publisherBulletinID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly) NSUserActivity *appLink;
@property (nonatomic, readonly) NSURL *action;
@property (nonatomic, readonly) NSURL *entityID;
@property (nonatomic, readonly) _Bool allDay;
@property (nonatomic, readonly) _Bool tentative;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) _Bool acknowledged;
@property (nonatomic, readonly) NSString *dismissalID;
@property (nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) _Bool refiring;
@property (nonatomic, readonly) _Bool isOffsetFromTravelTimeStart;
@property (nonatomic, readonly) _Bool isPseudoEvent;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) _Bool hasGeoLocationCoordinates;
@property (nonatomic) struct CLLocationCoordinate2D geoLocationCoordinates;
@property (nonatomic) _Bool hasOrganizerThatIsNotCurrentUser;
@property (retain, nonatomic) NSString *organizerEmailAddress;
@property (retain, nonatomic) NSString *startLocationRouting;
@property (retain, nonatomic) NSString *locationAddress;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (retain, nonatomic) NSDate *lastTimeBulletinAdded;
@property (nonatomic) _Bool isSuggestedLocation;
@property (retain, nonatomic) NSURL *conferenceURL;
@property (nonatomic) _Bool isOnSharedCalendar;
@property (nonatomic) _Bool hasDisplayedLeaveByMessage;
@property (nonatomic) _Bool hasDisplayedLeaveNowMessage;
@property (nonatomic) _Bool hasDisplayedRunningLateMessage;
@property (nonatomic) unsigned long long currentRouteHypothesizerNotificationType;
@property (retain, nonatomic) NSDate *fireDate;
@property (nonatomic, readonly) _Bool isPurelyATimeToLeaveAlert;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(_Bool)arg6 tentative:(_Bool)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 appLink:(id)arg10 action:(id)arg11 proximity:(long long)arg12 externalID:(id)arg13 acknowledged:(_Bool)arg14 dismissalID:(id)arg15 alarmID:(id)arg16 isOffsetFromTravelTimeStart:(_Bool)arg17 refiring:(_Bool)arg18 pseudoEvent:(_Bool)arg19;
- (void)resetTimeToLeaveDisplayState;

@end
