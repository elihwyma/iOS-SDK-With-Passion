/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject

{
    id <CALNCoreLocationProvider> _coreLocationProvider;
}

@property (nonatomic, readonly) id <CALNCoreLocationProvider> coreLocationProvider;
@property (nonatomic, readonly) _Bool allowsLocationAlerts;

- (void)markAsHavingReceivedLocation;
- (id)initWithCoreLocationProvider:(id)arg1;

@end
