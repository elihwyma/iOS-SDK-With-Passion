/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEOAnalyticsPipelineProxy;

@interface GEOAnalyticsPipelineManager : NSObject

{
    id <GEOAnalyticsPipelineProxy> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (id)init;
- (void)shortSessionValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setShortSessionValues:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)setEvalMode:(_Bool)arg1;
- (void)flushEvalData;
- (void)initiateUploadOfType:(int)arg1;
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;
- (id)getEvalStatus;
- (_Bool)PlatformDiagAndUsage;
- (_Bool)AppleInternal;
- (_Bool)GEOImproveMaps;
- (_Bool)GEOMapsLocationAuth;
- (_Bool)PlatformDiagAndUsageOrAppleInternal;
- (void)logToDiagAndUsageUnderBugId:(id)arg1 filePrefix:(id)arg2 logData:(id)arg3;
- (void)reportMapKitCountType:(int)arg1;

@end
