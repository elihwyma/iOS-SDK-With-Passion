/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportMapKitCountOperation : GEOAnalyticsPipelineReportOperation

{
    int _mapKitCountType;
    NSString *_appId;
}

- (void)main;
- (id)initWithMapKitCountType:(int)arg1 appId:(id)arg2 remoteProxy:(id)arg3 runQueue:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
