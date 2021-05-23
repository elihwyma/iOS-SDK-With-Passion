/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation

{
    int _logMsgType;
    int _logMsgEventType;
    NSData *_logMsg;
}

- (void)main;
- (id)initWithType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end
