/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface CalMockCalendarDataContainerProvider : NSObject

{
    NSURL *_calendarDataContainerURL;
}

@property (retain, nonatomic) NSURL *calendarDataContainerURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)containerForPersonaIdentifier:(id)arg1;

@end
