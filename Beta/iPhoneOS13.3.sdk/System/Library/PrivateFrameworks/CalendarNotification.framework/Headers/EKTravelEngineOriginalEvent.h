/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSData, NSDate, NSString;

@interface EKTravelEngineOriginalEvent : NSObject

{
    _Bool _locationIsAConferenceRoom;
    _Bool _automaticGeocodingAllowed;
    _Bool _hasPredictedLocation;
    _Bool _isOnSharedCalendar;
    int _transportTypeOverride;
    NSString *_eventExternalURL;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_locationString;
    CLLocation *_geoLocation;
    NSData *_locationMapKitHandle;
    NSString *_locationStringWithoutPrediction;
}

@property (retain, nonatomic) NSString *eventExternalURL;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int transportTypeOverride;
@property (retain, nonatomic) NSString *locationString;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *locationMapKitHandle;
@property (nonatomic) _Bool locationIsAConferenceRoom;
@property (nonatomic) _Bool automaticGeocodingAllowed;
@property (nonatomic) _Bool hasPredictedLocation;
@property (nonatomic) _Bool isOnSharedCalendar;
@property (retain, nonatomic) NSString *locationStringWithoutPrediction;

- (id)description;
- (_Bool)isEqualToOriginalEvent:(id)arg1;

@end
