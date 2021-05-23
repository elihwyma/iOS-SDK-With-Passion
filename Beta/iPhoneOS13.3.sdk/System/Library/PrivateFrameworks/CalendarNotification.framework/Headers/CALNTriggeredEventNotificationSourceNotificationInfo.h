/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKStructuredLocation, EKTravelEngineHypothesis, NSDate, NSDictionary, NSString, NSURL;

@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject

{
    _Bool _isAllDay;
    _Bool _isLocationEvent;
    _Bool _hasSuggestedLocation;
    _Bool _eventHasAlarms;
    _Bool _isOffsetFromTravelTimeStart;
    _Bool _allowsLocationAlerts;
    _Bool _forceDisplayOfNewTravelAdvisoryHypotheses;
    NSString *_title;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    EKStructuredLocation *_preferredLocation;
    NSDate *_startDate;
    NSDate *_endDate;
    NSURL *_launchURL;
    NSString *_eventID;
    NSString *_eventObjectID;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_legacyIdentifier;
    NSURL *_mapItemURL;
    NSURL *_conferenceURL;
    NSURL *_mailtoURL;
    NSString *_alarmID;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    EKTravelEngineHypothesis *_hypothesis;
    unsigned long long _travelAdvisoryTimelinessPeriod;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *location;
@property (copy, nonatomic, readonly) NSString *locationWithoutPrediction;
@property (nonatomic, readonly) EKStructuredLocation *preferredLocation;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) _Bool isAllDay;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, readonly) _Bool isLocationEvent;
@property (copy, nonatomic, readonly) NSString *eventID;
@property (copy, nonatomic, readonly) NSString *eventObjectID;
@property (copy, nonatomic, readonly) NSDictionary *eventRepresentationDictionary;
@property (copy, nonatomic, readonly) NSString *legacyIdentifier;
@property (copy, nonatomic, readonly) NSURL *mapItemURL;
@property (copy, nonatomic, readonly) NSURL *conferenceURL;
@property (copy, nonatomic, readonly) NSURL *mailtoURL;
@property (nonatomic, readonly) _Bool hasSuggestedLocation;
@property (nonatomic, readonly) _Bool eventHasAlarms;
@property (copy, nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) _Bool isOffsetFromTravelTimeStart;
@property (copy, nonatomic, readonly) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (nonatomic, readonly) _Bool allowsLocationAlerts;
@property (copy, nonatomic, readonly) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic, readonly) unsigned long long travelAdvisoryTimelinessPeriod;
@property (nonatomic, readonly) _Bool forceDisplayOfNewTravelAdvisoryHypotheses;

- (id)description;
- (id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 preferredLocation:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 isAllDay:(_Bool)arg7 launchURL:(id)arg8 isLocationEvent:(_Bool)arg9 eventID:(id)arg10 eventObjectID:(id)arg11 eventRepresentationDictionary:(id)arg12 legacyIdentifier:(id)arg13 mapItemURL:(id)arg14 conferenceURL:(id)arg15 mailtoURL:(id)arg16 hasSuggestedLocation:(_Bool)arg17 eventHasAlarms:(_Bool)arg18 alarmID:(id)arg19 isOffsetFromTravelTimeStart:(_Bool)arg20 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg21 allowsLocationAlerts:(_Bool)arg22 hypothesis:(id)arg23 travelAdvisoryTimelinessPeriod:(unsigned long long)arg24 forceDisplayOfNewTravelAdvisoryHypotheses:(_Bool)arg25;

@end
