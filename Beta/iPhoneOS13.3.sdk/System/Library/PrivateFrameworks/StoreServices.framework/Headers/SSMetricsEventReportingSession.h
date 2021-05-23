/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL, SSMetricsEventController;

@interface SSMetricsEventReportingSession : NSObject

{
    long long _insertTimestamp;
    NSURL *_reportingURL;
    NSArray *_unreportedEvents;
    NSMutableArray *_unreportedEventPIDs;
    SSMetricsEventController *_eventController;
    NSString *_sessionCanaryIdentifier;
    _Bool _suppressUserInfo;
}

- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressUserInfo:(_Bool)arg3 eventController:(id)arg4;
- (id)_unreportedEvents;
- (id)writeEventsToStream:(id)arg1 uncompressedMaxSize:(long long)arg2;
- (id)sessionCanaryIdentifier;
- (long long)_estimateSizeOfJsonObject:(id)arg1;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressDSID:(_Bool)arg3 eventController:(id)arg4;
- (_Bool)anyUnreportedEvents;
- (_Bool)markEventsAsReported;
- (id)writeEventsToStream:(id)arg1;
- (void)_writeString:(id)arg1 toData:(id)arg2;

@end
