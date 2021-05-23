/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOXPCActivity, NSDate, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface GEORequestCountPowerLogger : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_eventName;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    GEOXPCActivity *_activity;
}

+ (id)sharedInstance;
+ (_Bool)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2;
+ (void)cancelOldActivities;

- (id)init;
- (void)dealloc;
- (void)startNewSessionWithName:(id)arg1;
- (void)_flushToPowerLog;
- (void)_cancelXpcActivity;
- (void)_scheduleXpcActivity;
- (void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2;

@end
