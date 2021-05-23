/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKStructuredLocation, NSDate, NSDictionary, NSString, NSURL;

@interface CALNTriggeredEventNotificationInfo : NSObject

{
    _Bool _isAllDay;
    _Bool _hasSuggestedLocation;
    _Bool _eventHasAlarms;
    _Bool _allowsLocationAlerts;
    _Bool _forceDisplayOfNewTravelAdvisoryHypotheses;
    NSString *_title;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_eventID;
    NSString *_eventObjectID;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_legacyIdentifier;
    EKStructuredLocation *_preferredLocation;
    NSURL *_conferenceURL;
    NSURL *_mailtoURL;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *location;
@property (copy, nonatomic, readonly) NSString *locationWithoutPrediction;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) _Bool isAllDay;
@property (copy, nonatomic, readonly) NSString *eventID;
@property (copy, nonatomic, readonly) NSString *eventObjectID;
@property (copy, nonatomic, readonly) NSDictionary *eventRepresentationDictionary;
@property (copy, nonatomic, readonly) NSString *legacyIdentifier;
@property (nonatomic, readonly) EKStructuredLocation *preferredLocation;
@property (copy, nonatomic, readonly) NSURL *conferenceURL;
@property (copy, nonatomic, readonly) NSURL *mailtoURL;
@property (nonatomic, readonly) _Bool hasSuggestedLocation;
@property (nonatomic, readonly) _Bool eventHasAlarms;
@property (nonatomic, readonly) _Bool allowsLocationAlerts;
@property (nonatomic, readonly) _Bool forceDisplayOfNewTravelAdvisoryHypotheses;

- (id)description;
- (id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(_Bool)arg6 eventID:(id)arg7 eventObjectID:(id)arg8 eventRepresentationDictionary:(id)arg9 legacyIdentifier:(id)arg10 preferredLocation:(id)arg11 conferenceURL:(id)arg12 mailtoURL:(id)arg13 hasSuggestedLocation:(_Bool)arg14 eventHasAlarms:(_Bool)arg15 allowsLocationAlerts:(_Bool)arg16 forceDisplayOfNewTravelAdvisoryHypotheses:(_Bool)arg17;

@end
