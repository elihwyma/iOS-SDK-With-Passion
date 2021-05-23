/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/ESDClientDelegate.h>

@class NSArray, NSDate, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ESDClientCalendarAvailabilityResponseDelegate : ESDClientDelegate

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)calendarAvailabilityRequestFinishedWithError:(id)arg1;
- (void)performRequest;
- (void)calendarAvailabilityRequestReturnedResults:(id)arg1;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6;

@end
