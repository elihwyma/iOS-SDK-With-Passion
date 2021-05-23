/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableDictionary, geo_isolater;

@protocol OS_dispatch_source;

@interface GEORequestThrottler : NSObject

{
    geo_isolater *_isolater;
    NSMutableDictionary *_enqueuedTickets;
    _Bool _isSubmitting;
    double _nextSubmissionTime;
    NSObject<OS_dispatch_source> *_submissionTimer;
}

+ (id)sharedThrottler;

- (id)init;
- (void)submitTickets;
- (void)_scheduleTimer:(double)arg1;
- (void)enqueueTicket:(id)arg1 submissionHandler:(CDUnknownBlockType)arg2;
- (void)cancelTicket:(id)arg1;

@end
