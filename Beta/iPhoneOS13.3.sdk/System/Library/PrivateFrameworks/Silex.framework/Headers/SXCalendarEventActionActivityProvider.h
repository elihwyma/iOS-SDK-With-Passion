/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXCalendarPresenter, SXHost;

@interface SXCalendarEventActionActivityProvider : NSObject

{
    id <SXCalendarPresenter> _calendarPresenter;
    id <SXHost> _host;
}

@property (nonatomic, readonly) id <SXCalendarPresenter> calendarPresenter;
@property (nonatomic, readonly) id <SXHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)createEvent:(id)arg1;
- (id)activityGroupForAction:(id)arg1;
- (void)showInCalendar:(id)arg1;
- (id)initWithCalendarPresenter:(id)arg1 host:(id)arg2;

@end
